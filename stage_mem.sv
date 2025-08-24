import common_pkg::*;

module stage_mem (
  input clk, rst,
  input ex_mem_t ex_mem,
  
  output mem_wb_t mem_wb
);

  logic [XLEN-1:0] data_in;
  logic [XLEN-1:0] data_out;
  
  ram ram_inst (
    .clk(clk),
    .we(ex_mem.ctrl_signals.mem_we),
    .re(ex_mem.ctrl_signals.mem_re),
    .addr(ex_mem.alu_q),
    .data_in(data_in),
    .data_out(data_out)
  );
  
  always_comb begin
    unique case (ex_mem.ctrl_signals.store_op)
      STORE_INVALID: data_in = 'd0;
      STORE_BYTE: data_in = ex_mem.rs2_data[7:0];
      STORE_HALF: data_in = ex_mem.rs2_data[15:0];
      STORE_WORD: data_in = ex_mem.rs2_data;
    endcase
  end
  
  always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
      mem_wb <= '0;
    end else begin
      mem_wb.instr <= ex_mem.instr;
      mem_wb.pc <= ex_mem.pc;
      mem_wb.ctrl_signals <= ex_mem.ctrl_signals;
      mem_wb.rd_addr <= ex_mem.rd_addr;
      mem_wb.imm <= ex_mem.imm;
      mem_wb.alu_q <= ex_mem.alu_q;
      mem_wb.mem_data <= data_out;
    end
  end
  
endmodule