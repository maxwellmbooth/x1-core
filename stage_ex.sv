import common_pkg::*;

module stage_ex (
  input logic clk, rst,
  input id_ex_t id_ex,
  
  output pc_redirect_t pc_redirect,
  output ex_mem_t ex_mem
);
  
  logic [XLEN-1:0] alu_a, alu_b, alu_q;
  logic alu_eq, alu_lt, alu_ltu;
  
  alu alu_inst (
    .a(alu_a),
    .b(alu_b),
    .op(id_ex.ctrl_signals.alu_op),
    .q(alu_q),
    .eq(alu_eq),
    .lt(alu_lt),
    .ltu(alu_ltu)
  );
  
  pc_redirect_t pc_redirect_next;

  always_comb begin
    unique case (id_ex.ctrl_signals.alu_a_sel)
      ALU_A_SEL_RS1: alu_a = id_ex.rs1_data;
      ALU_A_SEL_PC: alu_a = id_ex.pc;
    endcase
    
    unique case (id_ex.ctrl_signals.alu_b_sel)
      ALU_B_SEL_RS2: alu_b = id_ex.rs2_data;
      ALU_B_SEL_IMM: alu_b = id_ex.imm;
      ALU_B_SEL_SHAMT: alu_b = id_ex.shamt;
    endcase
    
    unique case (id_ex.ctrl_signals.branch_op)
      BRANCH_INVALID: begin
        pc_redirect_next = '0;
      end
      
      BEQ: begin
        pc_redirect_next.valid = alu_eq;
        pc_redirect_next.target = id_ex.pc + id_ex.imm;
      end
      
      BNE: begin
        pc_redirect_next.valid = !alu_eq;
        pc_redirect_next.target = id_ex.pc + id_ex.imm;
      end
      
      BLT: begin
        pc_redirect_next.valid = alu_lt;
        pc_redirect_next.target = id_ex.pc + id_ex.imm;
      end
      
      BGE: begin
        pc_redirect_next.valid = !alu_lt;
        pc_redirect_next.target = id_ex.pc + id_ex.imm;
      end
      
      BLTU: begin
        pc_redirect_next.valid = alu_ltu;
        pc_redirect_next.target = id_ex.pc + id_ex.imm;
      end
      
      BGEU: begin
        pc_redirect_next.valid = !alu_ltu;
        pc_redirect_next.target = id_ex.pc + id_ex.imm;
      end
      
      JAL: begin
        pc_redirect_next.valid = 1'b1;
        pc_redirect_next.target = alu_q;
      end
      
      JALR: begin
        pc_redirect_next.valid = 1'b1;
        pc_redirect_next.target = alu_q;
      end
    endcase
  end
  
  always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
      ex_mem <= '0;
    end else begin
      ex_mem.instr <= id_ex.instr;
      ex_mem.pc <= id_ex.pc;
      ex_mem.ctrl_signals <= id_ex.ctrl_signals;
      ex_mem.rs2_data <= id_ex.rs2_data;
      ex_mem.rd_addr <= id_ex.rd_addr;
      ex_mem.imm <= id_ex.imm;
      ex_mem.alu_q <= alu_q;
      pc_redirect <= pc_redirect_next;
    end
  end

endmodule