import common_pkg::*;

module stage_mem (
  input clk, rst,
  input ctrl_mem_t ctrl_mem_i,
  input ex_mem_t ex_mem_i,
  input mem_rsp_t dmem_rsp_i,
  
  output mem_req_t dmem_req_o,
  output info_mem_t info_mem_o,
  output mem_wb_t mem_wb_o
);
  
  mem_wb_t mem_wb_d, mem_wb_q;

  logic mem_we;
  assign mem_we = ex_mem_i.ctrl_signals.mem_we && ex_mem_i.valid;

  logic [XLEN-1:0] data_in;
  logic [XLEN-1:0] data_out;
  
  // RAM instance
  ram ram_inst (
    .clk_i(clk),
    .we_i(mem_we),
    .addr_i(ex_mem_i.alu_q),
    .data_i(data_in),
    .data_o(data_out)
  );
  
  // Memory input selection
  always_comb begin
    unique case (ex_mem_i.ctrl_signals.store_op)
      STORE_INVALID: data_in = 'd0;
      STORE_BYTE: data_in = {24'd0, ex_mem_i.rs2_data[7:0]};
      STORE_HALF: data_in = {16'd0, ex_mem_i.rs2_data[15:0]};
      STORE_WORD: data_in = ex_mem_i.rs2_data;
      default: data_in = 'd0;
    endcase
    
    // RD data selection for forwarding and stall
    info_mem_o.rd_addr_fwd = ex_mem_i.rd_addr;
    unique case (ex_mem_i.ctrl_signals.rd_sel)
      RD_SEL_ALU: begin
        info_mem_o.rd_data_fwd = ex_mem_i.alu_q;
      end
      RD_SEL_IMM: begin
        info_mem_o.rd_data_fwd = ex_mem_i.imm;
      end
      RD_SEL_MEM: begin
        info_mem_o.rd_data_fwd = 32'd0;
      end
      RD_SEL_PC: begin 
        info_mem_o.rd_data_fwd = ex_mem_i.pc;
      end
      default: info_mem_o.rd_data_fwd = 32'd0;
    endcase

    mem_wb_d = mem_wb_q;
    if (ctrl_mem_i.flush_mem_wb) begin
      mem_wb_d = '0;
    end else begin
      mem_wb_d.valid = ex_mem_i.valid;
      mem_wb_d.instr = ex_mem_i.instr;
      mem_wb_d.pc = ex_mem_i.pc;
      mem_wb_d.ctrl_signals = ex_mem_i.ctrl_signals;
      mem_wb_d.rd_addr = ex_mem_i.rd_addr;
      mem_wb_d.imm = ex_mem_i.imm;
      mem_wb_d.alu_q = ex_mem_i.alu_q;
      mem_wb_d.mem_data = data_out;
    end
  end
  
  always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
      mem_wb_q <= '0;
    end else begin
      mem_wb_q <= mem_wb_d;
    end
  end

  assign info_mem_o.valid = ex_mem_i.valid;
  assign mem_wb_o = mem_wb_q;
  
endmodule