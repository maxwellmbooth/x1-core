import core_pkg::*;

module control_unit (
    input logic [6:0] opcode_i,
    input logic [2:0] funct3_i,
    input logic [6:0] funct7_i,
    
    output ctrl_signals_t ctrl_signals_o,
    output instr_type_t instr_type_o,
    output logic eraise_o, illegal_o
);

    function automatic alu_op_t decode_alu_op (
        input logic [2:0] funct3,
        input logic [6:0] funct7
    );
        unique case(funct3)
            3'b000: return (funct7[5]? ALU_SUB : ALU_ADD);
            3'b001: return ALU_SLL;
            3'b010: return ALU_SLT;
            3'b011: return ALU_SLTU;
            3'b100: return ALU_XOR;
            3'b101: return (funct7[5]? ALU_SRA : ALU_SRL);
            3'b110: return ALU_OR;
            3'b111: return ALU_AND;
            default: return ALU_INVALID;
        endcase
    endfunction

    function automatic alu_op_t decode_alu_op_imm (
        input logic [2:0] funct3,
        input logic [6:0] funct7
    );
        unique case(funct3)
            3'b000: return ALU_ADD;
            3'b001: return ALU_SLL;
            3'b010: return ALU_SLT;
            3'b011: return ALU_SLTU;
            3'b100: return ALU_XOR;
            3'b101: return (funct7[5]? ALU_SRA : ALU_SRL);
            3'b110: return ALU_OR;
            3'b111: return ALU_AND;
            default: return ALU_INVALID;
        endcase
    endfunction
    
    function automatic branch_op_t decode_branch_op (
        input logic [2:0] funct3
    );
        unique case(funct3)
            3'b000: return BEQ;
            3'b001: return BNE;
            3'b100: return BLT;
            3'b101: return BGE;
            3'b110: return BLTU;
            3'b111: return BGEU;
            default: return BRANCH_INVALID;
        endcase
    endfunction
    
    function automatic store_op_t decode_store_op (
        input logic [2:0] funct3
    );
        unique case(funct3)
            3'b000: return STORE_BYTE;
            3'b001: return STORE_HALF;
            3'b010: return STORE_WORD;
            default: return STORE_INVALID;
        endcase
    endfunction
    
    function automatic load_op_t decode_load_op (
        input logic [2:0] funct3
    );
        unique case(funct3)
            3'b000: return LOAD_BYTE;
            3'b001: return LOAD_HALF;
            3'b010: return LOAD_WORD;
            3'b011: return LOAD_BYTEU;
            3'b100: return LOAD_HALFU;
            default: return LOAD_INVALID;
        endcase
    endfunction

    always_comb begin
        unique case (opcode_i)
            OP_LOAD: begin
                ctrl_signals_o.alu_a_sel = ALU_A_SEL_RS1;
                ctrl_signals_o.alu_b_sel = ALU_B_SEL_IMM;
                ctrl_signals_o.alu_op = ALU_ADD;
                ctrl_signals_o.branch_op = BRANCH_INVALID;
                ctrl_signals_o.store_op = STORE_INVALID;
                ctrl_signals_o.load_op = decode_load_op(funct3_i);
                ctrl_signals_o.rd_sel = RD_SEL_MEM;
                ctrl_signals_o.rd_we = 1'b1;
                ctrl_signals_o.mem_we = 1'b0;
                instr_type_o = INSTR_I_TYPE;
                
                eraise_o = 1'b0;
                illegal_o = 1'b0;
            end
            
            OP_STORE: begin
                ctrl_signals_o.alu_a_sel = ALU_A_SEL_RS1;
                ctrl_signals_o.alu_b_sel = ALU_B_SEL_IMM;
                ctrl_signals_o.alu_op = ALU_ADD;
                ctrl_signals_o.branch_op = BRANCH_INVALID;
                ctrl_signals_o.store_op = decode_store_op(funct3_i);
                ctrl_signals_o.load_op = LOAD_INVALID;
                ctrl_signals_o.rd_sel = RD_SEL_ALU;
                ctrl_signals_o.rd_we = 1'b0;
                ctrl_signals_o.mem_we = 1'b1;
                instr_type_o = INSTR_S_TYPE;
                
                eraise_o = 1'b0;
                illegal_o = 1'b0;
            end
            
            OP_ALU_IMM: begin
                ctrl_signals_o.alu_a_sel = ALU_A_SEL_RS1;
                ctrl_signals_o.alu_b_sel = ALU_B_SEL_IMM;
                ctrl_signals_o.alu_op = decode_alu_op_imm(funct3_i, funct7_i);
                ctrl_signals_o.branch_op = BRANCH_INVALID;
                ctrl_signals_o.store_op = STORE_INVALID;
                ctrl_signals_o.load_op = LOAD_INVALID;
                ctrl_signals_o.rd_sel = RD_SEL_ALU;
                ctrl_signals_o.rd_we = 1'b1;
                ctrl_signals_o.mem_we = 1'b0;
                instr_type_o = INSTR_I_TYPE;
                
                eraise_o = 1'b0;
                illegal_o = 1'b0;
            end
            
            OP_ALU: begin
                ctrl_signals_o.alu_a_sel = ALU_A_SEL_RS1;
                ctrl_signals_o.alu_b_sel = ALU_B_SEL_RS2;
                ctrl_signals_o.alu_op = decode_alu_op(funct3_i, funct7_i);
                ctrl_signals_o.branch_op = BRANCH_INVALID;
                ctrl_signals_o.store_op = STORE_INVALID;
                ctrl_signals_o.load_op = LOAD_INVALID;
                ctrl_signals_o.rd_sel = RD_SEL_ALU;
                ctrl_signals_o.rd_we = 1'b1;
                ctrl_signals_o.mem_we = 1'b0;
                instr_type_o = INSTR_R_TYPE;
                
                eraise_o = 1'b0;
                illegal_o = 1'b0;
            end
            
            OP_AUIPC: begin
                ctrl_signals_o.alu_a_sel = ALU_A_SEL_PC;
                ctrl_signals_o.alu_b_sel = ALU_B_SEL_IMM;
                ctrl_signals_o.alu_op = ALU_ADD;
                ctrl_signals_o.branch_op = BRANCH_INVALID;
                ctrl_signals_o.store_op = STORE_INVALID;
                ctrl_signals_o.load_op = LOAD_INVALID;
                ctrl_signals_o.rd_sel = RD_SEL_ALU;
                ctrl_signals_o.rd_we = 1'b1;
                ctrl_signals_o.mem_we = 1'b0;
                instr_type_o = INSTR_U_TYPE;
                
                eraise_o = 1'b0;
                illegal_o = 1'b0;
            end
            
            OP_LUI: begin
                ctrl_signals_o.alu_a_sel = ALU_A_SEL_RS1;
                ctrl_signals_o.alu_b_sel = ALU_B_SEL_RS2;
                ctrl_signals_o.alu_op = ALU_INVALID;
                ctrl_signals_o.branch_op = BRANCH_INVALID;
                ctrl_signals_o.store_op = STORE_INVALID;
                ctrl_signals_o.load_op = LOAD_INVALID;
                ctrl_signals_o.rd_sel = RD_SEL_IMM;
                ctrl_signals_o.rd_we = 1'b1;
                ctrl_signals_o.mem_we = 1'b0;
                instr_type_o = INSTR_U_TYPE;
                
                eraise_o = 1'b0;
                illegal_o = 1'b0;
            end
            
            OP_BRANCH: begin
                ctrl_signals_o.alu_a_sel = ALU_A_SEL_RS1;
                ctrl_signals_o.alu_b_sel = ALU_B_SEL_RS2;
                ctrl_signals_o.alu_op = ALU_INVALID;
                ctrl_signals_o.branch_op = decode_branch_op(funct3_i);
                ctrl_signals_o.store_op = STORE_INVALID;
                ctrl_signals_o.load_op = LOAD_INVALID;
                ctrl_signals_o.rd_sel = RD_SEL_ALU;
                ctrl_signals_o.rd_we = 1'b0;
                ctrl_signals_o.mem_we = 1'b0;
                instr_type_o = INSTR_B_TYPE;
                
                eraise_o = 1'b0;
                illegal_o = 1'b0;
            end
            
            OP_JALR: begin
                ctrl_signals_o.alu_a_sel = ALU_A_SEL_RS1;
                ctrl_signals_o.alu_b_sel = ALU_B_SEL_IMM;
                ctrl_signals_o.alu_op = ALU_ADD;
                ctrl_signals_o.branch_op = JALR;
                ctrl_signals_o.store_op = STORE_INVALID;
                ctrl_signals_o.load_op = LOAD_INVALID;
                ctrl_signals_o.rd_sel = RD_SEL_PC;
                ctrl_signals_o.rd_we = 1'b1;
                ctrl_signals_o.mem_we = 1'b0;
                instr_type_o = INSTR_I_TYPE;
                
                eraise_o = 1'b0;
                illegal_o = 1'b0;
            end
            
            OP_JAL: begin
                ctrl_signals_o.alu_a_sel = ALU_A_SEL_PC;
                ctrl_signals_o.alu_b_sel = ALU_B_SEL_IMM;
                ctrl_signals_o.alu_op = ALU_ADD;
                ctrl_signals_o.branch_op = JAL;
                ctrl_signals_o.store_op = STORE_INVALID;
                ctrl_signals_o.load_op = LOAD_INVALID;
                ctrl_signals_o.rd_sel = RD_SEL_PC;
                ctrl_signals_o.rd_we = 1'b1;
                ctrl_signals_o.mem_we = 1'b0;
                instr_type_o = INSTR_J_TYPE;
                
                eraise_o = 1'b0;
                illegal_o = 1'b0;
            end
            
            OP_SYSTEM: begin
                ctrl_signals_o = '0;
                instr_type_o = INSTR_OTHER;
                
                eraise_o = 1'b1;
                illegal_o = 1'b0;
            end

            default: begin
                ctrl_signals_o = '0;
                instr_type_o = INSTR_OTHER;
                
                eraise_o = 1'b0;
                illegal_o = 1'b1;
            end
            
        endcase
        
    end

endmodule