`timescale 1ns / 100ps

module mac #(
    parameter int DATA_WIDTH = 32,
    parameter int ADDR_LINES = 5
) (
    // Clock and reset
    input  logic                  clk_i,             // System clock
    input  logic                  mac_credit_clk_i,
    input  logic                  rstn_i,            // Active-low async reset
    // Signal input interface
    input  logic                  fifo_wr_i,
    input  logic [DATA_WIDTH-1:0] signal_i,          // Input signal data from FIFO
    output logic                  rd_signal_o,       // Read enable for signal FIFO
    input  logic                  start_i,           // Last signal indicator
    // Configuration
    input  logic [ADDR_LINES-1:0] terms_i,           // Number of Taylor series terms
    // Status outputs
    input  logic                  empty_i,           // Signal FIFO empty (input from gpnae)

    // Result output
    output logic [DATA_WIDTH-1:0] result_o,  // Computed result
    output logic                  done_o     // Operation complete flag
);
  // Internal signals
  logic [DATA_WIDTH-1:0] coeff_data;
  logic rd_en_coeff, load_result, dp_reset_o;
  logic add_valid, mul_valid, add_done, mul_done;
  logic [ADDR_LINES-1:0] coeff_addr;

  logic datapath_reset_n;
  assign datapath_reset_n = rstn_i & ~dp_reset_o;

  CoeffROM #(
      .DATA_WIDTH(DATA_WIDTH),
      .ADDR_LINES(ADDR_LINES),
      .INIT_FILE ("taylor_coeffs.mem")
  ) coeff_rom_inst (
      .clk_i       (clk_i),
      .rd_en_i     (rd_en_coeff),
      .coeff_addr_i(coeff_addr),
      .data_o      (coeff_data)
  );

  datapath #(
      .DATA_WIDTH(DATA_WIDTH)
  ) datapath_inst (
      .clk_i        (clk_i),
      .rstn_i       (datapath_reset_n),  // Use combined reset
      .signal_i     (signal_i),
      .coeff_i      (coeff_data),
      .load_result_i(load_result),
      .add_valid_i  (add_valid),
      .mul_valid_i  (mul_valid),
      .add_done_o   (add_done),
      .mul_done_o   (mul_done),
      .result_o     (result_o)
  );

  controller #(
      .ADDR_LINES(ADDR_LINES)
  ) controller_inst (
      .clk_i           (clk_i),
      .mac_credit_clk_i(mac_credit_clk_i),
      .rstn_i          (rstn_i),
      .start_i         (start_i),
      .empty_i         (empty_i),
      .terms_i         (terms_i + 1'd1),
      .mul_valid_i     (mul_valid),
      .mul_done_i      (mul_done),
      .add_valid_i     (add_valid),
      .add_done_i      (add_done),
      .fifo_wr_i       (fifo_wr_i),
      .rd_signal_o     (rd_signal_o),
      .rd_coeff_o      (rd_en_coeff),
      .load_result_o   (load_result),
      .coeff_addr_o    (coeff_addr),
      .dp_reset_o      (dp_reset_o),
      .done_o          (done_o)
  );
endmodule
