import common_pkg::*;

module stage_wb (
  input mem_wb_t mem_wb,
  
  output logic [4:0] rd_addr,
  output logic [XLEN-1:0] rd_data,
  output logic rd_we
);
  
  assign rd_we = mem_wb.ctrl_signals.rd_we;
  assign rd_addr = mem_wb.rd_addr;
  
  logic [XLEN-1:0] mem_data;
  
  always_comb begin
    unique case (mem_wb.ctrl_signals.load_op)
      LOAD_INVALID: mem_data = 'd0;
      LOAD_BYTE: mem_data = {{24{mem_wb.mem_data[7]}}, mem_wb.mem_data[7:0]};
      LOAD_BYTEU: mem_data = mem_wb.mem_data[7:0];
      LOAD_HALF: mem_data = {{16{mem_wb.mem_data[7]}}, mem_wb.mem_data[15:0]};
      LOAD_HALFU: mem_data = mem_wb.mem_data[15:0];
      LOAD_WORD: mem_data = mem_wb.mem_data;
    endcase
    
    unique case (mem_wb.ctrl_signals.rd_sel)
      RD_SEL_ALU: rd_data = mem_wb.alu_q;
      RD_SEL_IMM: rd_data = mem_wb.imm;
      RD_SEL_MEM: rd_data = mem_data;
      RD_SEL_PC: rd_data = mem_wb.pc;
    endcase
  end

endmodule