import common_pkg::*;

module stage_mem (
  input clk, rst,
  input stall_type_t stall_wb_type,
  input ex_mem_t ex_mem,
  
  output logic [4:0] rd_addr_fwd,
  output logic [XLEN-1:0] rd_data_fwd,
  output flags_t flags,
  output mem_wb_t mem_wb
);

  logic [XLEN-1:0] data_in;
  logic [XLEN-1:0] data_out;
  
  // RAM instance
  ram ram_inst (
    .clk(clk),
    .we(ex_mem.ctrl_signals.mem_we),
    .addr(ex_mem.alu_q),
    .data_in(data_in),
    .data_out(data_out)
  );
  
  // Memory input selection
  always_comb begin
    unique case (ex_mem.ctrl_signals.store_op)
      STORE_INVALID: data_in = 'd0;
      STORE_BYTE: data_in = ex_mem.rs2_data[7:0];
      STORE_HALF: data_in = ex_mem.rs2_data[15:0];
      STORE_WORD: data_in = ex_mem.rs2_data;
    endcase
    
    // RD data selection for forwarding and stall
    unique case (ex_mem.ctrl_signals.rd_sel)
      RD_SEL_ALU: begin
        rd_data_fwd = ex_mem.alu_q;
      end
      RD_SEL_IMM: begin
        rd_data_fwd = ex_mem.imm;
      end
      RD_SEL_MEM: begin
        rd_data_fwd = 31'd0;
      end
      RD_SEL_PC: begin 
        rd_data_fwd = ex_mem.pc;
      end
    endcase
    
    rd_addr_fwd = ex_mem.rd_addr;
  end
  
  always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
      flags <= '0;
      mem_wb <= '0;
    end else begin
      unique case (stall_wb_type)
        STALL_FREEZE: begin
          mem_wb <= mem_wb;
        end
        STALL_NOP: begin
          mem_wb <= mem_wb; //CHANGE
        end
        STALL_FLUSH: begin
          mem_wb <= '0;
        end
        STALL_NONE: begin
          mem_wb.instr <= ex_mem.instr;
          mem_wb.pc <= ex_mem.pc;
          mem_wb.ctrl_signals <= ex_mem.ctrl_signals;
          mem_wb.rd_addr <= ex_mem.rd_addr;
          mem_wb.imm <= ex_mem.imm;
          mem_wb.alu_q <= ex_mem.alu_q;
          mem_wb.mem_data <= data_out;
        end
      endcase
    end
  end
  
endmodule