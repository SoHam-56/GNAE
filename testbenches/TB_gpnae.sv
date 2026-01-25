`timescale 1ns / 100ps

module TB_gpnae;
  parameter DATA_WIDTH = 32;
  parameter ADDR_LINES = 5;
  parameter CONTROL_WIDTH = 2;

  reg clk;
  reg rstn_i;
  reg [DATA_WIDTH-1:0] signal_i;
  reg wr_en_i;
  reg last_i, start_i;
  reg [ADDR_LINES-1:0] terms_i;
  reg [CONTROL_WIDTH-1:0] control_word_i;
  wire full_o;
  wire empty_o;
  wire idle_o;
  wire [DATA_WIDTH-1:0] final_result_o;
  wire done_o;

  integer processed_signals;
  integer cycle_counter;
  reg [1:0] current_state;

  reg [ADDR_LINES-1:0] num_sig;

  integer buffer_write_start_cycle;
  integer buffer_write_end_cycle;
  integer processing_start_cycle;
  integer processing_end_cycle;
  integer cycles_per_input[0:31];
  integer total_buffer_write_cycles;
  integer total_processing_cycles;
  integer total_operation_cycles;
  integer total_input_cycles;
  integer avg_cycles_per_input;

  reg [DATA_WIDTH-1:0] signal_sigmoid[0:29] = {
    32'b11000000101000000000000000000000,
    32'b11000000100101001111011100101101,
    32'b11000000100010011110111001011001,
    32'b11000000011111011100101100001001,
    32'b11000000011001111011100101100001,
    32'b11000000010100011010011110111001,
    32'b11000000001110111001011000010001,
    32'b11000000001001011000010001101001,
    32'b11000000000011110111001011000011,
    32'b10111111111100101100001000110101,
    32'b10111111110001101001111011100101,
    32'b10111111100110100111101110010111,
    32'b10111111010111001011000010001101,
    32'b10111111000001000110100111101111,
    32'b10111110001100001000110100111101,
    32'b00111110001100001000110100111101,
    32'b00111111000001000110100111101111,
    32'b00111111010111001011000010001101,
    32'b00111111100110100111101110010111,
    32'b00111111110001101001111011100101,
    32'b00111111111100101100001000110101,
    32'b01000000000011110111001011000011,
    32'b01000000001001011000010001101001,
    32'b01000000001110111001011000010001,
    32'b01000000010100011010011110111001,
    32'b01000000011001111011100101100001,
    32'b01000000011111011100101100001001,
    32'b01000000100010011110111001011001,
    32'b01000000100101001111011100101101,
    32'b01000000101000000000000000000000
  };

  reg [DATA_WIDTH-1:0] signal_tanh[0:29] = {
    32'b11000001001000000000000000000000,
    32'b11000001000101001111011100101101,
    32'b11000001000010011110111001011001,
    32'b11000000111111011100101100001001,
    32'b11000000111001111011100101100001,
    32'b11000000110100011010011110111001,
    32'b11000000101110111001011000010001,
    32'b11000000101001011000010001101001,
    32'b11000000100011110111001011000011,
    32'b11000000011100101100001000110101,
    32'b11000000010001101001111011100101,
    32'b11000000000110100111101110010111,
    32'b10111111110111001011000010001101,
    32'b10111111100001000110100111101111,
    32'b10111110101100001000110100111101,
    32'b00111110101100001000110100111101,
    32'b00111111100001000110100111101111,
    32'b00111111110111001011000010001101,
    32'b01000000000110100111101110010111,
    32'b01000000010001101001111011100101,
    32'b01000000011100101100001000110101,
    32'b01000000100011110111001011000011,
    32'b01000000101001011000010001101001,
    32'b01000000101110111001011000010001,
    32'b01000000110100011010011110111001,
    32'b01000000111001111011100101100001,
    32'b01000000111111011100101100001001,
    32'b01000001000010011110111001011001,
    32'b01000001000101001111011100101101,
    32'b01000001001000000000000000000000
  };

  typedef enum {
    RESET,
    LOAD_SIGNALS,
    WAIT_PROCESSING,
    DONE
  } test_phase_t;
  test_phase_t current_phase;

  gpnae #(
      .DATA_WIDTH(DATA_WIDTH),
      .ADDR_LINES(ADDR_LINES),
      .CONTROL_WIDTH(CONTROL_WIDTH)
  ) dut (
      .clk_i(clk),
      .rstn_i(rstn_i),
      .signal_i(signal_i),
      .wr_en_i(wr_en_i),
      .last_i(start_i),
      .terms_i(terms_i),
      .control_word_i(control_word_i),
      .full_o(full_o),
      .empty_o(empty_o),
      .idle_o(idle_o),
      .final_result_o(final_result_o),
      .done_o(done_o)
  );

  always #5 clk = ~clk;

  task reset_sequence;
    begin
      rstn_i = 0;
      wr_en_i = 0;
      last_i = 0;
      start_i = 0;
      control_word_i = 2'b00;

      // Reset all counters
      for (int i = 0; i < 32; i++) cycles_per_input[i] = 0;

      total_buffer_write_cycles = 0;
      total_processing_cycles = 0;
      total_operation_cycles = 0;
      total_input_cycles = 0;

      @(posedge clk);
      @(posedge clk);
      rstn_i = 1;
      @(posedge clk);
    end
  endtask

  task write_signal;
    input [DATA_WIDTH-1:0] sig_data;
    input last;
    input integer signal_index;
    begin
      integer start_cycle;

      wait (idle_o);
      start_cycle = cycle_counter;

      @(posedge clk);
      signal_i = sig_data;
      wr_en_i  = 1;
      @(posedge clk);
      wr_en_i = 0;
      @(posedge clk);
      last_i  = last;
      start_i = last;
      @(posedge clk);
      last_i = 0;

      cycles_per_input[signal_index] = cycle_counter - start_cycle;
      $display("Signal %0d: Took %0d cycles to write", signal_index,
               cycles_per_input[signal_index]);
    end
  endtask

  task perform_test;
    input [1:0] test_control_word;
    input string test_name;
    input [ADDR_LINES-1:0] test_terms;
    begin
      integer i;

      terms_i = test_terms;

      $display("\nStarting %s test with Terms = %0d", test_name, terms_i);

      reset_sequence();
      control_word_i = test_control_word;

      buffer_write_start_cycle = cycle_counter;

      for (i = 0; i < num_sig; i = i + 1) begin
        write_signal((test_control_word == 2'b11) ? signal_tanh[i] : signal_sigmoid[i],
                     (i == (num_sig - 1)), i);
      end

      buffer_write_end_cycle = cycle_counter;
      total_buffer_write_cycles = buffer_write_end_cycle - buffer_write_start_cycle;
      $display("Buffer writing completed in %0d cycles", total_buffer_write_cycles);

      processing_start_cycle = cycle_counter;

      wait_for_processing(num_sig);

      processing_end_cycle = cycle_counter;
      total_processing_cycles = processing_end_cycle - processing_start_cycle;
      total_operation_cycles = processing_end_cycle - buffer_write_start_cycle;

      total_input_cycles = 0;
      for (i = 0; i < num_sig; i = i + 1) begin
        total_input_cycles = total_input_cycles + cycles_per_input[i];
      end
      avg_cycles_per_input = total_input_cycles / num_sig;

      $display("%s test completed", test_name);
      $display("Buffer write time: %0d cycles", total_buffer_write_cycles);
      $display("Processing time (without buffer write): %0d cycles", total_processing_cycles);
      $display("Total operation time (with buffer write): %0d cycles", total_operation_cycles);
      $display("Average cycles per input: %0d cycles", avg_cycles_per_input);
    end
  endtask

  task wait_for_processing;
    input int signals_to_process;
    begin
      integer processed;
      integer last_done_cycle;
      integer current_done_cycle;

      processed = 0;
      last_done_cycle = cycle_counter;

      while (processed < signals_to_process) begin
        @(posedge clk);
        if (done_o) begin
          processed = processed + 1;
          current_done_cycle = cycle_counter;

          $display("Time=%0t: Processing complete, Final result = %h", $time, final_result_o);

          $display("Time=%0t: Processed=%0d, Done_o=%0b, Took %0d cycles since last done", $time,
                   processed, done_o, current_done_cycle - last_done_cycle);
          last_done_cycle = current_done_cycle;
        end
      end
    end
  endtask

  always @(posedge clk) begin
    if (!rstn_i) cycle_counter <= 0;
    else cycle_counter <= cycle_counter + 1;
  end

  initial begin

    clk = 0;
    processed_signals = 0;
    current_phase = RESET;
    num_sig = 30;

    perform_test(2'b01, "SELU", 14);
    perform_test(2'b10, "Sigmoid", 15);
    perform_test(2'b11, "Tanh", 30);

    $display("\nTest Summary:");
    $display("Total signals processed: %0d", num_sig);
    $display("Total clock cycles: %0d", cycle_counter);

    current_phase = DONE;
    #100 $finish;
  end

  always @(posedge clk) begin

    if (current_state !== control_word_i) begin
      current_state <= control_word_i;
      case (control_word_i)
        2'b00: $display("Time=%0t: State changed to IDLE", $time);
        2'b01: $display("Time=%0t: State changed to SELU", $time);
        2'b10: $display("Time=%0t: State changed to Sigmoid", $time);
        2'b11: $display("Time=%0t: State changed to Tanh", $time);
      endcase
    end

    case (current_phase)
      RESET:
      if (current_phase !== LOAD_SIGNALS) begin
        $display("Time=%0t: Reset phase completed", $time);
        current_phase <= LOAD_SIGNALS;
      end

      LOAD_SIGNALS:
      if (last_i) begin
        $display("Time=%0t: All signals loaded", $time);
        current_phase <= WAIT_PROCESSING;
      end

      DONE:
      if (current_phase !== RESET) begin
        $display("Time=%0t: Test completed", $time);
        current_phase <= RESET;
      end
    endcase
  end

  property module_full_write;
    @(posedge clk) full_o |-> !wr_en_i;
  endproperty
  assert property (module_full_write)
  else $error("Writing when module is full!");

  property module_idle_write;
    @(posedge clk) wr_en_i |-> !idle_o;
  endproperty
  assert property (module_idle_write)
  else $error("Writing when module not idle!");

  property valid_done_signal;
    @(posedge clk) done_o |-> $stable(
        final_result_o
    );
  endproperty
  assert property (valid_done_signal)
  else $error("Final result changed after done signal!");

  initial begin
    #10000000 $error("Testbench timeout!");
    $finish;
  end

  initial begin
    $dumpfile("tb_gpnae.vcd");
    $dumpvars(0, TB_gpnae);
  end

endmodule
