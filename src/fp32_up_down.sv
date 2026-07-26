`timescale 1ns / 100ps

module fp32_up_down (
    input wire clk_i,
    input wire rstn_i,
    input wire valid_i,
    input wire [31:0] A,
    output wire [31:0] Result1,
    output wire [31:0] Result2,
    output wire done_o
);
  localparam [31:0] CONST_1 = 32'h3f800000;  // 1.0 in FP32
  localparam [31:0] CONST_2 = 32'hbf800000;  // -1.0 in FP32

  wire [4:0] zerocount1, zerocount2;
  reg Sign1, Sign2;
  reg [7:0] Exponent1, Exponent2;
  reg [22:0] Mantissa1, Mantissa2;

  wire comp1, comp2, magcheck1, magcheck2, zero;
  reg carry1, carry2, check1, check2;
  reg [7:0] BigExp1, BigExp2, SmallExp1, SmallExp2, DifferenceExp1, DifferenceExp2;
  reg [23:0] BigMan1, BigMan2, SmallMan1, SmallMan2;
  reg [23:0] Temp_SmallMan1, Temp_SmallMan2, TempMan1, TempMan2;

  // Control path - valid signal pipeline registers
  reg valid_stage1, valid_stage2, valid_stage3, valid_stage4, valid_stage5, valid_stage6;

  reg A_sign, C1_sign, C2_sign;
  reg sign1, sign2;
  reg [7:0] A_Exp, C1_Exp, C2_Exp;
  reg [22:0] A_Man, C1_Man, C2_Man;

  // Control path - Stage 1 valid signal
  always @(posedge clk_i or negedge rstn_i) begin
    if (~rstn_i) begin
      valid_stage1 <= 1'b0;
    end else begin
      valid_stage1 <= valid_i;
    end
  end

  // Data path - Stage 1: Input Registration
  always @(posedge clk_i) begin
    if (valid_i) begin
      A_sign  <= A[31];
      C1_sign <= CONST_1[31];
      C2_sign <= CONST_2[31];
      A_Exp   <= A[30:23];
      C1_Exp  <= CONST_1[30:23];
      C2_Exp  <= CONST_2[30:23];
      A_Man   <= A[22:0];
      C1_Man  <= CONST_1[22:0];
      C2_Man  <= CONST_2[22:0];
    end
  end

  assign comp1 = (A_Exp > C1_Exp) ? 1'b1 : 1'b0;
  assign comp2 = (A_Exp > C2_Exp) ? 1'b1 : 1'b0;
  assign magcheck1 = (A_Exp ^ C1_Exp) ? 1'b0 : ((A_Man > C1_Man) ? 1'b1 : 1'b0);
  assign magcheck2 = (A_Exp ^ C2_Exp) ? 1'b0 : ((A_Man > C2_Man) ? 1'b1 : 1'b0);
  assign zero = ~|{A_Exp, A_Man};

  // Control path - Stage 2 valid signal
  always @(posedge clk_i or negedge rstn_i) begin
    if (~rstn_i) begin
      valid_stage2 <= 1'b0;
    end else begin
      valid_stage2 <= valid_stage1;
    end
  end

  // Data path - Stage 2
  always @(posedge clk_i) begin
    if (valid_stage1) begin
      check1 <= A_sign ^ C1_sign;
      check2 <= A_sign ^ C2_sign;
      sign1  <= (comp1 | magcheck1) ? A_sign : (zero ? 1'b0 : C1_sign);
      sign2  <= (comp2 | magcheck2) ? A_sign : (zero ? 1'b0 : C2_sign);

      if (zero) begin
        BigExp1   <= 8'b0;
        BigExp2   <= 8'b0;
        SmallExp1 <= 8'b0;
        SmallExp2 <= 8'b0;
        BigMan1   <= 24'b0;
        BigMan2   <= 24'b0;
        SmallMan1 <= 24'b0;
        SmallMan2 <= 24'b0;
      end else begin
        BigExp1   <= comp1 ? A_Exp : C1_Exp;
        BigExp2   <= comp2 ? A_Exp : C2_Exp;
        SmallExp1 <= comp1 ? C1_Exp : A_Exp;
        SmallExp2 <= comp2 ? C2_Exp : A_Exp;

        BigMan1   <= {1'b1, (comp1 | magcheck1) ? A_Man : C1_Man};
        BigMan2   <= {1'b1, (comp2 | magcheck2) ? A_Man : C2_Man};
        SmallMan1 <= {1'b1, (comp1 | magcheck1) ? C1_Man : A_Man};
        SmallMan2 <= {1'b1, (comp2 | magcheck2) ? C2_Man : A_Man};
      end
    end
  end

  // Control path - Stage 3 valid signal
  always @(posedge clk_i or negedge rstn_i) begin
    if (~rstn_i) begin
      valid_stage3 <= 1'b0;
    end else begin
      valid_stage3 <= valid_stage2;
    end
  end

  // Data path - Stage 3
  always @(posedge clk_i) begin
    if (valid_stage2) begin
      DifferenceExp1 <= BigExp1 - SmallExp1;
      DifferenceExp2 <= BigExp2 - SmallExp2;
    end
  end

  // Control path - Stage 4 valid signal
  always @(posedge clk_i or negedge rstn_i) begin
    if (~rstn_i) begin
      valid_stage4 <= 1'b0;
    end else begin
      valid_stage4 <= valid_stage3;
    end
  end

  // Data path - Stage 4
  always @(posedge clk_i) begin
    if (valid_stage3) begin
      Temp_SmallMan1 <= SmallMan1 >> DifferenceExp1;
      Temp_SmallMan2 <= SmallMan2 >> DifferenceExp2;
    end
  end

  // Control path - Stage 5 valid signal
  always @(posedge clk_i or negedge rstn_i) begin
    if (~rstn_i) begin
      valid_stage5 <= 1'b0;
    end else begin
      valid_stage5 <= valid_stage4;
    end
  end

  // Data path - Stage 5
  always @(posedge clk_i) begin
    if (valid_stage4) begin
      {carry1, TempMan1} <= check1 ? (BigMan1 - Temp_SmallMan1) : (BigMan1 + Temp_SmallMan1);
      {carry2, TempMan2} <= check2 ? (BigMan2 - Temp_SmallMan2) : (BigMan2 + Temp_SmallMan2);
    end
  end

  cntlz24 stage_31_1 (
      .i(TempMan1),
      .o(zerocount1)
  );

  cntlz24 stage_31_2 (
      .i(TempMan2),
      .o(zerocount2)
  );

  // Control path - Final Stage valid signal
  always @(posedge clk_i or negedge rstn_i) begin
    if (~rstn_i) begin
      valid_stage6 <= 1'b0;
      Sign1 <= 1'b0;
      Sign2 <= 1'b0;
      Exponent1 <= 8'b0;
      Exponent2 <= 8'b0;
      Mantissa1 <= 23'b0;
      Mantissa2 <= 23'b0;
    end else begin
      valid_stage6 <= valid_stage5;
      if (valid_stage5) begin
        if (carry1) begin
          Mantissa1 <= TempMan1[23:1];
          Exponent1 <= BigExp1 + 1;
        end else if (|TempMan1[22:0]) begin
          Mantissa1 <= TempMan1[22:0] << zerocount1;
          Exponent1 <= BigExp1 - {3'b0, zerocount1};
        end else begin
          Mantissa1 <= TempMan1[22:0];
          Exponent1 <= BigExp1;
        end
        Sign1 <= sign1;

        if (carry2) begin
          Mantissa2 <= TempMan2[23:1];
          Exponent2 <= BigExp2 + 1;
        end else if (|TempMan2[22:0]) begin
          Mantissa2 <= TempMan2[22:0] << zerocount2;
          Exponent2 <= BigExp2 - {3'b0, zerocount2};
        end else begin
          Mantissa2 <= TempMan2[22:0];
          Exponent2 <= BigExp2;
        end
        Sign2 <= sign2;
      end
    end
  end

  // Output assignments
  assign Result1 = {Sign1, Exponent1, Mantissa1};
  assign Result2 = {Sign2, Exponent2, Mantissa2};
  assign done_o  = valid_stage6;

endmodule

