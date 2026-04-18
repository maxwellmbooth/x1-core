import common_pkg::*;

module stage_wb (
  input clk, rst,
  input mem_wb_t mem_wb_i,
  
  output logic [4:0] rd_addr_o,
  output logic [XLEN-1:0] rd_data_o,
  output logic rd_we_o,
  output info_wb_t info_wb_o
);
  
  assign rd_we_o = mem_wb_i.ctrl_signals.rd_we && mem_wb_i.valid;
  assign rd_addr_o = mem_wb_i.rd_addr;
  
  logic [XLEN-1:0] mem_data;
  
  always_comb begin
    // Memory data out selection
    unique case (mem_wb_i.ctrl_signals.load_op)
      LOAD_INVALID: mem_data = 'd0;
      LOAD_BYTE: mem_data = {{24{mem_wb_i.mem_data[7]}}, mem_wb_i.mem_data[7:0]};
      LOAD_BYTEU: mem_data = {24'd0, mem_wb_i.mem_data[7:0]};
      LOAD_HALF: mem_data = {{16{mem_wb_i.mem_data[7]}}, mem_wb_i.mem_data[15:0]};
      LOAD_HALFU: mem_data = {16'd0, mem_wb_i.mem_data[15:0]};
      LOAD_WORD: mem_data = mem_wb_i.mem_data;
      default: mem_data = 'd0;
    endcase
    
    // Destination register input selection
    unique case (mem_wb_i.ctrl_signals.rd_sel)
      RD_SEL_ALU: rd_data_o = mem_wb_i.alu_q;
      RD_SEL_IMM: rd_data_o = mem_wb_i.imm;
      RD_SEL_MEM: rd_data_o = mem_data;
      RD_SEL_PC: rd_data_o = mem_wb_i.pc;
      default: rd_data_o = 32'd0;
    endcase
  end

  assign info_wb_o.valid = mem_wb_i.valid;

endmodule