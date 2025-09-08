import common_pkg::*;

module stage_mem (
  input clk, rst,
  input ctrl_mem_t ctrl_mem_i,
  input ex_mem_t ex_mem_i,
  
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
    .clk(clk),
    .we(mem_we),
    .addr(ex_mem_i.alu_q),
    .data_in(data_in),
    .data_out(data_out)
  );
  
  // Memory input selection
  always_comb begin
    unique case (ex_mem_i.ctrl_signals.store_op)
      STORE_INVALID: data_in = 'd0;
      STORE_BYTE: data_in = ex_mem_i.rs2_data[7:0];
      STORE_HALF: data_in = ex_mem_i.rs2_data[15:0];
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
        info_mem_o.rd_data_fwd = 31'd0;
      end
      RD_SEL_PC: begin 
        info_mem_o.rd_data_fwd = ex_mem_i.pc;
      end
      default: info_mem_o.rd_data_fwd = 32'd0;
    endcase

    mem_wb_d = mem_wb_q;
    if (ctrl_mem_i.flush_wb) begin
      mem_wb_d = mem_wb_t'{default:'0};
    end else begin
      mem_wb_d = mem_wb_t'{
        valid: ex_mem_i.valid,
        instr: ex_mem_i.instr,
        pc: ex_mem_i.pc,
        ctrl_signals: ex_mem_i.ctrl_signals,
        rd_addr: ex_mem_i.rd_addr,
        imm: ex_mem_i.imm,
        alu_q: ex_mem_i.alu_q,
        mem_data: data_out
      };
    end
  end
  
  always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
      mem_wb_o <= '0;
    end else begin
      mem_wb_q <= mem_wb_d;
    end
  end

  assign mem_wb_o = mem_wb_q;
  
endmodule