package core_pkg;
    import riscv_pkg::*;

    // ENUMS
    // ALU A mux options
    typedef enum logic {
        ALU_A_SEL_RS1,
        ALU_A_SEL_PC
    } alu_a_sel_t;
    
    // ALU B mux options
    typedef enum logic [1:0] {
        ALU_B_SEL_RS2,
        ALU_B_SEL_IMM
    } alu_b_sel_t;
    
    // RD mux options
    typedef enum logic[1:0] {
        RD_SEL_ALU,
        RD_SEL_IMM,
        RD_SEL_MEM,
        RD_SEL_PC
    } rd_sel_t;

    // STRUCTS
    // MEM info
    typedef struct packed {
        logic valid;
        logic [4:0] rd_addr_fwd;
        logic [XLEN-1:0] rd_data_fwd;
    } info_mem_t;
    
    // IF control
    typedef struct packed {
        logic flush_if_id;
    } ctrl_if_t;
    
    // ID control
    typedef struct packed {
        logic flush_id_ex;
        logic load_use_hazard;
    } ctrl_id_t;
    
    // EX control
    typedef struct packed {
        logic flush_ex_mem;
    } ctrl_ex_t;  
    
    // MEM control - reserved for future trap flush
    typedef struct packed {
        logic flush_mem_wb;
    } ctrl_mem_t;
    
    // PC redirect
    typedef struct packed {
        logic valid;
        logic [XLEN-1:0] target;
    } pc_redirect_t;
    
    // Control signals per instruction
    typedef struct packed {
        alu_a_sel_t alu_a_sel;
        alu_b_sel_t alu_b_sel;
        alu_op_t alu_op;
        branch_op_t branch_op;
        store_op_t store_op;
        load_op_t load_op;
        rd_sel_t rd_sel;
        logic rd_we;
        logic mem_we;
        logic mem_re;
    } ctrl_signals_t;
    
    // IF to ID stage
    typedef struct packed {
        logic valid;
        logic [XLEN-1:0] instr;
        logic [XLEN-1:0] pc;
    } if_id_t;
    
    // ID to EX stage
    typedef struct packed {
        logic valid;
        logic [XLEN-1:0] instr;
        logic [XLEN-1:0] pc;
        ctrl_signals_t ctrl_signals;
        logic [4:0] rs1_addr, rs2_addr;
        logic [XLEN-1:0] rs1_data, rs2_data;
        logic [4:0] rd_addr;
        logic [XLEN-1:0] imm;
    } id_ex_t;
    
    // EX to MEM stage
    typedef struct packed {
        logic valid;
        logic [XLEN-1:0] instr; // kept for tracing
        logic [XLEN-1:0] pc;
        ctrl_signals_t ctrl_signals;
        logic [XLEN-1:0] rs2_data;
        logic [4:0] rd_addr;
        logic [XLEN-1:0] imm;
        logic [XLEN-1:0] alu_q;
    } ex_mem_t;
    
    // MEM to WB stage
    typedef struct packed {
        logic valid;
        logic [XLEN-1:0] instr; // kept for tracing
        logic [XLEN-1:0] pc;
        ctrl_signals_t ctrl_signals;
        logic [4:0] rd_addr;
        logic [XLEN-1:0] imm;
        logic [XLEN-1:0] alu_q;
        logic [XLEN-1:0] mem_rdata;
    } mem_wb_t;

endpackage