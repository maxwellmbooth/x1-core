import common_pkg::*;

module stage_id (
  input logic clk_i, rst_i,
  input ctrl_id_t ctrl_id_i,
  input if_id_t if_id_i,
  input logic [XLEN-1:0] rs1_data_i, rs2_data_i,
  
  output logic [4:0] rs1_addr_o, rs2_addr_o,
  output info_id_t info_id_o,
  output id_ex_t id_ex_o
);

  function automatic logic [XLEN-1:0] imm_gen (
    input logic [31:0] instr,
    input instr_type_t instr_type
  );
    unique case (instr_type)
      INSTR_R_TYPE: return 32'd0;
      INSTR_I_TYPE: return {{20{instr[31]}}, instr[31:20]};
      INSTR_S_TYPE: return {{20{instr[31]}}, instr[31:25], instr[11:7]};
      INSTR_B_TYPE: return {{19{instr[31]}}, instr[31], instr[7], instr[30:25], instr[11:8], 1'b0};
      INSTR_U_TYPE: return {instr[31:12], 12'd0};
      INSTR_J_TYPE: return {{11{instr[31]}}, instr[31], instr[19:12], instr[20], instr[30:21], 1'b0};
      INSTR_OTHER: return 32'd0;
      default: return 32'd0;
    endcase
  endfunction

  id_ex_t id_ex_d, id_ex_q;

  assign rs1_addr_o = if_id_i.instr[19:15];
  assign rs2_addr_o = if_id_i.instr[24:20];
  
  ctrl_signals_t ctrl_signals;
  instr_type_t instr_type;
  logic eraise, illegal; //NOT FULLY IMPLEMENTED
  
  control_unit control_unit_inst (
    .opcode_i(if_id_i.instr[6:0]),
    .funct3_i(if_id_i.instr[14:12]),
    .funct7_i(if_id_i.instr[31:25]),
    .ctrl_signals_o(ctrl_signals),
    .instr_type_o(instr_type),
    .eraise_o(eraise),
    .illegal_o(illegal)
  );
  
  always_comb begin
    info_id_o = '0;
    if ((id_ex_q.ctrl_signals.load_op != LOAD_INVALID) && ((rs1_addr_o == id_ex_q.rd_addr) || (rs2_addr_o == id_ex_q.rd_addr)) && id_ex_q.valid) begin
      info_id_o.load_use_hazard = 1'b1;
      // fix to include check for x0 as rs1/rs2/rd and uses rs1/rs2
    end
    
    id_ex_d = id_ex_q;
    if (ctrl_id_i.flush_id_ex) begin
      id_ex_d = '0;
    end else if (ctrl_id_i.stall_bubble_id_ex) begin
      id_ex_d.valid = 1'b0;
    end else if (!ctrl_id_i.stall_hold_id_ex) begin
      id_ex_d.valid = if_id_i.valid;
      id_ex_d.instr = if_id_i.instr;
      id_ex_d.pc = if_id_i.pc;
      id_ex_d.ctrl_signals = ctrl_signals;
      id_ex_d.rs1_addr = rs1_addr_o;
      id_ex_d.rs2_addr = rs2_addr_o;
      id_ex_d.rs1_data = rs1_data_i;
      id_ex_d.rs2_data = rs2_data_i;
      id_ex_d.rd_addr = if_id_i.instr[11:7];
      id_ex_d.shamt = if_id_i.instr[24:20];
      id_ex_d.imm = imm_gen(if_id_i.instr, instr_type);
    end
  end
  
  always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
      id_ex_q <= '0;
    end else begin
      id_ex_q <= id_ex_d;
    end
  end
  
  assign id_ex_o = id_ex_q;

endmodule