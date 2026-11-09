module stage_ex 
    import riscv_pkg::*, core_pkg::*;
(
    input logic clk_i, rst_i,
    input ctrl_ex_t ctrl_ex_i,
    input id_ex_t id_ex_i,
    input logic ready_ds_i,
    input logic [XLEN-1:0] rs1_data_fwd_i, rs2_data_fwd_i,
    
    output pc_redirect_t pc_redirect_o,
    output logic ready_us_o,
    output ex_mem_t ex_mem_o
);
    
    pc_redirect_t pc_redirect_d, pc_redirect_q;
    ex_mem_t ex_mem_d, ex_mem_q;

    logic [XLEN-1:0] alu_a, alu_b, alu_q;
    logic alu_eq, alu_lt, alu_ltu;
    
    // ALU instance
    alu alu_inst (
        .a_i(alu_a),
        .b_i(alu_b),
        .op_i(id_ex_i.ctrl_signals.alu_op),
        .q_o(alu_q),
        .eq_o(alu_eq),
        .lt_o(alu_lt),
        .ltu_o(alu_ltu)
    );

    always_comb begin

        // ALU A input selection
        unique case (id_ex_i.ctrl_signals.alu_a_sel)
            ALU_A_SEL_RS1: alu_a = rs1_data_fwd_i;
            ALU_A_SEL_PC: alu_a = id_ex_i.pc;
            default: alu_a = rs1_data_fwd_i;
        endcase
        
        // ALU B input selection 
        unique case (id_ex_i.ctrl_signals.alu_b_sel)
            ALU_B_SEL_RS2: alu_b = rs2_data_fwd_i;
            ALU_B_SEL_IMM: alu_b = id_ex_i.imm;
            default: alu_b = rs2_data_fwd_i;
        endcase
        
        // Branch redirect selection
        if (pc_redirect_q.valid || !ready_ds_i) begin
            pc_redirect_d = '0; // prevent wrong path redirect and redirect whilst branch held in ex
        end else begin
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
                    pc_redirect_d.target = {alu_q[XLEN-1:1], 1'b0}; // mask with ~1 to avoid odd PC writes
                end
                default: pc_redirect_d = '0;
            endcase
        end

        ex_mem_d = ex_mem_q;
        ready_us_o = 1'b1;

        if (ready_ds_i) begin
            if (ctrl_ex_i.flush_ex_mem) begin
                ex_mem_d.valid = '0;
            end else begin
                ex_mem_d.valid = id_ex_i.valid;
                ex_mem_d.instr = id_ex_i.instr;
                ex_mem_d.pc = id_ex_i.pc;
                ex_mem_d.ctrl_signals = id_ex_i.ctrl_signals;
                ex_mem_d.rs2_data = rs2_data_fwd_i;
                ex_mem_d.rd_addr = id_ex_i.rd_addr;
                ex_mem_d.imm = id_ex_i.imm;
                ex_mem_d.alu_q = alu_q;
            end
        end else begin
            ready_us_o = 1'b0;
        end
    end
    
    always_ff @(posedge clk_i or posedge rst_i) begin
        if (rst_i) begin
            ex_mem_q <= '0;
            pc_redirect_q <= '0;
        end else begin
            pc_redirect_q <= pc_redirect_d;
            ex_mem_q <= ex_mem_d;
        end
    end

    assign pc_redirect_o = pc_redirect_q;
    assign ex_mem_o = ex_mem_q;

endmodule