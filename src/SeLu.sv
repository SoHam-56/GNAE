`timescale 1ns / 100ps

module SeLu (
    input wire clk_i,
    input wire rstn_i,

    input wire valid_i,
    input wire is_positive_selu,

    input wire [31:0] A,
    input wire [31:0] selu_const,

    output reg [31:0] Result,
    output reg done_o
);
  // Internal signals for fp32_down path
  wire [31:0] fp32_down_result;
  wire done_fp32_down;
  reg valid_multiply;
  wire [31:0] multiply_result;
  wire done_multiply;

  // fp32_down (exponential) - only used for negative inputs
  fp32_down fp32_down_inst (
      .clk_i(clk_i & !is_positive_selu),
      .rstn_i(rstn_i),
      .valid_i(valid_i && !is_positive_selu),  // Only active for negative inputs
      .A(A),
      .Result(fp32_down_result),
      .done_o(done_fp32_down)
  );

  fp32Multiplier MUL (
      .clk_i      (clk_i),
      .rstn_i     (rstn_i),
      .valid_i    (valid_multiply),
      .A          (is_positive_selu ? A : fp32_down_result),
      .B          (selu_const),
      .result_o   (multiply_result),
      .done_o     (done_multiply),
      .overflow_o (),
      .underflow_o(),
      .invalid_o  ()
  );

  // Control logic for multiplier input and result handling
  always_ff @(posedge clk_i or negedge rstn_i) begin
    if (!rstn_i) begin
      valid_multiply <= 1'b0;
      Result <= 32'b0;
      done_o <= 1'b0;
    end else begin
      // Reset done signal
      done_o <= 1'b0;

      // Handle positive path
      if (is_positive_selu && valid_i) begin
        valid_multiply <= 1'b1;
      end

      // Handle negative path
      if (!is_positive_selu && done_fp32_down) begin
        valid_multiply <= 1'b1;
      end

      // Clear valid_multiply after multiply starts
      if (valid_multiply) begin
        valid_multiply <= 1'b0;
      end

      // Handle completion
      if (done_multiply) begin
        Result <= multiply_result;
        done_o <= 1'b1;
      end
    end
  end

endmodule


//module SeLu (
//    input wire clk_i,
//    input wire rstn_i,
//    input wire valid_i,
//    input wire [31:0] A,
//    input wire [31:0] selu_const,
//    output reg [31:0] Result,
//    output reg done_o
//);
//    // Internal signals
//    wire [31:0] fp32_down_result;
//    wire done_fp32_down;
//    reg valid_multiply;
//    wire [31:0] multiply_result;
//    wire done_multiply;

//    // Registers for input latching and state
//    reg input_valid;
//    reg [31:0] input_A;
//    reg is_negative;

//    // Input latching and sign detection logic
//    always_ff @(posedge clk_i or negedge rstn_i) begin
//        if (!rstn_i) begin
//            input_valid <= 1'b0;
//            input_A <= 32'b0;
//            is_negative <= 1'b0;
//        end else begin
//            if (valid_i) begin
//                input_valid <= 1'b1;
//                input_A <= A;
//                is_negative <= A[31];
//            end else if (done_multiply) begin  // Clear when operation completes
//                input_valid <= 1'b0;
//            end
//        end
//    end

//    // Only used for negative inputs
//    fp32_down fp32_down_inst (
//        .clk_i(clk_i & is_negative),
//        .rstn_i(rstn_i),
//        .valid_i(input_valid && is_negative),
//        .A(input_A),
//        .Result(fp32_down_result),
//        .done_o(done_fp32_down)
//    );

//    // Used for both paths
//    multiply_32 multiply_32_inst (
//        .clk_i(clk_i),
//        .rstn_i(rstn_i),
//        .valid_i(valid_multiply),
//        .A(!is_negative ? input_A : fp32_down_result),
//        .B(selu_const),
//        .Result(multiply_result),
//        .done_o(done_multiply)
//    );

//    // Control logic for multiplier input and result handling
//    always_ff @(posedge clk_i or negedge rstn_i) begin
//        if (!rstn_i) begin
//            valid_multiply <= 1'b0;
//            Result <= 32'b0;
//            done_o <= 1'b0;
//        end else begin
//            // Reset done signal
//            done_o <= 1'b0;

//            // Handle positive path
//            if (!is_negative && input_valid) begin
//                valid_multiply <= 1'b1;
//            end

//            // Handle negative path
//            if (is_negative && done_fp32_down) begin
//                valid_multiply <= 1'b1;
//            end

//            // Clear valid_multiply after multiply starts
//            if (valid_multiply) begin
//                valid_multiply <= 1'b0;
//            end

//            // Handle completion
//            if (done_multiply) begin
//                Result <= multiply_result;
//                done_o <= 1'b1;
//            end
//        end
//    end
//endmodule
