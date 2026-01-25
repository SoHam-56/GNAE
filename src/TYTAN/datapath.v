`timescale 1ns / 100ps

module datapath #(
    parameter DATA_WIDTH = 32
) (
    input wire clk_i,
    input wire rstn_i,
    input wire [DATA_WIDTH - 1:0] signal_i,
    input wire [DATA_WIDTH - 1:0] coeff_i,

    input wire load_result_i,
    input wire add_valid_i,
    input wire mul_valid_i,

    output wire add_done_o,
    output wire mul_done_o,
    output reg [DATA_WIDTH - 1:0] result_o
);

  reg [DATA_WIDTH - 1:0] mul_in1, mul_in2, add_in1, add_in2;
  wire [DATA_WIDTH - 1:0] adder_result, mul_result;

  always @(posedge clk_i) begin
    add_in1  <= coeff_i;
    add_in2  <= mul_result;
    mul_in1  <= signal_i;
    mul_in2  <= adder_result;
    result_o <= load_result_i ? adder_result : result_o;
  end

  Adder_32 ADD (
      .clk_i(clk_i),
      .rstn_i(rstn_i),
      .valid_i(add_valid_i),
      .A(add_in1),
      .B(add_in2),
      .Result(adder_result),
      .done_o(add_done_o)
  );

  fp32Multiplier MUL (
      .clk_i      (clk_i),
      .rstn_i     (rstn_i),
      .valid_i    (mul_valid_i),
      .A          (mul_in1),
      .B          (mul_in2),
      .result_o   (mul_result),
      .done_o     (mul_done_o),
      .overflow_o (),
      .underflow_o(),
      .invalid_o  ()
  );

  // fp32Adder ADD (
  //     .clk_i      (clk_i),
  //     .rstn_i     (rstn_i),
  //     .valid_i    (add_valid_i),
  //     .A          (add_in1),
  //     .B          (add_in2),
  //     .result_o   (adder_result),
  //     .done_o     (add_done_o),
  //     .overflow_o (),
  //     .underflow_o(),
  //     .invalid_o  ()
  // );

endmodule

