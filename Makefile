# Project Structure
PRJ_DIR = $(shell pwd)
SRC_DIR = $(PRJ_DIR)/src
TB_DIR = $(PRJ_DIR)/testbenches

VERILATOR = verilator
IVERILOG = iverilog
VCS = vcs
VVP = vvp
WAVE = gtkwave

DESIGN_FILES = \
	TYTAN/Memory/CoeffROM.v \
	TYTAN/Memory/InputFIFO.v \
	TYTAN/Memory/PE5B.v \
	TYTAN/Memory/RAM.v \
	TYTAN/Memory/ROM.v \
	TYTAN/controller.sv \
	TYTAN/datapath.v \
	TYTAN/LZC.v \
	TYTAN/mac.sv \
	../ArithmeticLibrary/Adders/FP32/src/fp32Adder.sv \
	../ArithmeticLibrary/Adders/FP32/src/LZC.sv \
	../ArithmeticLibrary/Multipliers/Radix4Booth/src/R4Booth.sv \
	../ArithmeticLibrary/Multipliers/Karatsuba/src/karatsubaUnsigned.sv \
	../ArithmeticLibrary/Multipliers/FP32/src/fp32Multiplier.sv \
	../ArithmeticLibrary/Divider/FP32/src/fp32Divider.sv \
	../ArithmeticLibrary/Divider/FP32/src/divu.sv \
	fp32_down.sv \
	fp32_up_down.sv \
	SeLu.sv \
	sigtan.sv \
	gpnae.sv

TESTBENCH = TB_gpnae.sv
TOP_MODULE = TB_gpnae

VERILATOR_DIR = $(PRJ_DIR)/Verilator
IVERILOG_DIR = $(PRJ_DIR)/Icarus
VCS_DIR = $(PRJ_DIR)/VCS

VERILATOR_FLAGS = \
	--binary \
	--trace \
	--timing \
	--top-module $(TOP_MODULE) \
	--threads $(shell nproc) \
	--sv \
	-I$(SRC_DIR) \
	-I$(TB_DIR) \
	--Mdir $(VERILATOR_DIR) \
	--Wno-WIDTHTRUNC \
	--Wno-WIDTHEXPAND \
	--Wno-CASEINCOMPLETE \
	--Wno-MODDUP

IVERILOG_FLAGS = \
	-g2012 \
	-Wall \
	-Wno-timescale \
	-I$(SRC_DIR) \
	-I$(TB_DIR)

VCS_FLAGS = \
	-full64 \
	-sverilog \
	-debug_all \
	-timescale=1ns/1ps \
	-Mdir=$(VCS_DIR) \
	+v2k \
	+incdir+$(SRC_DIR) \
	+incdir+$(TB_DIR)

default: help

help:
	@echo "Simulation Targets:"
	@echo "  make verilator    - Simulate using Verilator"
	@echo "  make iverilog     - Simulate using Icarus Verilog"
	@echo "  make vcs          - Simulate using Synopsys VCS"
	@echo "  make clean        - Remove all simulation artifacts"

verilator:
	@echo "-- Verilator simulation for GPNAE"
	@mkdir -p $(VERILATOR_DIR)
	$(VERILATOR) $(VERILATOR_FLAGS) \
		$(addprefix $(SRC_DIR)/,$(DESIGN_FILES)) \
		$(TB_DIR)/$(TESTBENCH) \
		-o $(TOP_MODULE)_sim
	@echo "-- Compiling Verilator simulation"
	make -C $(VERILATOR_DIR) -f V$(TOP_MODULE).mk
	@echo "-- Running Verilator simulation"
	$(VERILATOR_DIR)/./$(TOP_MODULE)_sim

iverilog:
	@echo "-- Icarus Verilog simulation for GPNAE"
	@mkdir -p $(IVERILOG_DIR)
	$(IVERILOG) $(IVERILOG_FLAGS) \
		-o $(IVERILOG_DIR)/$(TOP_MODULE)_sim \
		$(addprefix $(SRC_DIR)/,$(DESIGN_FILES)) \
		$(TB_DIR)/$(TESTBENCH)
	@echo "-- Running Icarus Verilog simulation"
	cd $(IVERILOG_DIR) && $(VVP) ./$(TOP_MODULE)_sim -vcd=$(TOP_MODULE).vcd
	@echo "-- Waveform generated at $(IVERILOG_DIR)/$(TOP_MODULE).vcd"

vcs:
	@echo "-- VCS simulation for GPNAE"
	@mkdir -p $(VCS_DIR)
	$(VCS) $(VCS_FLAGS) \
		-o $(VCS_DIR)/$(TOP_MODULE)_sim \
		$(addprefix $(SRC_DIR)/,$(DESIGN_FILES)) \
		$(TB_DIR)/$(TESTBENCH)
	@echo "-- Running VCS simulation"
	cd $(VCS_DIR) && ./$(TOP_MODULE)_sim -visualize
	@echo "-- Simulation complete"

view:
	@echo "-- Opening waveform"
	$(WAVE) $(IVERILOG_DIR)/$(TOP_MODULE).vcd

clean:
	@echo "-- Cleaning simulation artifacts"
	-rm -rf $(VERILATOR_DIR) $(IVERILOG_DIR) $(VCS_DIR)
	-rm -f *.vpd *.vcd

.PHONY: default help verilator iverilog vcs view clean
