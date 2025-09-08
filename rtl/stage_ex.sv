import common_pkg::*;

module stage_ex (
  input logic clk_i, rst_i,
  input ctrl_ex_t ctrl_ex_i,
  input id_ex_t id_ex_i,
  
  output pc_redirect_t pc_redirect_o,
  output ex_mem_t ex_mem_o
);
  
  pc_redirect_t pc_redirect_d, pc_redirect_q;
  ex_mem_t ex_mem_d, ex_mem_q;

  logic [XLEN-1:0] alu_a, alu_b, alu_q;
  logic alu_eq, alu_lt, alu_ltu;
  
  // ALU instance
  alu alu_inst (
    .a(alu_a),
    .b(alu_b),
    .op(id_ex_i.ctrl_signals.alu_op),
    .q(alu_q),
    .eq(alu_eq),
    .lt(alu_lt),
    .ltu(alu_ltu)
  );
  
  logic [XLEN-1:0] rs1_data, rs2_data;

  always_comb begin
    // Data forwarding from MEM/WB for rs1/rs2
    if (ctrl_ex_i.rd_addr_mem_fwd == id_ex_i.rs1_addr) rs1_data = ctrl_ex_i.rd_data_mem_fwd;
    else if (ctrl_ex_i.rd_addr_wb_fwd == id_ex_i.rs1_addr) rs1_data = ctrl_ex_i.rd_data_wb_fwd;
    else rs1_data = id_ex_i.rs1_data;
    
    if (ctrl_ex_i.rd_addr_mem_fwd == id_ex_i.rs2_addr) rs2_data = ctrl_ex_i.rd_data_mem_fwd;
    else if (ctrl_ex_i.rd_addr_wb_fwd == id_ex_i.rs2_addr) rs2_data = ctrl_ex_i.rd_data_wb_fwd;
    else rs2_data = id_ex_i.rs2_data;
    
    // ALU A input selection
    unique case (id_ex_i.ctrl_signals.alu_a_sel)
      ALU_A_SEL_RS1: alu_a = rs1_data;
      ALU_A_SEL_PC: alu_a = id_ex_i.pc;
      default: alu_a = rs1_data;
    endcase
    
    // ALU B input selection 
    unique case (id_ex_i.ctrl_signals.alu_b_sel)
      ALU_B_SEL_RS2: alu_b = rs2_data;
      ALU_B_SEL_IMM: alu_b = id_ex_i.imm;
      ALU_B_SEL_SHAMT: alu_b = id_ex_i.shamt;
      default alu_b = rs2_data;
    endcase
    
    // Branch redirect selection
    unique case (id_ex_i.ctrl_signals.branch_op)
      BRANCH_INVALID: begin
        pc_redirect_d = '0;
      end
      
      BEQ: begin
        pc_redirect_d.valid = alu_eq && id_ex_i.valid;
        pc_redirect_d.target = id_ex_i.pc + id_ex_i.imm;
      end
      
      BNE: begin
        pc_redirect_d.valid = !alu_eq && id_ex_i.valid;
        pc_redirect_d.target = id_ex_i.pc + id_ex_i.imm;
      end
      
      BLT: begin
        pc_redirect_d.valid = alu_lt && id_ex_i.valid;
        pc_redirect_d.target = id_ex_i.pc + id_ex_i.imm;
      end
      
      BGE: begin
        pc_redirect_d.valid = !alu_lt && id_ex_i.valid;
        pc_redirect_d.target = id_ex_i.pc + id_ex_i.imm;
      end
      
      BLTU: begin
        pc_redirect_d.valid = alu_ltu && id_ex_i.valid;
        pc_redirect_d.target = id_ex_i.pc + id_ex_i.imm;
      end
      
      BGEU: begin
        pc_redirect_d.valid = !alu_ltu && id_ex_i.valid;
        pc_redirect_d.target = id_ex_i.pc + id_ex_i.imm;
      end
      
      JAL: begin
        pc_redirect_d.valid = id_ex_i.valid;
        pc_redirect_d.target = alu_q;
      end
      
      JALR: begin
        pc_redirect_d.valid = id_ex_i.valid;
        pc_redirect_d.target = alu_q;
      end
      default: pc_redirect_d = '0;
    endcase

    ex_mem_d = ex_mem_q;
    if (ctrl_ex_i.flush_mem) begin
      ex_mem_o.valid <= 1'b0;
    end else begin
      ex_mem_d = ex_mem_t'{
        valid: id_ex_i.valid,
        instr: id_ex_i.instr,
        pc: id_ex_i.pc,
        ctrl_signals: id_ex_i.ctrl_signals,
        rs2_data: rs2_data,
        rd_addr: id_ex_i.rd_addr,
        imm: id_ex_i.imm,
        alu_q: alu_q
      };
    end
  end
  
  always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
      ex_mem_q <= '0;
      pc_redirect_q <= '0;
    end else begin
      pc_redirect_q = pc_redirect_d;
      ex_mem_q <= ex_mem_d;
    end
  end

  assign pc_redirect_o = pc_redirect_q;
  assign ex_mem_o = ex_mem_q;

endmodule