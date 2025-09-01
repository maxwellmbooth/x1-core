import common_pkg::*;

module stage_ex (
  input logic clk, rst,
  input stall_type_t stall_mem_type,
  input logic [4:0] rd_addr_mem_fwd, rd_addr_wb_fwd,
  input logic [XLEN-1:0] rd_data_mem_fwd, rd_data_wb_fwd,
  input id_ex_t id_ex,
  
  output pc_redirect_t pc_redirect,
  output flags_t flags,
  output ex_mem_t ex_mem
);
  
  logic [XLEN-1:0] alu_a, alu_b, alu_q;
  logic alu_eq, alu_lt, alu_ltu;
  
  // ALU instance
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
  
  logic [XLEN-1:0] rs1_data, rs2_data;

  always_comb begin
    // Data forwarding from MEM/WB for rs1/rs2
    if (rd_addr_mem_fwd == id_ex.rs1_addr) rs1_data = rd_data_mem_fwd;
    else if (rd_addr_wb_fwd == id_ex.rs1_addr) rs1_data = rd_data_wb_fwd;
    else rs1_data = id_ex.rs1_data;
    
    if (rd_addr_mem_fwd == id_ex.rs2_addr) rs2_data = rd_data_mem_fwd;
    else if (rd_addr_wb_fwd == id_ex.rs2_addr) rs2_data = rd_data_wb_fwd;
    else rs2_data = id_ex.rs2_data;
    
    // ALU A input selection
    unique case (id_ex.ctrl_signals.alu_a_sel)
      ALU_A_SEL_RS1: alu_a = rs1_data;
      ALU_A_SEL_PC: alu_a = id_ex.pc;
    endcase
    
    // ALU B input selection 
    unique case (id_ex.ctrl_signals.alu_b_sel)
      ALU_B_SEL_RS2: alu_b = rs2_data;
      ALU_B_SEL_IMM: alu_b = id_ex.imm;
      ALU_B_SEL_SHAMT: alu_b = id_ex.shamt;
    endcase
    
    // Branch redirect selection
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
      flags <= '0;
      ex_mem <= '0;
    end else begin
      unique case (stall_mem_type)
        STALL_FREEZE: begin
          ex_mem <= ex_mem;
          pc_redirect <= pc_redirect;
        end
        STALL_NOP: begin
          ex_mem <= ex_mem; //CHANGE
          pc_redirect <= pc_redirect;
        end
        STALL_FLUSH: begin
          ex_mem <= '0;
          pc_redirect <= '0;
        end
        STALL_NONE: begin
          ex_mem.instr <= id_ex.instr;
          ex_mem.pc <= id_ex.pc;
          ex_mem.ctrl_signals <= id_ex.ctrl_signals;
          ex_mem.rs2_data <= id_ex.rs2_data;
          ex_mem.rd_addr <= id_ex.rd_addr;
          ex_mem.imm <= id_ex.imm;
          ex_mem.alu_q <= alu_q;
          pc_redirect <= pc_redirect_next;
        end
      endcase
    end
  end

endmodule