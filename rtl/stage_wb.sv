import common_pkg::*;

module stage_wb (
  input clk, rst,
  input mem_wb_t mem_wb,
  
  output logic [4:0] rd_addr,
  output logic [XLEN-1:0] rd_data,
  output logic rd_we
);
  
  assign rd_we = mem_wb.ctrl_signals.rd_we && mem_wb.valid;
  assign rd_addr = mem_wb.rd_addr;
  
  logic [XLEN-1:0] mem_data;
  
  always_comb begin
    // Memory data out selection
    unique case (mem_wb.ctrl_signals.load_op)
      LOAD_INVALID: mem_data = 'd0;
      LOAD_BYTE: mem_data = {{24{mem_wb.mem_data[7]}}, mem_wb.mem_data[7:0]};
      LOAD_BYTEU: mem_data = mem_wb.mem_data[7:0];
      LOAD_HALF: mem_data = {{16{mem_wb.mem_data[7]}}, mem_wb.mem_data[15:0]};
      LOAD_HALFU: mem_data = mem_wb.mem_data[15:0];
      LOAD_WORD: mem_data = mem_wb.mem_data;
      default: mem_data = 'd0;
    endcase
    
    // Destination register input selection
    unique case (mem_wb.ctrl_signals.rd_sel)
      RD_SEL_ALU: rd_data = mem_wb.alu_q;
      RD_SEL_IMM: rd_data = mem_wb.imm;
      RD_SEL_MEM: rd_data = mem_data;
      RD_SEL_PC: rd_data = mem_wb.pc;
      default: rd_data = 32'd0;
    endcase
  end

endmodule