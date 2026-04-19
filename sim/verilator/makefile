RTL_DIR = ../../rtl
TB_DIR  = ../../tb
OBJ_DIR = obj_dir

SRCS = $(RTL_DIR)/pkg/common_pkg.sv \
       $(RTL_DIR)/alu.sv \
       $(RTL_DIR)/control_unit.sv \
       $(RTL_DIR)/program_counter.sv \
       $(RTL_DIR)/regfile.sv \
       $(RTL_DIR)/rom.sv \
       $(RTL_DIR)/ram.sv \
       $(RTL_DIR)/stage_if.sv \
       $(RTL_DIR)/stage_id.sv \
       $(RTL_DIR)/stage_ex.sv \
       $(RTL_DIR)/stage_mem.sv \
       $(RTL_DIR)/stage_wb.sv \
       $(RTL_DIR)/core.sv \
       $(RTL_DIR)/top.sv

VFLAGS = --cc \
         --exe \
         --build \
         --sv \
         --trace \
	 --public-flat-rw \
         -I$(RTL_DIR) \
         -I$(RTL_DIR)/pkg \
         --top-module top \
         -Wno-fatal

# build simulation executable
all: $(OBJ_DIR)/Vtop

# main build rule
$(OBJ_DIR)/Vtop: $(SRCS) $(TB_DIR)/top_tb.cpp
	verilator $(VFLAGS) $(SRCS) $(TB_DIR)/top_tb.cpp

# run the simulation
run: $(OBJ_DIR)/Vtop
	$(OBJ_DIR)/Vtop

# open waveform
wave:
	GDK_DPI_SCALE=1.5 gtkwave dump.vcd &

# generate riscof
riscof: $(OBJ_DIR)/Vtop
	$(OBJ_DIR)/Vtop \
		+HEX_FILE=$(HEX) \
		--sig $(SIG) \
		--sig-base $(SIG_BASE) \
		--sig-end $(SIG_END)

# delete build artifacts
clean:
	rm -rf $(OBJ_DIR) dump.vcd

.PHONY: all run wave clean
