package common_pkg;
  parameter int XLEN = 32;
  parameter logic [XLEN-1:0] PC_RESET = 32'd0;
 
  // ENUMS

  // RV32I opcodes
  typedef enum logic[6:0] {
    OP_LOAD = 7'b0000011,
    OP_STORE = 7'b0100011,
    OP_ALU_IMM = 7'b0010011,
    OP_ALU = 7'b0110011,
    OP_AUIPC = 7'b0010111,
    OP_LUI = 7'b0110111,
    OP_BRANCH = 7'b1100011,
    OP_JALR = 7'b1100111,
    OP_JAL = 7'b1101111,
    OP_SYSTEM = 7'b1110011
  } opcode_t;
  
  // Instruction types
  typedef enum logic[2:0] {
    INSTR_R_TYPE,
    INSTR_I_TYPE,
    INSTR_S_TYPE,
    INSTR_B_TYPE,
    INSTR_U_TYPE,
    INSTR_J_TYPE,
    INSTR_OTHER
  } instr_type_t;
  
  // ALU operations
  typedef enum logic[3:0] {
    ALU_INVALID,
    ALU_ADD,
    ALU_SUB,
    ALU_SLT,
    ALU_SLTU,
    ALU_SLL,
    ALU_SRL,
    ALU_SRA,
    ALU_OR,
    ALU_XOR,
    ALU_AND
  } alu_op_t;
  
  // Branch operations
  typedef enum logic[3:0] {
    BRANCH_INVALID,
    BEQ,
    BNE,
    BLT,
    BGE,
    BLTU,
    BGEU,
    JAL,
    JALR
  } branch_op_t;
  
  // Store operations
  typedef enum logic[1:0] {
    STORE_INVALID,
    STORE_BYTE,
    STORE_HALF,
    STORE_WORD
  } store_op_t;
  
  // Load operations
  typedef enum logic[2:0] {
    LOAD_INVALID,
    LOAD_BYTE,
    LOAD_BYTEU,
    LOAD_HALF,
    LOAD_HALFU,
    LOAD_WORD
  } load_op_t;
  
  // ALU A mux options
  typedef enum logic {
    ALU_A_SEL_RS1,
    ALU_A_SEL_PC
  } alu_a_sel_t;
  
  // ALU B mux options
  typedef enum logic [1:0] {
    ALU_B_SEL_RS2,
    ALU_B_SEL_IMM,
    ALU_B_SEL_SHAMT
  } alu_b_sel_t;
  
  // RD mux options
  typedef enum logic[1:0] {
   RD_SEL_ALU,
   RD_SEL_IMM,
	 RD_SEL_MEM,
	 RD_SEL_PC
  } rd_sel_t;
  
  
  // STRUCTS

  // Memory request
  typedef struct packed {
    logic [3:0] epoch;
    logic [3:0] id;
    logic we;
    logic [31:0] addr;
    logic [XLEN-1:0] wdata;
  } mem_req_t;

  // Memory response
  typedef struct packed {
    logic [3:0] epoch;
    logic [3:0] id;
    logic addr_invalid;
    logic [XLEN-1:0] rdata;
  } mem_rsp_t;

  // IF info
  typedef struct packed {
    logic imem_req_inflight;
  } info_if_t;

  // ID info
  typedef struct packed {
    logic load_use_hazard;
  } info_id_t;

  // MEM info
  typedef struct packed {
    logic valid;
    logic [4:0] rd_addr_fwd;
    logic [XLEN-1:0] rd_data_fwd;
  } info_mem_t;

  // WB info
  typedef struct packed {
    logic valid;
  } info_wb_t;
  
  // IF control
  typedef struct packed {
    logic stall_hold_pc;
    logic flush_if_id;
    logic stall_hold_if_id;
    logic stall_bubble_if_id;
  } ctrl_if_t;
  
  // ID control
  typedef struct packed {
    logic flush_id_ex;
    logic stall_hold_id_ex;
    logic stall_bubble_id_ex;
  } ctrl_id_t;
  
  // EX control
  typedef struct packed {
    logic flush_ex_mem;
    logic [4:0] rd_addr_mem_fwd;
    logic [4:0] rd_addr_wb_fwd;
    logic [XLEN-1:0] rd_data_mem_fwd;
    logic [XLEN-1:0] rd_data_wb_fwd;
    logic mem_valid;
    logic wb_valid;
  } ctrl_ex_t;  
  
  // MEM control
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
    logic [4:0] shamt;
    logic [XLEN-1:0] imm;
  } id_ex_t;
  
  // EX to MEM stage
  typedef struct packed {
    logic valid;
    logic [XLEN-1:0] instr;
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
    logic [XLEN-1:0] instr;
    logic [XLEN-1:0] pc;
    ctrl_signals_t ctrl_signals;
    logic [4:0] rd_addr;
    logic [XLEN-1:0] imm;
    logic [XLEN-1:0] alu_q;
    logic [XLEN-1:0] mem_data;
  } mem_wb_t;
  
endpackage