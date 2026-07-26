`timescale 1ns / 100ps

module fp32_down (
    input wire clk_i,
    input wire rstn_i,
    input wire valid_i,
    input wire [31:0] A,
    output wire [31:0] Result,
    output wire done_o
);
  localparam [31:0] CONST = 32'hbf800000;  // -1.0 in FP32

  wire [4:0] zerocount;
  reg Sign;
  reg [7:0] Exponent;
  reg [22:0] Mantissa;

  wire comp, magcheck, zero;
  reg carry, check;
  reg [7:0] BigExp, SmallExp, DifferenceExp;
  reg [23:0] BigMan, SmallMan;
  reg [23:0] Temp_SmallMan, TempMan;

  // Control path - valid signal pipeline registers
  reg valid_stage1, valid_stage2, valid_stage3, valid_stage4, valid_stage5, valid_stage6;

  reg A_sign, C_sign;
  reg sign;
  reg [7:0] A_Exp, C_Exp;
  reg [22:0] A_Man, C_Man;

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
      A_sign <= A[31];
      C_sign <= CONST[31];
      A_Exp  <= A[30:23];
      C_Exp  <= CONST[30:23];
      A_Man  <= A[22:0];
      C_Man  <= CONST[22:0];
    end
  end

  assign comp = (A_Exp > C_Exp) ? 1'b1 : 1'b0;
  assign magcheck = (A_Exp ^ C_Exp) ? 1'b0 : ((A_Man > C_Man) ? 1'b1 : 1'b0);
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
      check <= A_sign ^ C_sign;
      sign  <= (comp | magcheck) ? A_sign : (zero ? 1'b0 : C_sign);

      if (zero) begin
        BigExp   <= 8'b0;
        SmallExp <= 8'b0;
        BigMan   <= 24'b0;
        SmallMan <= 24'b0;
      end else begin
        BigExp   <= comp ? A_Exp : C_Exp;
        SmallExp <= comp ? C_Exp : A_Exp;

        BigMan   <= {1'b1, (comp | magcheck) ? A_Man : C_Man};
        SmallMan <= {1'b1, (comp | magcheck) ? C_Man : A_Man};
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
      DifferenceExp <= BigExp - SmallExp;
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
      Temp_SmallMan <= SmallMan >> DifferenceExp;
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
      {carry, TempMan} <= check ? (BigMan - Temp_SmallMan) : (BigMan + Temp_SmallMan);
    end
  end

  cntlz24 stage_31 (
      .i(TempMan),
      .o(zerocount)
  );

  // Control path - Final Stage valid signal
  always @(posedge clk_i or negedge rstn_i) begin
    if (~rstn_i) begin
      valid_stage6 <= 1'b0;
      Sign <= 1'b0;
      Exponent <= 8'b0;
      Mantissa <= 23'b0;
    end else begin
      valid_stage6 <= valid_stage5;
      if (valid_stage5) begin
        if (carry) begin
          Mantissa <= TempMan[23:1];
          Exponent <= BigExp + 1;
        end else if (|TempMan[22:0]) begin
          Mantissa <= TempMan[22:0] << zerocount;
          Exponent <= BigExp - {3'b0, zerocount};
        end else begin
          Mantissa <= TempMan[22:0];
          Exponent <= BigExp;
        end
        Sign <= sign;
      end
    end
  end

  // Output assignments
  assign Result = {Sign, Exponent, Mantissa};
  assign done_o = valid_stage6;

endmodule

