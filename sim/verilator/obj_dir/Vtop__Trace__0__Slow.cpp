// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP____024unit__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__common_pkg__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+137,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$unit", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("common_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__common_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+137,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+105,0,"imem_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 72,0);
    tracep->declQuad(c+95,0,"imem_rsp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declArray(c+146,0,"dmem_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 72,0);
    tracep->declQuad(c+149,0,"dmem_rsp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declBit(c+108,0,"imem_req_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"imem_req_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"imem_rsp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+0,0,"imem_rsp_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"dmem_req_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"dmem_req_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"dmem_rsp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"dmem_rsp_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("core_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+137,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"imem_rsp_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"imem_req_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+95,0,"imem_rsp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+149,0,"dmem_rsp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declBit(c+108,0,"imem_req_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+0,0,"imem_rsp_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+105,0,"imem_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 72,0);
    tracep->declArray(c+146,0,"dmem_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 72,0);
    tracep->declBus(c+1,0,"rs1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+2,0,"rs2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+3,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"rd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,0,"rd_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+8,0,"pc_redirect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declArray(c+10,0,"if_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declBus(c+13,0,"ctrl_if",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+14,0,"info_if",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declArray(c+15,0,"id_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 200,0);
    tracep->declBus(c+22,0,"ctrl_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+23,0,"info_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declArray(c+109,0,"ex_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 185,0);
    tracep->declArray(c+86,0,"ctrl_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->declArray(c+24,0,"mem_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 185,0);
    tracep->declBus(c+156,0,"ctrl_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declQuad(c+115,0,"info_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBus(c+30,0,"info_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("regfile_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+137,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"rs1_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+2,0,"rs2_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+3,0,"rd_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"rd_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,0,"rd_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+31+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_ex_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+137,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+86,0,"ctrl_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->declArray(c+15,0,"id_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 200,0);
    tracep->declQuad(c+8,0,"pc_redirect_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declArray(c+109,0,"ex_mem_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 185,0);
    tracep->declQuad(c+117,0,"pc_redirect_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+8,0,"pc_redirect_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declArray(c+89,0,"ex_mem_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 185,0);
    tracep->declArray(c+109,0,"ex_mem_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 185,0);
    tracep->declBus(c+119,0,"alu_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"alu_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"alu_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+122,0,"alu_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"alu_lt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"alu_ltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+125,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+119,0,"a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"op_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+121,0,"q_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+122,0,"eq_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"lt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"ltu_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_id_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+137,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"ctrl_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+10,0,"if_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declBus(c+6,0,"rs1_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"rs2_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"rs1_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+2,0,"rs2_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+23,0,"info_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declArray(c+15,0,"id_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 200,0);
    tracep->declArray(c+64,0,"id_ex_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 200,0);
    tracep->declArray(c+15,0,"id_ex_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 200,0);
    tracep->declBus(c+71,0,"ctrl_signals",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+72,0,"instr_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+73,0,"eraise",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"illegal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("control_unit_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+75,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+76,0,"funct3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+77,0,"funct7_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+71,0,"ctrl_signals_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+72,0,"instr_type_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+73,0,"eraise_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"illegal_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_if_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+137,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"ctrl_if_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+97,0,"imem_rsp_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"imem_req_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+95,0,"imem_rsp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+8,0,"pc_redirect_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+108,0,"imem_req_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+0,0,"imem_rsp_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+105,0,"imem_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 72,0);
    tracep->declBus(c+14,0,"info_if_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declArray(c+10,0,"if_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declBus(c+78,0,"fetch_epoch_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+139,0,"fetch_id_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+79,0,"fetch_id_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+108,0,"imem_req_accepted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"imem_rsp_accepted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"pc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"pc_issued_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+82,0,"pc_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+83,0,"pc_redirect_pending_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declArray(c+140,0,"imem_req_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 72,0);
    tracep->declArray(c+105,0,"imem_req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 72,0);
    tracep->declBit(c+143,0,"imem_req_valid_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"imem_req_valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"imem_req_inflight_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"imem_req_inflight_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"imem_req_has_space",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"imem_req_issue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+134,0,"if_id_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+10,0,"if_id_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declBit(c+145,0,"imem_epoch_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("program_counter_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+137,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"pc_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"pc_next_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_mem_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+137,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+156,0,"ctrl_mem_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declArray(c+109,0,"ex_mem_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 185,0);
    tracep->declQuad(c+149,0,"dmem_rsp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declArray(c+146,0,"dmem_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 72,0);
    tracep->declQuad(c+115,0,"info_mem_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declArray(c+24,0,"mem_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 185,0);
    tracep->declArray(c+99,0,"mem_wb_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 185,0);
    tracep->declArray(c+24,0,"mem_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 185,0);
    tracep->declBit(c+128,0,"mem_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+129,0,"data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ram_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+137,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+130,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+129,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_wb_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+137,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+24,0,"mem_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 185,0);
    tracep->declBus(c+3,0,"rd_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,0,"rd_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"info_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+85,0,"mem_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rom_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+137,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"mem_req_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+0,0,"mem_rsp_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+105,0,"mem_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 72,0);
    tracep->declBit(c+97,0,"mem_rsp_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"mem_req_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+95,0,"mem_rsp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP____024unit__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP____024unit__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+157,0,"ROM_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+158,0,"ROM_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+159,0,"ROM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+160,0,"RAM_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+158,0,"RAM_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+161,0,"RAM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__common_pkg__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__common_pkg__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+158,0,"XLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+162,0,"PC_RESET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullWData(oldp+146,(vlSelfRef.top__DOT__dmem_req),73);
    bufp->fullQData(oldp+149,(vlSelfRef.top__DOT__dmem_rsp),41);
    bufp->fullBit(oldp+151,(1U));
    bufp->fullBit(oldp+152,(vlSelfRef.top__DOT__dmem_req_valid));
    bufp->fullBit(oldp+153,(vlSelfRef.top__DOT__dmem_req_ready));
    bufp->fullBit(oldp+154,(vlSelfRef.top__DOT__dmem_rsp_valid));
    bufp->fullBit(oldp+155,(vlSelfRef.top__DOT__dmem_rsp_ready));
    bufp->fullBit(oldp+156,(0U));
    bufp->fullIData(oldp+157,(0x00000010U),32);
    bufp->fullIData(oldp+158,(0x00000020U),32);
    bufp->fullIData(oldp+159,(0x00010000U),32);
    bufp->fullIData(oldp+160,(8U),32);
    bufp->fullIData(oldp+161,(0x00000100U),32);
    bufp->fullIData(oldp+162,(0U),32);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<6>/*191:0*/ __Vtemp_13;
    VlWide<6>/*191:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_25;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,((1U & (~ ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i) 
                                    >> 1U)))));
    bufp->fullCData(oldp+1,((0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                                            >> 0x0000000fU))),5);
    bufp->fullCData(oldp+2,((0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                                            >> 0x00000014U))),5);
    bufp->fullCData(oldp+3,((0x0000001fU & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[3U])),5);
    bufp->fullIData(oldp+4,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rd_data_i),32);
    bufp->fullBit(oldp+5,(((vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[3U] 
                            >> 6U) & (vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[5U] 
                                      >> 0x00000019U))));
    bufp->fullIData(oldp+6,(((0U == (0x0000001fU & 
                                     (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                                      >> 0x0000000fU)))
                              ? 0U : vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs
                             [(0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                                              >> 0x0000000fU))])),32);
    bufp->fullIData(oldp+7,(((0U == (0x0000001fU & 
                                     (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                                      >> 0x00000014U)))
                              ? 0U : vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs
                             [(0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                                              >> 0x00000014U))])),32);
    bufp->fullQData(oldp+8,(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_q),33);
    bufp->fullWData(oldp+10,(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q),65);
    bufp->fullCData(oldp+13,(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i),4);
    bufp->fullBit(oldp+14,(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_q));
    bufp->fullWData(oldp+15,(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q),201);
    bufp->fullCData(oldp+22,(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_id_i),3);
    bufp->fullBit(oldp+23,(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__info_id_o));
    bufp->fullWData(oldp+24,(vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q),186);
    bufp->fullBit(oldp+30,((1U & (vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[5U] 
                                  >> 0x00000019U))));
    bufp->fullIData(oldp+31,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[0]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[1]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[2]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[3]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[4]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[5]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[6]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[7]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[8]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[9]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[10]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[11]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[12]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[13]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[14]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[15]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[16]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[17]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[18]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[19]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[20]),32);
    bufp->fullIData(oldp+52,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[21]),32);
    bufp->fullIData(oldp+53,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[22]),32);
    bufp->fullIData(oldp+54,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[23]),32);
    bufp->fullIData(oldp+55,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[24]),32);
    bufp->fullIData(oldp+56,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[25]),32);
    bufp->fullIData(oldp+57,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[26]),32);
    bufp->fullIData(oldp+58,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[27]),32);
    bufp->fullIData(oldp+59,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[28]),32);
    bufp->fullIData(oldp+60,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[29]),32);
    bufp->fullIData(oldp+61,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[30]),32);
    bufp->fullIData(oldp+62,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[31]),32);
    bufp->fullCData(oldp+63,((0x0000000fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U] 
                                             >> 1U))),4);
    bufp->fullWData(oldp+64,(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d),201);
    bufp->fullIData(oldp+71,(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals),20);
    bufp->fullCData(oldp+72,(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type),3);
    bufp->fullBit(oldp+73,(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise));
    bufp->fullBit(oldp+74,(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal));
    bufp->fullCData(oldp+75,((0x0000007fU & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])),7);
    bufp->fullCData(oldp+76,((7U & (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                                    >> 0x0000000cU))),3);
    bufp->fullCData(oldp+77,((vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                              >> 0x00000019U)),7);
    bufp->fullCData(oldp+78,(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_epoch_q),4);
    bufp->fullCData(oldp+79,(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_q),4);
    bufp->fullIData(oldp+80,(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_q),32);
    bufp->fullIData(oldp+81,(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_issued_q),32);
    bufp->fullBit(oldp+82,((1U & (~ ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i) 
                                     >> 3U)))));
    bufp->fullQData(oldp+83,(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_pending_q),33);
    bufp->fullIData(oldp+85,(((0x00000800U & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[3U])
                               ? ((0x00000400U & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[3U])
                                   ? 0U : ((0x00000200U 
                                            & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[3U])
                                            ? vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[0U]
                                            : (0x0000ffffU 
                                               & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[0U])))
                               : ((0x00000400U & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[3U])
                                   ? ((0x00000200U 
                                       & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[3U])
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[0U] 
                                                          >> 7U)))) 
                                           << 0x00000010U) 
                                          | (0x0000ffffU 
                                             & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[0U]))
                                       : (0x000000ffU 
                                          & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[0U]))
                                   : ((0x00000200U 
                                       & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[3U])
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[0U] 
                                                          >> 7U)))) 
                                           << 8U) | 
                                          (0x000000ffU 
                                           & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[0U]))
                                       : 0U)))),32);
    __Vtemp_2[0U] = (((IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rd_data_i)))) 
                      << 2U) | ((2U & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[5U] 
                                       >> 0x00000018U)) 
                                | (1U & (vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[5U] 
                                         >> 0x00000019U))));
    __Vtemp_2[1U] = (((IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rd_data_i)))) 
                      >> 0x0000001eU) | ((IData)(((
                                                   ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rd_data_i))) 
                                                  >> 0x00000020U)) 
                                         << 2U));
    __Vtemp_2[2U] = ((((0x00000400U & ((IData)((vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_q 
                                                >> 0x00000020U)) 
                                       << 0x0000000aU)) 
                       | ((0x000003e0U & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[2U] 
                                          << 5U)) | 
                          (0x0000001fU & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[3U]))) 
                      << 2U) | ((IData)(((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rd_data_i))) 
                                         >> 0x00000020U)) 
                                >> 0x0000001eU));
    bufp->fullWData(oldp+86,(__Vtemp_2),77);
    if ((1U & (IData)((vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_q 
                       >> 0x00000020U)))) {
        __Vtemp_13[0U] = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[0U];
        __Vtemp_13[1U] = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[1U];
        __Vtemp_13[2U] = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[2U];
        __Vtemp_13[3U] = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[3U];
        __Vtemp_13[4U] = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[4U];
        __Vtemp_13[5U] = (0x01ffffffU & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[5U]);
    } else {
        __Vtemp_13[0U] = (IData)((((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[0U])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__q_o))));
        __Vtemp_13[1U] = (IData)(((((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[0U])) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__q_o))) 
                                  >> 0x00000020U));
        __Vtemp_13[2U] = (IData)((((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs2_data)) 
                                   << 5U) | (QData)((IData)(
                                                            (0x0000001fU 
                                                             & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[1U] 
                                                                >> 5U))))));
        __Vtemp_13[3U] = (((vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U] 
                            << 0x00000011U) | (0x0001ffe0U 
                                               & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[3U] 
                                                  >> 0x0000000fU))) 
                          | (IData)(((((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs2_data)) 
                                       << 5U) | (QData)((IData)(
                                                                (0x0000001fU 
                                                                 & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[1U] 
                                                                    >> 5U))))) 
                                     >> 0x00000020U)));
        __Vtemp_13[4U] = ((0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U] 
                                          >> 0x0000000fU)) 
                          | ((vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[5U] 
                              << 0x00000011U) | (0x0001ffe0U 
                                                 & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U] 
                                                    >> 0x0000000fU))));
        __Vtemp_13[5U] = ((0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[5U] 
                                          >> 0x0000000fU)) 
                          | (0x03ffffe0U & ((vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[6U] 
                                             << 0x00000011U) 
                                            | (0x0001ffe0U 
                                               & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[5U] 
                                                  >> 0x0000000fU)))));
    }
    bufp->fullWData(oldp+89,(__Vtemp_13),186);
    bufp->fullQData(oldp+95,(vlSelfRef.top__DOT__imem_rsp),41);
    bufp->fullBit(oldp+97,(vlSelfRef.top__DOT__imem_rsp_valid));
    bufp->fullIData(oldp+98,(vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__data_out),32);
    __Vtemp_21[0U] = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__data_out;
    __Vtemp_21[1U] = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[0U];
    __Vtemp_21[2U] = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[1U];
    __Vtemp_21[3U] = ((0xffffffe0U & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[3U]) 
                      | (0x0000001fU & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[2U]));
    __Vtemp_21[4U] = ((0x0000001fU & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[4U]) 
                      | (0xffffffe0U & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[4U]));
    __Vtemp_21[5U] = ((0x0000001fU & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[5U]) 
                      | (0x03ffffe0U & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[5U]));
    bufp->fullWData(oldp+99,(__Vtemp_21),186);
    bufp->fullWData(oldp+105,(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_q),73);
    bufp->fullBit(oldp+108,(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_q));
    bufp->fullWData(oldp+109,(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q),186);
    bufp->fullQData(oldp+115,((((QData)((IData)((1U 
                                                 & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[5U] 
                                                    >> 0x00000019U)))) 
                                << 0x00000025U) | (
                                                   ((QData)((IData)(
                                                                    (0x0000001fU 
                                                                     & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[2U]))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))))),38);
    bufp->fullQData(oldp+117,(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_d),33);
    bufp->fullIData(oldp+119,(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__a_i),32);
    bufp->fullIData(oldp+120,(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i),32);
    bufp->fullIData(oldp+121,(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__q_o),32);
    bufp->fullBit(oldp+122,(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__eq_o));
    bufp->fullBit(oldp+123,(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__lt_o));
    bufp->fullBit(oldp+124,(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__ltu_o));
    bufp->fullIData(oldp+125,(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs1_data),32);
    bufp->fullIData(oldp+126,(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs2_data),32);
    bufp->fullIData(oldp+127,(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_next),32);
    bufp->fullBit(oldp+128,(vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__we_i));
    bufp->fullIData(oldp+129,(vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__data_i),32);
    bufp->fullCData(oldp+130,((0x000000ffU & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[0U])),8);
    bufp->fullBit(oldp+131,(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_accepted));
    bufp->fullBit(oldp+132,(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_d));
    bufp->fullBit(oldp+133,(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_issue));
    bufp->fullWData(oldp+134,(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d),65);
    bufp->fullBit(oldp+137,(vlSelfRef.clk_i));
    bufp->fullBit(oldp+138,(vlSelfRef.rst_i));
    bufp->fullCData(oldp+139,((0x0000000fU & ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_q) 
                                              + (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_issue)))),4);
    if (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_issue) {
        __Vtemp_25[0U] = 0U;
        __Vtemp_25[1U] = (IData)((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_next)));
        __Vtemp_25[2U] = (((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_epoch_q) 
                           << 5U) | (((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_q) 
                                      << 1U) | (IData)(
                                                       ((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_next)) 
                                                        >> 0x00000020U))));
    } else {
        __Vtemp_25[0U] = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_q[0U];
        __Vtemp_25[1U] = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_q[1U];
        __Vtemp_25[2U] = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_q[2U];
    }
    bufp->fullWData(oldp+140,(__Vtemp_25),73);
    bufp->fullBit(oldp+143,(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_issue));
    bufp->fullBit(oldp+144,((1U & ((~ (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_q)) 
                                   | (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_accepted)))));
    bufp->fullBit(oldp+145,(((0x0000000fU & (IData)(
                                                    (vlSelfRef.top__DOT__imem_rsp 
                                                     >> 0x00000025U))) 
                             == (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_epoch_q))));
}
