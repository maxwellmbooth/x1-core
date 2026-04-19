// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___eval_triggers_vec__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers_vec__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[1U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                    (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i 
                                                     != vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i__0 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
        vlSelfRef.__VicoDidInit = 1U;
        vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
    }
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__info_if_o 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_q;
    vlSelfRef.top__DOT__core_inst__DOT__dmem_rsp_i 
        = vlSelfRef.top__DOT__dmem_rsp;
    vlSelfRef.top__DOT__core_inst__DOT__dmem_req_o[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__dmem_req_o[0U];
    vlSelfRef.top__DOT__core_inst__DOT__dmem_req_o[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__dmem_req_o[1U];
    vlSelfRef.top__DOT__core_inst__DOT__dmem_req_o[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__dmem_req_o[2U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ctrl_mem_i 
        = vlSelfRef.top__DOT__core_inst__DOT__ctrl_mem;
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__data_out 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__data_o;
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_o[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_q[0U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_o[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_q[1U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_o[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_q[2U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_q 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__pc_o;
    vlSelfRef.top__DOT__rst_i = vlSelfRef.rst_i;
    vlSelfRef.top__DOT__imem_rsp = vlSelfRef.top__DOT__rom_inst__DOT__mem_rsp_o;
    vlSelfRef.top__DOT__clk_i = vlSelfRef.clk_i;
    vlSelfRef.top__DOT__imem_rsp_valid = vlSelfRef.top__DOT__rom_inst__DOT__mem_rsp_valid_o;
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_o 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_q;
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_o[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[0U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_o[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[1U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_o[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[2U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_o[3U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[3U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_o[4U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_o[5U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[5U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_o[6U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[6U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_o 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_q;
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_o[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[0U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_o[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_o[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[2U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_o[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[0U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_o[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[1U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_o[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[2U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_o[3U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[3U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_o[4U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[4U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_o[5U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[5U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_o[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[0U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_o[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[1U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_o[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[2U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_o[3U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[3U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_o[4U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[4U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_o[5U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[5U];
    vlSelfRef.top__DOT__core_inst__DOT__info_if = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__info_if_o;
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__dmem_rsp_i 
        = vlSelfRef.top__DOT__core_inst__DOT__dmem_rsp_i;
    vlSelfRef.top__DOT__dmem_req[0U] = vlSelfRef.top__DOT__core_inst__DOT__dmem_req_o[0U];
    vlSelfRef.top__DOT__dmem_req[1U] = vlSelfRef.top__DOT__core_inst__DOT__dmem_req_o[1U];
    vlSelfRef.top__DOT__dmem_req[2U] = vlSelfRef.top__DOT__core_inst__DOT__dmem_req_o[2U];
    vlSelfRef.top__DOT__core_inst__DOT__imem_req_o[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_o[0U];
    vlSelfRef.top__DOT__core_inst__DOT__imem_req_o[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_o[1U];
    vlSelfRef.top__DOT__core_inst__DOT__imem_req_o[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_o[2U];
    vlSelfRef.top__DOT__core_inst__DOT__rst_i = vlSelfRef.top__DOT__rst_i;
    vlSelfRef.top__DOT__core_inst__DOT__imem_rsp_i 
        = vlSelfRef.top__DOT__imem_rsp;
    vlSelfRef.top__DOT__rom_inst__DOT__clk_i = vlSelfRef.top__DOT__clk_i;
    vlSelfRef.top__DOT__core_inst__DOT__clk_i = vlSelfRef.top__DOT__clk_i;
    vlSelfRef.top__DOT__core_inst__DOT__imem_rsp_valid_i 
        = vlSelfRef.top__DOT__imem_rsp_valid;
    vlSelfRef.top__DOT__core_inst__DOT__imem_req_valid_o 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_o;
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_accepted 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_o;
    vlSelfRef.top__DOT__core_inst__DOT__id_ex[0U] = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_o[0U];
    vlSelfRef.top__DOT__core_inst__DOT__id_ex[1U] = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_o[1U];
    vlSelfRef.top__DOT__core_inst__DOT__id_ex[2U] = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_o[2U];
    vlSelfRef.top__DOT__core_inst__DOT__id_ex[3U] = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_o[3U];
    vlSelfRef.top__DOT__core_inst__DOT__id_ex[4U] = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_o[4U];
    vlSelfRef.top__DOT__core_inst__DOT__id_ex[5U] = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_o[5U];
    vlSelfRef.top__DOT__core_inst__DOT__id_ex[6U] = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_o[6U];
    vlSelfRef.top__DOT__core_inst__DOT__pc_redirect 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_o;
    vlSelfRef.top__DOT__core_inst__DOT__if_id[0U] = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_o[0U];
    vlSelfRef.top__DOT__core_inst__DOT__if_id[1U] = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_o[1U];
    vlSelfRef.top__DOT__core_inst__DOT__if_id[2U] = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_o[2U];
    vlSelfRef.top__DOT__core_inst__DOT__mem_wb[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_o[0U];
    vlSelfRef.top__DOT__core_inst__DOT__mem_wb[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_o[1U];
    vlSelfRef.top__DOT__core_inst__DOT__mem_wb[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_o[2U];
    vlSelfRef.top__DOT__core_inst__DOT__mem_wb[3U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_o[3U];
    vlSelfRef.top__DOT__core_inst__DOT__mem_wb[4U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_o[4U];
    vlSelfRef.top__DOT__core_inst__DOT__mem_wb[5U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_o[5U];
    vlSelfRef.top__DOT__core_inst__DOT__ex_mem[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_o[0U];
    vlSelfRef.top__DOT__core_inst__DOT__ex_mem[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_o[1U];
    vlSelfRef.top__DOT__core_inst__DOT__ex_mem[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_o[2U];
    vlSelfRef.top__DOT__core_inst__DOT__ex_mem[3U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_o[3U];
    vlSelfRef.top__DOT__core_inst__DOT__ex_mem[4U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_o[4U];
    vlSelfRef.top__DOT__core_inst__DOT__ex_mem[5U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_o[5U];
    vlSelfRef.top__DOT__imem_req[0U] = vlSelfRef.top__DOT__core_inst__DOT__imem_req_o[0U];
    vlSelfRef.top__DOT__imem_req[1U] = vlSelfRef.top__DOT__core_inst__DOT__imem_req_o[1U];
    vlSelfRef.top__DOT__imem_req[2U] = vlSelfRef.top__DOT__core_inst__DOT__imem_req_o[2U];
    vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rst_i 
        = vlSelfRef.top__DOT__core_inst__DOT__rst_i;
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rst_i 
        = vlSelfRef.top__DOT__core_inst__DOT__rst_i;
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__rst_i 
        = vlSelfRef.top__DOT__core_inst__DOT__rst_i;
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__rst_i 
        = vlSelfRef.top__DOT__core_inst__DOT__rst_i;
    vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__rst 
        = vlSelfRef.top__DOT__core_inst__DOT__rst_i;
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__rst_i 
        = vlSelfRef.top__DOT__core_inst__DOT__rst_i;
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_i 
        = vlSelfRef.top__DOT__core_inst__DOT__imem_rsp_i;
    vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__clk_i 
        = vlSelfRef.top__DOT__core_inst__DOT__clk_i;
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__clk_i 
        = vlSelfRef.top__DOT__core_inst__DOT__clk_i;
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__clk_i 
        = vlSelfRef.top__DOT__core_inst__DOT__clk_i;
    vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__clk 
        = vlSelfRef.top__DOT__core_inst__DOT__clk_i;
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__clk_i 
        = vlSelfRef.top__DOT__core_inst__DOT__clk_i;
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__clk_i 
        = vlSelfRef.top__DOT__core_inst__DOT__clk_i;
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_valid_i 
        = vlSelfRef.top__DOT__core_inst__DOT__imem_rsp_valid_i;
    vlSelfRef.top__DOT__imem_req_valid = vlSelfRef.top__DOT__core_inst__DOT__imem_req_valid_o;
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__id_ex[0U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__id_ex[1U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__id_ex[2U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[3U] 
        = vlSelfRef.top__DOT__core_inst__DOT__id_ex[3U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
        = vlSelfRef.top__DOT__core_inst__DOT__id_ex[4U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[5U] 
        = vlSelfRef.top__DOT__core_inst__DOT__id_ex[5U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[6U] 
        = vlSelfRef.top__DOT__core_inst__DOT__id_ex[6U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_i 
        = vlSelfRef.top__DOT__core_inst__DOT__pc_redirect;
    vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[2U] 
        = (0x00000fffU & vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[2U]);
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__if_id[0U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__if_id[1U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__if_id[2U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__mem_wb[0U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__mem_wb[1U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__mem_wb[2U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[3U] 
        = vlSelfRef.top__DOT__core_inst__DOT__mem_wb[3U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[4U] 
        = vlSelfRef.top__DOT__core_inst__DOT__mem_wb[4U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[5U] 
        = vlSelfRef.top__DOT__core_inst__DOT__mem_wb[5U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__ex_mem[0U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__ex_mem[1U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__ex_mem[2U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[3U] 
        = vlSelfRef.top__DOT__core_inst__DOT__ex_mem[3U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[4U] 
        = vlSelfRef.top__DOT__core_inst__DOT__ex_mem[4U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[5U] 
        = vlSelfRef.top__DOT__core_inst__DOT__ex_mem[5U];
    vlSelfRef.top__DOT__rom_inst__DOT__mem_req_i[0U] 
        = vlSelfRef.top__DOT__imem_req[0U];
    vlSelfRef.top__DOT__rom_inst__DOT__mem_req_i[1U] 
        = vlSelfRef.top__DOT__imem_req[1U];
    vlSelfRef.top__DOT__rom_inst__DOT__mem_req_i[2U] 
        = vlSelfRef.top__DOT__imem_req[2U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__rst_i 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__rst_i;
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_epoch_match 
        = ((0x0000000fU & (IData)((vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_i 
                                   >> 0x00000025U))) 
           == (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_epoch_q));
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__clk_i 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__clk_i;
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__clk_i 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__clk_i;
    vlSelfRef.top__DOT__rom_inst__DOT__mem_req_valid_i 
        = vlSelfRef.top__DOT__imem_req_valid;
    if ((1U & (IData)((vlSelfRef.top__DOT__core_inst__DOT__pc_redirect 
                       >> 0x00000020U)))) {
        vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[2U] 
            = (0x00001000U | vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[2U]);
    }
    if ((1U & (~ VL_ONEHOT_I(((2U & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                                     >> 6U)) | (1U 
                                                & (~ 
                                                   (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                                                    >> 7U)))))))) {
        if ((0U != ((2U & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                           >> 6U)) | (1U & (~ (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                                               >> 7U)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: stage_ex.sv:50: Assertion failed in %Ntop.core_inst.stage_ex_inst: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (1U & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                                    >> 7U)));
                VL_STOP_MT("../../rtl/pkg/../../rtl/stage_ex.sv", 50, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                                             >> 5U))) 
                               << 2U) | (((1U == (3U 
                                                  & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                                                     >> 5U))) 
                                          << 1U) | 
                                         (0U == (3U 
                                                 & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                                                    >> 5U))))))))) {
        if ((0U != (((2U == (3U & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                                   >> 5U))) << 2U) 
                    | (((1U == (3U & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                                      >> 5U))) << 1U) 
                       | (0U == (3U & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                                       >> 5U))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: stage_ex.sv:57: Assertion failed in %Ntop.core_inst.stage_ex_inst: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (3U & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                                    >> 5U)));
                VL_STOP_MT("../../rtl/pkg/../../rtl/stage_ex.sv", 57, "");
            }
        }
    }
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__op_i 
        = (0x0000000fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                          >> 1U));
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_next 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_q;
    if ((1U & (IData)((vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_i 
                       >> 0x00000020U)))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_next 
            = (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_i);
    } else if ((1U & (IData)((vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_pending_q 
                              >> 0x00000020U)))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_next 
            = (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_pending_q);
    } else if (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_accepted) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_next 
            = ((IData)(4U) + vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_q);
    }
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__funct3_i 
        = (7U & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[1U] 
                 >> 0x0000000cU));
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__funct7_i 
        = (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[1U] 
           >> 0x00000019U);
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i 
        = (0x0000007fU & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[1U]);
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs1_addr_o 
        = (0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[1U] 
                          >> 0x0000000fU));
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs2_addr_o 
        = (0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[1U] 
                          >> 0x00000014U));
    vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__rd_we_o 
        = ((vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[3U] 
            >> 6U) & (vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[5U] 
                      >> 0x00000019U));
    vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__info_wb_o 
        = (1U & (vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[5U] 
                 >> 0x00000019U));
    vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__rd_addr_o 
        = (0x0000001fU & vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[3U]);
    vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_data 
        = ((0x00000800U & vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[3U])
            ? ((0x00000400U & vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[3U])
                ? 0U : ((0x00000200U & vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[3U])
                         ? vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[0U]
                         : (0x0000ffffU & vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[0U])))
            : ((0x00000400U & vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[3U])
                ? ((0x00000200U & vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[3U])
                    ? (((- (IData)((1U & (vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[0U] 
                                          >> 7U)))) 
                        << 0x00000010U) | (0x0000ffffU 
                                           & vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[0U]))
                    : (0x000000ffU & vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[0U]))
                : ((0x00000200U & vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[3U])
                    ? (((- (IData)((1U & (vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[0U] 
                                          >> 7U)))) 
                        << 8U) | (0x000000ffU & vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[0U]))
                    : 0U)));
    vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__rd_data_o 
        = ((0x00000100U & vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[3U])
            ? ((0x00000080U & vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[3U])
                ? ((vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[4U] 
                    << 7U) | (vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[3U] 
                              >> 0x00000019U)) : vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_data)
            : ((0x00000080U & vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[3U])
                ? vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[2U]
                : vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[1U]));
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__addr_i 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[0U];
    if (vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ctrl_mem_i) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_d[0U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_d[1U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_d[2U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_d[3U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_d[4U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_d[5U] = 0U;
    } else {
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_d[0U] 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__data_out;
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_d[1U] 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[0U];
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_d[2U] 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[1U];
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_d[3U] 
            = ((0xffffffe0U & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[3U]) 
               | (0x0000001fU & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[2U]));
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_d[4U] 
            = ((0x0000001fU & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[4U]) 
               | (0xffffffe0U & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[4U]));
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_d[5U] 
            = ((0x0000001fU & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[5U]) 
               | (0x03ffffe0U & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[5U]));
    }
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__data_in 
        = ((0x00002000U & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[3U])
            ? ((0x00001000U & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[3U])
                ? ((vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[3U] 
                    << 0x0000001bU) | (vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[2U] 
                                       >> 5U)) : (0x0000ffffU 
                                                  & (vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[2U] 
                                                     >> 5U)))
            : ((0x00001000U & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[3U])
                ? (0x000000ffU & (vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[2U] 
                                  >> 5U)) : 0U));
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_we 
        = ((vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[3U] 
            >> 5U) & (vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[5U] 
                      >> 0x00000019U));
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__info_mem_o 
        = ((0x00000020ffffffffULL & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__info_mem_o) 
           | ((QData)((IData)((0x0000001fU & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[2U]))) 
              << 0x00000020U));
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__info_mem_o 
        = ((0x0000003f00000000ULL & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__info_mem_o) 
           | (IData)((IData)(((0x00000100U & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[3U])
                               ? ((0x00000080U & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[3U])
                                   ? ((vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[4U] 
                                       << 7U) | (vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[3U] 
                                                 >> 0x00000019U))
                                   : 0U) : ((0x00000080U 
                                             & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[3U])
                                             ? vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[1U]
                                             : vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[0U])))));
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__info_mem_o 
        = ((0x0000001fffffffffULL & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__info_mem_o) 
           | ((QData)((IData)((1U & (vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[5U] 
                                     >> 0x00000019U)))) 
              << 0x00000025U));
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__pc_next_i 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_next;
    if ((0x00000040U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
        if ((0x00000020U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
            if ((0x00000010U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                if ((8U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
                } else if ((4U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
                } else if ((2U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 1U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 0U;
                    } else {
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
                    }
                } else {
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
                }
            } else if ((8U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                if ((4U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0x000a2e0eU;
                            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 5U;
                            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 0U;
                        } else {
                            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
                        }
                    } else {
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
                    }
                } else {
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
                }
            } else if ((4U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0x0002300eU;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 1U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 0U;
                    } else {
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
                    }
                } else {
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o 
                        = (0x00001fffU & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o);
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 3U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 0U;
                    vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_branch_op__1__funct3 
                        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__funct3_i;
                    vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_branch_op__1__Vfuncout 
                        = ((4U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_branch_op__1__funct3))
                            ? ((2U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_branch_op__1__funct3))
                                ? ((1U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_branch_op__1__funct3))
                                    ? 6U : 5U) : ((1U 
                                                   & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_branch_op__1__funct3))
                                                   ? 4U
                                                   : 3U))
                            : ((2U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_branch_op__1__funct3))
                                ? 0U : ((1U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_branch_op__1__funct3))
                                         ? 2U : 1U)));
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o 
                        = ((0x000fe000U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o) 
                           | ((IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_branch_op__1__Vfuncout) 
                              << 9U));
                } else {
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
                }
            } else {
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
            }
        } else {
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
        if ((0x00000010U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
            if ((8U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
            } else if ((4U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 6U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 4U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 0U;
                    } else {
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
                    }
                } else {
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o 
                        = (0x0001ffffU & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o);
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 0U;
                    vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op__2__funct7 
                        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__funct7_i;
                    vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op__2__funct3 
                        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__funct3_i;
                    vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op__2__Vfuncout 
                        = ((4U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op__2__funct3))
                            ? ((2U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op__2__funct3))
                                ? ((1U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op__2__funct3))
                                    ? 0x0aU : 8U) : 
                               ((1U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op__2__funct3))
                                 ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op__2__funct7))
                                     ? 7U : 6U) : 9U))
                            : ((2U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op__2__funct3))
                                ? ((1U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op__2__funct3))
                                    ? 4U : 3U) : ((1U 
                                                   & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op__2__funct3))
                                                   ? 5U
                                                   : 
                                                  ((0x00000020U 
                                                    & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op__2__funct7))
                                                    ? 2U
                                                    : 1U))));
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o 
                        = ((0x000e0000U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o) 
                           | (2U | ((IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op__2__Vfuncout) 
                                    << 0x0000000dU)));
                } else {
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
                }
            } else {
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
            }
        } else if ((8U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
        } else if ((4U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
        } else if ((2U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o 
                    = (0x00022000U | (0x000001ffU & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o));
                vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__funct3 
                    = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__funct3_i;
                {
                    vlSelf->__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__Vfuncout = 0;
                    if ((0U == (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__funct3))) {
                        vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__Vfuncout = 1U;
                        goto __Vlabel0;
                    } else if ((1U == (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__funct3))) {
                        vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__Vfuncout = 2U;
                        goto __Vlabel0;
                    } else if ((2U == (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__funct3))) {
                        vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__Vfuncout = 3U;
                        goto __Vlabel0;
                    } else {
                        vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__Vfuncout = 0U;
                        goto __Vlabel0;
                    }
                    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                          (((2U 
                                                             == (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__funct3)) 
                                                            << 2U) 
                                                           | (((1U 
                                                                == (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__funct3)) 
                                                               << 1U) 
                                                              | (0U 
                                                                 == (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__funct3)))))))))) {
                        if ((0U != (((2U == (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__funct3)) 
                                     << 2U) | (((1U 
                                                 == (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__funct3)) 
                                                << 1U) 
                                               | (0U 
                                                  == (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__funct3)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: control_unit.sv:64: Assertion failed in %Ntop.core_inst.stage_id_inst.control_unit_inst.decode_store_op: unique case, but multiple matches found for '3'h%x'\n",0,
                                             64,VL_TIME_UNITED_Q(1),
                                             -12,vlSymsp->name(),
                                             3,(IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__funct3));
                                VL_STOP_MT("../../rtl/pkg/../../rtl/control_unit.sv", 64, "");
                            }
                        }
                    }
                    __Vlabel0: ;
                }
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o 
                    = ((0x000ffe00U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o) 
                       | (1U | ((IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__Vfuncout) 
                                << 7U)));
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 2U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 0U;
            } else {
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
            }
        } else {
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
        if ((8U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
        } else if ((4U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0x000a2002U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 4U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 0U;
                } else {
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
                }
            } else {
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o 
                    = (0x00020000U | (0x0001ffffU & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o));
                vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op_imm__4__funct7 
                    = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__funct7_i;
                vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op_imm__4__funct3 
                    = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__funct3_i;
                vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op_imm__4__Vfuncout 
                    = ((4U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op_imm__4__funct3))
                        ? ((2U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op_imm__4__funct3))
                            ? ((1U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op_imm__4__funct3))
                                ? 0x0aU : 8U) : ((1U 
                                                  & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op_imm__4__funct3))
                                                  ? 
                                                 ((0x00000020U 
                                                   & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op_imm__4__funct7))
                                                   ? 7U
                                                   : 6U)
                                                  : 9U))
                        : ((2U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op_imm__4__funct3))
                            ? ((1U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op_imm__4__funct3))
                                ? 4U : 3U) : ((1U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op_imm__4__funct3))
                                               ? 5U
                                               : 1U)));
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o 
                    = ((0x000e0000U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o) 
                       | (2U | ((IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op_imm__4__Vfuncout) 
                                << 0x0000000dU)));
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 1U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 0U;
            } else {
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
            }
        } else {
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
        }
    } else if ((8U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
    } else if ((4U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
    } else if ((2U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
        if ((1U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o 
                = (0x00022000U | (0x0000007fU & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o));
            vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_load_op__5__funct3 
                = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__funct3_i;
            vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_load_op__5__Vfuncout 
                = ((4U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_load_op__5__funct3))
                    ? ((2U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_load_op__5__funct3))
                        ? 0U : ((1U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_load_op__5__funct3))
                                 ? 0U : 4U)) : ((2U 
                                                 & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_load_op__5__funct3))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_load_op__5__funct3))
                                                  ? 2U
                                                  : 5U)
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_load_op__5__funct3))
                                                  ? 3U
                                                  : 1U)));
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o 
                = ((0x000fff80U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o) 
                   | (0x0aU | ((IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_load_op__5__Vfuncout) 
                               << 4U)));
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 1U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 0U;
        } else {
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
        }
    } else {
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
    }
    vlSelfRef.top__DOT__core_inst__DOT__rs1_addr = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs1_addr_o;
    vlSelfRef.top__DOT__core_inst__DOT__rs2_addr = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs2_addr_o;
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__info_id_o = 0U;
    if ((((0U != (7U & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[3U] 
                        >> 0x00000018U))) & (((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs1_addr_o) 
                                              == (0x0000001fU 
                                                  & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[1U] 
                                                     >> 5U))) 
                                             | ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs2_addr_o) 
                                                == 
                                                (0x0000001fU 
                                                 & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[1U] 
                                                    >> 5U))))) 
         & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[6U] 
            >> 8U))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__info_id_o = 1U;
    }
    vlSelfRef.top__DOT__core_inst__DOT__rd_we = vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__rd_we_o;
    vlSelfRef.top__DOT__core_inst__DOT__info_wb = vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__info_wb_o;
    vlSelfRef.top__DOT__core_inst__DOT__rd_addr = vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__rd_addr_o;
    vlSelfRef.top__DOT__core_inst__DOT__rd_data = vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__rd_data_o;
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__data_i 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__data_in;
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__we_i 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_we;
    vlSelfRef.top__DOT__core_inst__DOT__info_mem = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__info_mem_o;
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o;
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o;
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o;
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o;
    vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rs1_addr_i 
        = vlSelfRef.top__DOT__core_inst__DOT__rs1_addr;
    vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rs2_addr_i 
        = vlSelfRef.top__DOT__core_inst__DOT__rs2_addr;
    vlSelfRef.top__DOT__core_inst__DOT__info_id = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__info_id_o;
    vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rd_we_i 
        = vlSelfRef.top__DOT__core_inst__DOT__rd_we;
    vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[0U] 
        = ((0xfffffffeU & vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[0U]) 
           | (IData)(vlSelfRef.top__DOT__core_inst__DOT__info_wb));
    vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rd_addr_i 
        = vlSelfRef.top__DOT__core_inst__DOT__rd_addr;
    vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[2U] 
        = ((0x00001f83U & vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[2U]) 
           | (0x00001fffU & ((IData)(vlSelfRef.top__DOT__core_inst__DOT__rd_addr) 
                             << 2U)));
    vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rd_data_i 
        = vlSelfRef.top__DOT__core_inst__DOT__rd_data;
    vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[0U] 
        = ((3U & vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[0U]) 
           | (vlSelfRef.top__DOT__core_inst__DOT__rd_data 
              << 2U));
    vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[1U] 
        = ((0xfffffffcU & vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[1U]) 
           | (vlSelfRef.top__DOT__core_inst__DOT__rd_data 
              >> 0x0000001eU));
    vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[2U] 
        = ((0x0000107fU & vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[2U]) 
           | (0x00000f80U & ((IData)((vlSelfRef.top__DOT__core_inst__DOT__info_mem 
                                      >> 0x00000020U)) 
                             << 7U)));
    vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[1U] 
        = ((3U & vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[1U]) 
           | ((IData)(vlSelfRef.top__DOT__core_inst__DOT__info_mem) 
              << 2U));
    vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[2U] 
        = ((0x00001ffcU & vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[2U]) 
           | (0x00001fffU & ((IData)(vlSelfRef.top__DOT__core_inst__DOT__info_mem) 
                             >> 0x0000001eU)));
    vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[0U] 
        = ((0xfffffffdU & vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[0U]) 
           | (2U & ((IData)((vlSelfRef.top__DOT__core_inst__DOT__info_mem 
                             >> 0x00000025U)) << 1U)));
    vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rs1_data 
        = ((0U == (IData)(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rs1_addr_i))
            ? 0U : vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs
           [vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rs1_addr_i]);
    vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rs2_data 
        = ((0U == (IData)(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rs2_addr_i))
            ? 0U : vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs
           [vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rs2_addr_i]);
    vlSelfRef.top__DOT__core_inst__DOT__ctrl_id = 0U;
    if ((1U & (IData)((vlSelfRef.top__DOT__core_inst__DOT__pc_redirect 
                       >> 0x00000020U)))) {
        vlSelfRef.top__DOT__core_inst__DOT__ctrl_id 
            = (4U | (IData)(vlSelfRef.top__DOT__core_inst__DOT__ctrl_id));
    }
    vlSelfRef.top__DOT__core_inst__DOT__ctrl_if = (0x0bU 
                                                   & (IData)(vlSelfRef.top__DOT__core_inst__DOT__ctrl_if));
    vlSelfRef.top__DOT__core_inst__DOT__ctrl_if = (0x0eU 
                                                   & (IData)(vlSelfRef.top__DOT__core_inst__DOT__ctrl_if));
    vlSelfRef.top__DOT__core_inst__DOT__ctrl_if = (7U 
                                                   & (IData)(vlSelfRef.top__DOT__core_inst__DOT__ctrl_if));
    vlSelfRef.top__DOT__core_inst__DOT__ctrl_if = (0x0dU 
                                                   & (IData)(vlSelfRef.top__DOT__core_inst__DOT__ctrl_if));
    if ((1U & (IData)((vlSelfRef.top__DOT__core_inst__DOT__pc_redirect 
                       >> 0x00000020U)))) {
        vlSelfRef.top__DOT__core_inst__DOT__ctrl_if 
            = (4U | (IData)(vlSelfRef.top__DOT__core_inst__DOT__ctrl_if));
    }
    if (vlSelfRef.top__DOT__core_inst__DOT__info_id) {
        vlSelfRef.top__DOT__core_inst__DOT__ctrl_id 
            = (1U | (IData)(vlSelfRef.top__DOT__core_inst__DOT__ctrl_id));
        vlSelfRef.top__DOT__core_inst__DOT__ctrl_if 
            = (8U | (IData)(vlSelfRef.top__DOT__core_inst__DOT__ctrl_if));
        vlSelfRef.top__DOT__core_inst__DOT__ctrl_if 
            = (2U | (IData)(vlSelfRef.top__DOT__core_inst__DOT__ctrl_if));
    }
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[0U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[1U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[2U];
    vlSelfRef.top__DOT__core_inst__DOT__rs1_data = vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rs1_data;
    vlSelfRef.top__DOT__core_inst__DOT__rs2_data = vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rs2_data;
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_id_i 
        = vlSelfRef.top__DOT__core_inst__DOT__ctrl_id;
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i 
        = vlSelfRef.top__DOT__core_inst__DOT__ctrl_if;
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs1_data 
        = ((((0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[2U] 
                             >> 7U)) == (0x0000001fU 
                                         & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[3U] 
                                            >> 0x0000000fU))) 
            & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[0U] 
               >> 1U)) ? ((vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[2U] 
                           << 0x0000001eU) | (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[1U] 
                                              >> 2U))
            : ((((0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[2U] 
                                 >> 2U)) == (0x0000001fU 
                                             & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[3U] 
                                                >> 0x0000000fU))) 
                & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[0U])
                ? ((vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[1U] 
                    << 0x0000001eU) | (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[0U] 
                                       >> 2U)) : ((vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[3U] 
                                                   << 0x00000016U) 
                                                  | (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[2U] 
                                                     >> 0x0000000aU))));
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_a 
        = ((0x00000080U & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U])
            ? ((0x00000080U & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U])
                ? ((vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[5U] 
                    << 0x00000018U) | (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                                       >> 8U)) : vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs1_data)
            : vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs1_data);
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs1_data_i 
        = vlSelfRef.top__DOT__core_inst__DOT__rs1_data;
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs2_data_i 
        = vlSelfRef.top__DOT__core_inst__DOT__rs2_data;
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_we 
        = (1U & (~ ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i) 
                    >> 3U)));
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[0U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[2U];
    if ((4U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[0U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[1U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[2U] = 0U;
    } else if ((1U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[2U] = 0U;
    } else if ((1U & (~ ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i) 
                         >> 1U)))) {
        if (((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_valid_i) 
             & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_epoch_match))) {
            vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[0U] 
                = (IData)((((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_i)) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_issued_q))));
            vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[1U] 
                = (IData)(((((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_i)) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_issued_q))) 
                           >> 0x00000020U));
            vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[2U] = 1U;
        } else {
            vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[2U] = 0U;
        }
    }
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_ready_o 
        = (1U & (~ ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i) 
                    >> 1U)));
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__a_i 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_a;
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[0U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[1U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[2U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[3U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[3U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[4U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[5U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[5U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[6U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[6U];
    if ((4U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_id_i))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[0U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[1U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[2U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[3U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[4U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[5U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[6U] = 0U;
    } else if ((1U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_id_i))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[6U] 
            = (0x000000ffU & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[6U]);
    } else if ((1U & (~ ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_id_i) 
                         >> 1U)))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[3U] 
            = ((0x000003ffU & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[3U]) 
               | ((vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals 
                   << 0x00000014U) | (((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs1_addr_o) 
                                       << 0x0000000fU) 
                                      | ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs2_addr_o) 
                                         << 0x0000000aU))));
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[4U] 
            = (((0x00000300U & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[0U] 
                                << 8U)) | ((0x000003ffU 
                                            & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals 
                                               >> 0x0000000cU)) 
                                           | ((0x000003ffU 
                                               & ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs1_addr_o) 
                                                  >> 0x00000011U)) 
                                              | ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs2_addr_o) 
                                                 >> 0x00000016U)))) 
               | (0xfffffc00U & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[0U] 
                                 << 8U)));
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[5U] 
            = (((vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[0U] 
                 >> 0x00000018U) | (0x00000300U & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[1U] 
                                                   << 8U))) 
               | (0xfffffc00U & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[1U] 
                                 << 8U)));
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[6U] 
            = (0x000001ffU & ((vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[1U] 
                               >> 0x00000018U) | (0x00000300U 
                                                  & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[2U] 
                                                     << 8U))));
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[1U] 
            = (IData)((((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs2_data_i)) 
                        << 0x0000000aU) | (QData)((IData)(
                                                          ((0x000003e0U 
                                                            & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[1U] 
                                                               >> 2U)) 
                                                           | (0x0000001fU 
                                                              & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[1U] 
                                                                 >> 0x00000014U)))))));
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[2U] 
            = ((0xfffffc00U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[2U]) 
               | (IData)(((((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs2_data_i)) 
                            << 0x0000000aU) | (QData)((IData)(
                                                              ((0x000003e0U 
                                                                & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[1U] 
                                                                   >> 2U)) 
                                                               | (0x0000001fU 
                                                                  & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[1U] 
                                                                     >> 0x00000014U)))))) 
                          >> 0x00000020U)));
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[2U] 
            = ((0x000003ffU & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[2U]) 
               | (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs1_data_i 
                  << 0x0000000aU));
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[3U] 
            = ((0xfffffc00U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[3U]) 
               | (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs1_data_i 
                  >> 0x00000016U));
        vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr_type 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type;
        vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[1U];
        vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__Vfuncout 
            = ((4U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr_type))
                ? ((2U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr_type))
                    ? 0U : ((1U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr_type))
                             ? ((((0x00000ffeU & ((- (IData)(
                                                             (vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                                              >> 0x1fU))) 
                                                  << 1U)) 
                                  | (vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                     >> 0x1fU)) << 0x00000014U) 
                                | ((((0x000001feU & 
                                      (vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                       >> 0x0000000bU)) 
                                     | (1U & (vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                              >> 0x14U))) 
                                    << 0x0000000bU) 
                                   | (0x000007feU & 
                                      (vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                       >> 0x00000014U))))
                             : (0xfffff000U & vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr)))
                : ((2U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr_type))
                    ? ((1U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr_type))
                        ? (((- (IData)((vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                        >> 0x1fU))) 
                            << 0x0000000dU) | ((((2U 
                                                  & (vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                                     >> 0x0000001eU)) 
                                                 | (1U 
                                                    & (vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                                       >> 7U))) 
                                                << 0x0000000bU) 
                                               | ((0x000007e0U 
                                                   & (vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                                      >> 0x00000014U)) 
                                                  | (0x0000001eU 
                                                     & (vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                                        >> 7U)))))
                        : (((- (IData)((vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                        >> 0x1fU))) 
                            << 0x0000000cU) | ((0x00000fe0U 
                                                & (vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                                   >> 0x00000014U)) 
                                               | (0x0000001fU 
                                                  & (vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                                     >> 7U)))))
                    : ((1U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr_type))
                        ? (((- (IData)((vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                        >> 0x1fU))) 
                            << 0x0000000cU) | (vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                               >> 0x14U))
                        : 0U)));
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[0U] 
            = vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__Vfuncout;
    }
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__pc_we_i 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_we;
    vlSelfRef.top__DOT__core_inst__DOT__imem_rsp_ready_o 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_ready_o;
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_accepted 
        = ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_ready_o) 
           & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_valid_i));
    vlSelfRef.top__DOT__imem_rsp_ready = vlSelfRef.top__DOT__core_inst__DOT__imem_rsp_ready_o;
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_d 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_q;
    if (((~ (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_accepted)) 
         & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_accepted))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_d = 1U;
    } else if (((~ (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_accepted)) 
                & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_accepted))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_d = 0U;
    }
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_has_space 
        = (1U & ((~ (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_q)) 
                 | (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_accepted)));
    vlSelfRef.top__DOT__rom_inst__DOT__mem_rsp_ready_i 
        = vlSelfRef.top__DOT__imem_rsp_ready;
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_issue 
        = (IData)((((0U == (7U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i))) 
                    & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_has_space)) 
                   & ((~ (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_q)) 
                      | (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_accepted))));
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_d 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_q;
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_d 
        = ((~ (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_accepted)) 
           & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_q));
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_d[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_q[0U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_d[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_q[1U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_d[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_q[2U];
    if (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_issue) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_d 
            = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_q)));
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_d = 1U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_d[1U] 
            = (IData)((((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_epoch_q)) 
                        << 0x00000025U) | (((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_q)) 
                                            << 0x00000021U) 
                                           | (QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_next)))));
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_d[2U] 
            = (0x000001ffU & (IData)(((((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_epoch_q)) 
                                        << 0x00000025U) 
                                       | (((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_q)) 
                                           << 0x00000021U) 
                                          | (QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_next)))) 
                                      >> 0x00000020U)));
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_d[0U] = 0U;
    }
}

void Vtop___024root___ico_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__lt_o 
        = VL_LTS_III(32, vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__a_i, vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i);
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__ltu_o 
        = (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__a_i 
           < vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i);
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_lt 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__lt_o;
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_ltu 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__ltu_o;
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__q_o 
        = ((8U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__op_i))
            ? ((4U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__op_i))
                ? 0U : ((2U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__op_i))
                         ? ((1U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__op_i))
                             ? 0U : (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__a_i 
                                     & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i))
                         : ((1U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__op_i))
                             ? (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__a_i 
                                ^ vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i)
                             : (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__a_i 
                                | vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i))))
            : ((4U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__op_i))
                ? ((2U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__op_i))
                    ? (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__a_i 
                       >> (0x0000001fU & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i))
                    : ((1U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__op_i))
                        ? (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__a_i 
                           << (0x0000001fU & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i))
                        : ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__ltu_o)
                            ? 1U : 0U))) : ((2U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__op_i))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__op_i))
                                                 ? 
                                                ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__lt_o)
                                                  ? 1U
                                                  : 0U)
                                                 : 
                                                (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__a_i 
                                                 - vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i))
                                             : ((1U 
                                                 & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__op_i))
                                                 ? 
                                                (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__a_i 
                                                 + vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i)
                                                 : 0U))));
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_q 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__q_o;
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs2_data 
        = ((((0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[2U] 
                             >> 7U)) == (0x0000001fU 
                                         & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[3U] 
                                            >> 0x0000000aU))) 
            & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[0U] 
               >> 1U)) ? ((vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[2U] 
                           << 0x0000001eU) | (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[1U] 
                                              >> 2U))
            : ((((0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[2U] 
                                 >> 2U)) == (0x0000001fU 
                                             & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[3U] 
                                                >> 0x0000000aU))) 
                & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[0U])
                ? ((vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[1U] 
                    << 0x0000001eU) | (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[0U] 
                                       >> 2U)) : ((vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[2U] 
                                                   << 0x00000016U) 
                                                  | (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[1U] 
                                                     >> 0x0000000aU))));
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_b 
        = ((0U == (3U & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                         >> 5U))) ? vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs2_data
            : ((1U == (3U & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                             >> 5U))) ? vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[0U]
                : ((2U == (3U & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                                 >> 5U))) ? (0x0000001fU 
                                             & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[1U])
                    : vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs2_data)));
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_d[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[0U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_d[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[1U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_d[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[2U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_d[3U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[3U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_d[4U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[4U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_d[5U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[5U];
    if ((0x00001000U & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[2U])) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_d[5U] 
            = (0x01ffffffU & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_d[5U]);
    } else {
        vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_d[2U] 
            = (IData)((((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs2_data)) 
                        << 5U) | (QData)((IData)((0x0000001fU 
                                                  & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[1U] 
                                                     >> 5U))))));
        vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_d[3U] 
            = (((vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                 << 0x00000011U) | (0x0001ffe0U & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[3U] 
                                                   >> 0x0000000fU))) 
               | (IData)(((((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs2_data)) 
                            << 5U) | (QData)((IData)(
                                                     (0x0000001fU 
                                                      & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[1U] 
                                                         >> 5U))))) 
                          >> 0x00000020U)));
        vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_d[4U] 
            = ((0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                               >> 0x0000000fU)) | (
                                                   (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[5U] 
                                                    << 0x00000011U) 
                                                   | (0x0001ffe0U 
                                                      & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                                                         >> 0x0000000fU))));
        vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_d[5U] 
            = (0x03ffffffU & ((0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[5U] 
                                              >> 0x0000000fU)) 
                              | (0x03ffffe0U & ((vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[6U] 
                                                 << 0x00000011U) 
                                                | (0x0001ffe0U 
                                                   & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[5U] 
                                                      >> 0x0000000fU))))));
        vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_d[0U] 
            = (IData)((((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[0U])) 
                        << 0x00000020U) | (QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_q))));
        vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_d[1U] 
            = (IData)(((((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[0U])) 
                         << 0x00000020U) | (QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_q))) 
                       >> 0x00000020U));
    }
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_b;
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__eq_o 
        = (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__a_i 
           == vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i);
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_eq 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__eq_o;
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_d 
        = ((1U & (IData)((vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_q 
                          >> 0x00000020U))) ? (0x00000000ffffffffULL 
                                               & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_d)
            : ((1U & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U])
                ? ((vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[3U] 
                    >> 0x0000001fU) ? 0ULL : ((0x40000000U 
                                               & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[3U])
                                               ? 0ULL
                                               : ((0x20000000U 
                                                   & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[3U])
                                                   ? 0ULL
                                                   : 
                                                  (((QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[6U] 
                                                                        >> 8U)))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_q))))))
                : ((vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[3U] 
                    >> 0x0000001fU) ? ((0x40000000U 
                                        & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[3U])
                                        ? ((0x20000000U 
                                            & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[3U])
                                            ? (((QData)((IData)(
                                                                (1U 
                                                                 & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[6U] 
                                                                    >> 8U)))) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_q)))
                                            : (((QData)((IData)(
                                                                ((~ (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_ltu)) 
                                                                 & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[6U] 
                                                                    >> 8U)))) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(
                                                                 (((vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[5U] 
                                                                    << 0x00000018U) 
                                                                   | (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                                                                      >> 8U)) 
                                                                  + vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[0U])))))
                                        : ((0x20000000U 
                                            & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[3U])
                                            ? (((QData)((IData)(
                                                                ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_ltu) 
                                                                 & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[6U] 
                                                                    >> 8U)))) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(
                                                                 (((vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[5U] 
                                                                    << 0x00000018U) 
                                                                   | (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                                                                      >> 8U)) 
                                                                  + vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[0U]))))
                                            : (((QData)((IData)(
                                                                ((~ (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_lt)) 
                                                                 & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[6U] 
                                                                    >> 8U)))) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(
                                                                 (((vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[5U] 
                                                                    << 0x00000018U) 
                                                                   | (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                                                                      >> 8U)) 
                                                                  + vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[0U]))))))
                    : ((0x40000000U & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[3U])
                        ? ((0x20000000U & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[3U])
                            ? (((QData)((IData)(((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_lt) 
                                                 & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[6U] 
                                                    >> 8U)))) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  (((vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[5U] 
                                                                     << 0x00000018U) 
                                                                    | (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                                                                       >> 8U)) 
                                                                   + vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[0U]))))
                            : (((QData)((IData)(((~ (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_eq)) 
                                                 & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[6U] 
                                                    >> 8U)))) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  (((vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[5U] 
                                                                     << 0x00000018U) 
                                                                    | (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                                                                       >> 8U)) 
                                                                   + vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[0U])))))
                        : ((0x20000000U & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[3U])
                            ? (((QData)((IData)(((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_eq) 
                                                 & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[6U] 
                                                    >> 8U)))) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  (((vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[5U] 
                                                                     << 0x00000018U) 
                                                                    | (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                                                                       >> 8U)) 
                                                                   + vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[0U]))))
                            : 0ULL)))));
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[1U])) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & (vlSelfRef.__VicoTriggered[1U] | vlSelfRef.__VicoTriggered[0U]))) {
        Vtop___024root___ico_comb__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vtop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_triggers_vec__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers_vec__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((((IData)(vlSelfRef.top__DOT__rom_inst__DOT__clk_i) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__rom_inst__DOT__clk_i__0))) 
                                                         << 6U) 
                                                        | ((((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__clk_i) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__clk_i__0))) 
                                                            << 5U) 
                                                           | (((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__rst_i) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_mem_inst__DOT__rst_i__0))) 
                                                              << 4U))) 
                                                       | (((((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__clk_i) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_mem_inst__DOT__clk_i__0))) 
                                                            << 3U) 
                                                           | (((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rst_i) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_id_inst__DOT__rst_i__0))) 
                                                              << 2U)) 
                                                          | ((((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__clk_i) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_id_inst__DOT__clk_i__0))) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__rst_i) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__rst_i__0)))))) 
                                                      << 8U) 
                                                     | (((((((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__clk_i) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__clk_i__0))) 
                                                            << 3U) 
                                                           | (((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__rst_i) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_if_inst__DOT__rst_i__0))) 
                                                              << 2U)) 
                                                          | ((((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__clk_i) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_if_inst__DOT__clk_i__0))) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rst_i) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__regfile_inst__DOT__rst_i__0))))) 
                                                         << 4U) 
                                                        | (((((IData)(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__clk_i) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__regfile_inst__DOT__clk_i__0))) 
                                                             << 3U) 
                                                            | ((vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i 
                                                                != vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i__1) 
                                                               << 2U)) 
                                                           | ((((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__rst_i) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_ex_inst__DOT__rst_i__0))) 
                                                               << 1U) 
                                                              | ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__clk_i) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_ex_inst__DOT__clk_i__0)))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_ex_inst__DOT__clk_i__0 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_ex_inst__DOT__rst_i__0 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__rst_i;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i__1 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__regfile_inst__DOT__clk_i__0 
        = vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__regfile_inst__DOT__rst_i__0 
        = vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rst_i;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_if_inst__DOT__clk_i__0 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_if_inst__DOT__rst_i__0 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__rst_i;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__clk_i__0 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__rst_i__0 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__rst_i;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_id_inst__DOT__clk_i__0 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_id_inst__DOT__rst_i__0 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rst_i;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_mem_inst__DOT__clk_i__0 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_mem_inst__DOT__rst_i__0 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__rst_i;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__clk_i__0 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__rom_inst__DOT__clk_i__0 
        = vlSelfRef.top__DOT__rom_inst__DOT__clk_i;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered[0U]);
    }
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___act_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__rst_i)))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_q 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_d;
    }
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_o 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_q;
    vlSelfRef.top__DOT__core_inst__DOT__pc_redirect 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_o;
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_i 
        = vlSelfRef.top__DOT__core_inst__DOT__pc_redirect;
    vlSelfRef.top__DOT__core_inst__DOT__ctrl_id = 0U;
    vlSelfRef.top__DOT__core_inst__DOT__ctrl_if = (0x0bU 
                                                   & (IData)(vlSelfRef.top__DOT__core_inst__DOT__ctrl_if));
    vlSelfRef.top__DOT__core_inst__DOT__ctrl_if = (0x0eU 
                                                   & (IData)(vlSelfRef.top__DOT__core_inst__DOT__ctrl_if));
    vlSelfRef.top__DOT__core_inst__DOT__ctrl_if = (7U 
                                                   & (IData)(vlSelfRef.top__DOT__core_inst__DOT__ctrl_if));
    vlSelfRef.top__DOT__core_inst__DOT__ctrl_if = (0x0dU 
                                                   & (IData)(vlSelfRef.top__DOT__core_inst__DOT__ctrl_if));
    if ((1U & (IData)((vlSelfRef.top__DOT__core_inst__DOT__pc_redirect 
                       >> 0x00000020U)))) {
        vlSelfRef.top__DOT__core_inst__DOT__ctrl_id 
            = (4U | (IData)(vlSelfRef.top__DOT__core_inst__DOT__ctrl_id));
    }
    if (vlSelfRef.top__DOT__core_inst__DOT__info_id) {
        vlSelfRef.top__DOT__core_inst__DOT__ctrl_id 
            = (1U | (IData)(vlSelfRef.top__DOT__core_inst__DOT__ctrl_id));
    }
    if ((1U & (IData)((vlSelfRef.top__DOT__core_inst__DOT__pc_redirect 
                       >> 0x00000020U)))) {
        vlSelfRef.top__DOT__core_inst__DOT__ctrl_if 
            = (4U | (IData)(vlSelfRef.top__DOT__core_inst__DOT__ctrl_if));
    }
    if (vlSelfRef.top__DOT__core_inst__DOT__info_id) {
        vlSelfRef.top__DOT__core_inst__DOT__ctrl_if 
            = (8U | (IData)(vlSelfRef.top__DOT__core_inst__DOT__ctrl_if));
        vlSelfRef.top__DOT__core_inst__DOT__ctrl_if 
            = (2U | (IData)(vlSelfRef.top__DOT__core_inst__DOT__ctrl_if));
    }
    vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[2U] 
        = (0x00000fffU & vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[2U]);
    if ((1U & (IData)((vlSelfRef.top__DOT__core_inst__DOT__pc_redirect 
                       >> 0x00000020U)))) {
        vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[2U] 
            = (0x00001000U | vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[2U]);
    }
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_next 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_q;
    if ((1U & (IData)((vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_i 
                       >> 0x00000020U)))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_next 
            = (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_i);
    } else if ((1U & (IData)((vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_pending_q 
                              >> 0x00000020U)))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_next 
            = (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_pending_q);
    } else if (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_accepted) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_next 
            = ((IData)(4U) + vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_q);
    }
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_id_i 
        = vlSelfRef.top__DOT__core_inst__DOT__ctrl_id;
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i 
        = vlSelfRef.top__DOT__core_inst__DOT__ctrl_if;
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[0U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[1U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[2U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__pc_next_i 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_next;
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[0U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[1U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[2U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[3U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[3U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[4U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[5U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[5U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[6U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[6U];
    if ((4U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_id_i))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[0U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[1U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[2U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[3U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[4U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[5U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[6U] = 0U;
    } else if ((1U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_id_i))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[6U] 
            = (0x000000ffU & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[6U]);
    } else if ((1U & (~ ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_id_i) 
                         >> 1U)))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[3U] 
            = ((0x000003ffU & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[3U]) 
               | ((vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals 
                   << 0x00000014U) | (((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs1_addr_o) 
                                       << 0x0000000fU) 
                                      | ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs2_addr_o) 
                                         << 0x0000000aU))));
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[4U] 
            = (((0x00000300U & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[0U] 
                                << 8U)) | ((0x000003ffU 
                                            & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals 
                                               >> 0x0000000cU)) 
                                           | ((0x000003ffU 
                                               & ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs1_addr_o) 
                                                  >> 0x00000011U)) 
                                              | ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs2_addr_o) 
                                                 >> 0x00000016U)))) 
               | (0xfffffc00U & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[0U] 
                                 << 8U)));
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[5U] 
            = (((vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[0U] 
                 >> 0x00000018U) | (0x00000300U & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[1U] 
                                                   << 8U))) 
               | (0xfffffc00U & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[1U] 
                                 << 8U)));
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[6U] 
            = (0x000001ffU & ((vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[1U] 
                               >> 0x00000018U) | (0x00000300U 
                                                  & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[2U] 
                                                     << 8U))));
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[1U] 
            = (IData)((((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs2_data_i)) 
                        << 0x0000000aU) | (QData)((IData)(
                                                          ((0x000003e0U 
                                                            & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[1U] 
                                                               >> 2U)) 
                                                           | (0x0000001fU 
                                                              & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[1U] 
                                                                 >> 0x00000014U)))))));
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[2U] 
            = ((0xfffffc00U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[2U]) 
               | (IData)(((((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs2_data_i)) 
                            << 0x0000000aU) | (QData)((IData)(
                                                              ((0x000003e0U 
                                                                & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[1U] 
                                                                   >> 2U)) 
                                                               | (0x0000001fU 
                                                                  & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[1U] 
                                                                     >> 0x00000014U)))))) 
                          >> 0x00000020U)));
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[2U] 
            = ((0x000003ffU & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[2U]) 
               | (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs1_data_i 
                  << 0x0000000aU));
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[3U] 
            = ((0xfffffc00U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[3U]) 
               | (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs1_data_i 
                  >> 0x00000016U));
        vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr_type 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type;
        vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[1U];
        vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__Vfuncout 
            = ((4U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr_type))
                ? ((2U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr_type))
                    ? 0U : ((1U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr_type))
                             ? ((((0x00000ffeU & ((- (IData)(
                                                             (vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                                              >> 0x1fU))) 
                                                  << 1U)) 
                                  | (vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                     >> 0x1fU)) << 0x00000014U) 
                                | ((((0x000001feU & 
                                      (vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                       >> 0x0000000bU)) 
                                     | (1U & (vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                              >> 0x14U))) 
                                    << 0x0000000bU) 
                                   | (0x000007feU & 
                                      (vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                       >> 0x00000014U))))
                             : (0xfffff000U & vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr)))
                : ((2U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr_type))
                    ? ((1U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr_type))
                        ? (((- (IData)((vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                        >> 0x1fU))) 
                            << 0x0000000dU) | ((((2U 
                                                  & (vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                                     >> 0x0000001eU)) 
                                                 | (1U 
                                                    & (vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                                       >> 7U))) 
                                                << 0x0000000bU) 
                                               | ((0x000007e0U 
                                                   & (vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                                      >> 0x00000014U)) 
                                                  | (0x0000001eU 
                                                     & (vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                                        >> 7U)))))
                        : (((- (IData)((vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                        >> 0x1fU))) 
                            << 0x0000000cU) | ((0x00000fe0U 
                                                & (vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                                   >> 0x00000014U)) 
                                               | (0x0000001fU 
                                                  & (vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                                     >> 7U)))))
                    : ((1U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr_type))
                        ? (((- (IData)((vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                        >> 0x1fU))) 
                            << 0x0000000cU) | (vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                               >> 0x14U))
                        : 0U)));
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[0U] 
            = vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__Vfuncout;
    }
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_we 
        = (1U & (~ ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i) 
                    >> 3U)));
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[0U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[2U];
    if ((4U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[0U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[1U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[2U] = 0U;
    } else if ((1U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[2U] = 0U;
    } else if ((1U & (~ ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i) 
                         >> 1U)))) {
        if (((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_valid_i) 
             & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_epoch_match))) {
            vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[0U] 
                = (IData)((((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_i)) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_issued_q))));
            vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[1U] 
                = (IData)(((((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_i)) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_issued_q))) 
                           >> 0x00000020U));
            vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[2U] = 1U;
        } else {
            vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[2U] = 0U;
        }
    }
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_ready_o 
        = (1U & (~ ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i) 
                    >> 1U)));
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs1_data 
        = ((((0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[2U] 
                             >> 7U)) == (0x0000001fU 
                                         & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[3U] 
                                            >> 0x0000000fU))) 
            & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[0U] 
               >> 1U)) ? ((vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[2U] 
                           << 0x0000001eU) | (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[1U] 
                                              >> 2U))
            : ((((0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[2U] 
                                 >> 2U)) == (0x0000001fU 
                                             & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[3U] 
                                                >> 0x0000000fU))) 
                & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[0U])
                ? ((vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[1U] 
                    << 0x0000001eU) | (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[0U] 
                                       >> 2U)) : ((vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[3U] 
                                                   << 0x00000016U) 
                                                  | (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[2U] 
                                                     >> 0x0000000aU))));
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_a 
        = ((0x00000080U & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U])
            ? ((0x00000080U & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U])
                ? ((vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[5U] 
                    << 0x00000018U) | (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                                       >> 8U)) : vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs1_data)
            : vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs1_data);
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__pc_we_i 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_we;
    vlSelfRef.top__DOT__core_inst__DOT__imem_rsp_ready_o 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_ready_o;
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_accepted 
        = ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_ready_o) 
           & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_valid_i));
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__a_i 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_a;
    vlSelfRef.top__DOT__imem_rsp_ready = vlSelfRef.top__DOT__core_inst__DOT__imem_rsp_ready_o;
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_d 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_q;
    if (((~ (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_accepted)) 
         & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_accepted))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_d = 1U;
    } else if (((~ (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_accepted)) 
                & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_accepted))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_d = 0U;
    }
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_has_space 
        = (1U & ((~ (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_q)) 
                 | (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_accepted)));
    vlSelfRef.top__DOT__rom_inst__DOT__mem_rsp_ready_i 
        = vlSelfRef.top__DOT__imem_rsp_ready;
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_issue 
        = (IData)((((0U == (7U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i))) 
                    & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_has_space)) 
                   & ((~ (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_q)) 
                      | (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_accepted))));
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_d 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_q;
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_d 
        = ((~ (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_accepted)) 
           & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_q));
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_d[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_q[0U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_d[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_q[1U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_d[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_q[2U];
    if (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_issue) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_d 
            = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_q)));
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_d = 1U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_d[1U] 
            = (IData)((((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_epoch_q)) 
                        << 0x00000025U) | (((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_q)) 
                                            << 0x00000021U) 
                                           | (QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_next)))));
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_d[2U] 
            = (0x000001ffU & (IData)(((((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_epoch_q)) 
                                        << 0x00000025U) 
                                       | (((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_q)) 
                                           << 0x00000021U) 
                                          | (QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_next)))) 
                                      >> 0x00000020U)));
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_d[0U] = 0U;
    }
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtop___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtop___024root___ico_comb__TOP__0(vlSelf);
    }
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__mem__v0;
    __VdlyVal__top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__mem__v0 = 0;
    SData/*15:0*/ __VdlyDim0__top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__mem__v0;
    __VdlyDim0__top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__mem__v0;
    __VdlySet__top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__mem__v0 = 0;
    // Body
    __VdlySet__top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__mem__v0 = 0U;
    if (vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__we_i) {
        __VdlyVal__top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__mem__v0 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__data_i;
        __VdlyDim0__top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__mem__v0 
            = (0x0000ffffU & ((vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__addr_i 
                               - (IData)(0x00040000U)) 
                              >> 2U));
        __VdlySet__top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__mem__v0 = 1U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__data_o 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__data_i;
    } else {
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__data_o 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__mem
            [(0x0000ffffU & ((vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__addr_i 
                              - (IData)(0x00040000U)) 
                             >> 2U))];
    }
    if (__VdlySet__top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__mem__v0) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__mem[__VdlyDim0__top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__mem__v0] 
            = __VdlyVal__top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__mem__v0;
    }
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__data_out 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__data_o;
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*32:0*/ __Vdly__top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_pending_q;
    __Vdly__top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_pending_q = 0;
    CData/*3:0*/ __Vdly__top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_epoch_q;
    __Vdly__top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_epoch_q = 0;
    // Body
    __Vdly__top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_pending_q 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_pending_q;
    __Vdly__top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_epoch_q 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_epoch_q;
    if (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__rst_i) {
        __Vdly__top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_pending_q = 0ULL;
        __Vdly__top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_epoch_q = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_q = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_q[0U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_q[1U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_q[2U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_issued_q = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[0U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[2U] = 0U;
    } else {
        if ((1U & (IData)((vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_i 
                           >> 0x00000020U)))) {
            if (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_we) {
                __Vdly__top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_pending_q 
                    = (0x00000000ffffffffULL & __Vdly__top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_pending_q);
            } else {
                __Vdly__top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_pending_q 
                    = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_i;
            }
            __Vdly__top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_epoch_q 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_epoch_q)));
        } else if (((IData)((vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_pending_q 
                             >> 0x00000020U)) & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_we))) {
            __Vdly__top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_pending_q 
                = (0x00000000ffffffffULL & __Vdly__top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_pending_q);
        }
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_q 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_d;
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_q[0U] 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_d[0U];
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_q[1U] 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_d[1U];
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_q[2U] 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_d[2U];
        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i) 
                      >> 3U)))) {
            vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_issued_q 
                = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_q;
        }
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[0U] 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[0U];
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[1U];
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[2U] 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[2U];
    }
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_q 
        = ((1U & (~ (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__rst_i))) 
           && (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_d));
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_q 
        = ((1U & (~ (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__rst_i))) 
           && (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_d));
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_pending_q 
        = __Vdly__top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_pending_q;
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_epoch_q 
        = __Vdly__top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_epoch_q;
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_o[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_q[0U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_o[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_q[1U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_o[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_q[2U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__info_if_o 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_q;
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_o 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_q;
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_o[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[0U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_o[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_o[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[2U];
    vlSelfRef.top__DOT__core_inst__DOT__imem_req_o[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_o[0U];
    vlSelfRef.top__DOT__core_inst__DOT__imem_req_o[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_o[1U];
    vlSelfRef.top__DOT__core_inst__DOT__imem_req_o[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_o[2U];
    vlSelfRef.top__DOT__core_inst__DOT__info_if = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__info_if_o;
    vlSelfRef.top__DOT__core_inst__DOT__imem_req_valid_o 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_o;
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_accepted 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_o;
    vlSelfRef.top__DOT__core_inst__DOT__if_id[0U] = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_o[0U];
    vlSelfRef.top__DOT__core_inst__DOT__if_id[1U] = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_o[1U];
    vlSelfRef.top__DOT__core_inst__DOT__if_id[2U] = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_o[2U];
    vlSelfRef.top__DOT__imem_req[0U] = vlSelfRef.top__DOT__core_inst__DOT__imem_req_o[0U];
    vlSelfRef.top__DOT__imem_req[1U] = vlSelfRef.top__DOT__core_inst__DOT__imem_req_o[1U];
    vlSelfRef.top__DOT__imem_req[2U] = vlSelfRef.top__DOT__core_inst__DOT__imem_req_o[2U];
    vlSelfRef.top__DOT__imem_req_valid = vlSelfRef.top__DOT__core_inst__DOT__imem_req_valid_o;
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__if_id[0U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__if_id[1U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__if_id[2U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__funct3_i 
        = (7U & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[1U] 
                 >> 0x0000000cU));
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__funct7_i 
        = (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[1U] 
           >> 0x00000019U);
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i 
        = (0x0000007fU & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[1U]);
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs1_addr_o 
        = (0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[1U] 
                          >> 0x0000000fU));
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs2_addr_o 
        = (0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[1U] 
                          >> 0x00000014U));
    if ((0x00000040U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
        if ((0x00000020U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
            if ((0x00000010U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                if ((8U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
                } else if ((4U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
                } else if ((2U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 1U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 0U;
                    } else {
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
                    }
                } else {
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
                }
            } else if ((8U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                if ((4U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0x000a2e0eU;
                            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 5U;
                            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 0U;
                        } else {
                            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
                        }
                    } else {
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
                    }
                } else {
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
                }
            } else if ((4U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0x0002300eU;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 1U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 0U;
                    } else {
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
                    }
                } else {
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o 
                        = (0x00001fffU & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o);
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 3U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 0U;
                    vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_branch_op__1__funct3 
                        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__funct3_i;
                    vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_branch_op__1__Vfuncout 
                        = ((4U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_branch_op__1__funct3))
                            ? ((2U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_branch_op__1__funct3))
                                ? ((1U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_branch_op__1__funct3))
                                    ? 6U : 5U) : ((1U 
                                                   & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_branch_op__1__funct3))
                                                   ? 4U
                                                   : 3U))
                            : ((2U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_branch_op__1__funct3))
                                ? 0U : ((1U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_branch_op__1__funct3))
                                         ? 2U : 1U)));
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o 
                        = ((0x000fe000U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o) 
                           | ((IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_branch_op__1__Vfuncout) 
                              << 9U));
                } else {
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
                }
            } else {
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
            }
        } else {
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
        if ((0x00000010U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
            if ((8U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
            } else if ((4U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 6U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 4U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 0U;
                    } else {
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
                    }
                } else {
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o 
                        = (0x0001ffffU & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o);
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 0U;
                    vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op__2__funct7 
                        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__funct7_i;
                    vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op__2__funct3 
                        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__funct3_i;
                    vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op__2__Vfuncout 
                        = ((4U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op__2__funct3))
                            ? ((2U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op__2__funct3))
                                ? ((1U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op__2__funct3))
                                    ? 0x0aU : 8U) : 
                               ((1U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op__2__funct3))
                                 ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op__2__funct7))
                                     ? 7U : 6U) : 9U))
                            : ((2U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op__2__funct3))
                                ? ((1U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op__2__funct3))
                                    ? 4U : 3U) : ((1U 
                                                   & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op__2__funct3))
                                                   ? 5U
                                                   : 
                                                  ((0x00000020U 
                                                    & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op__2__funct7))
                                                    ? 2U
                                                    : 1U))));
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o 
                        = ((0x000e0000U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o) 
                           | (2U | ((IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op__2__Vfuncout) 
                                    << 0x0000000dU)));
                } else {
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
                }
            } else {
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
            }
        } else if ((8U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
        } else if ((4U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
        } else if ((2U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o 
                    = (0x00022000U | (0x000001ffU & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o));
                vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__funct3 
                    = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__funct3_i;
                {
                    vlSelf->__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__Vfuncout = 0;
                    if ((0U == (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__funct3))) {
                        vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__Vfuncout = 1U;
                        goto __Vlabel0;
                    } else if ((1U == (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__funct3))) {
                        vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__Vfuncout = 2U;
                        goto __Vlabel0;
                    } else if ((2U == (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__funct3))) {
                        vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__Vfuncout = 3U;
                        goto __Vlabel0;
                    } else {
                        vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__Vfuncout = 0U;
                        goto __Vlabel0;
                    }
                    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                          (((2U 
                                                             == (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__funct3)) 
                                                            << 2U) 
                                                           | (((1U 
                                                                == (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__funct3)) 
                                                               << 1U) 
                                                              | (0U 
                                                                 == (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__funct3)))))))))) {
                        if ((0U != (((2U == (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__funct3)) 
                                     << 2U) | (((1U 
                                                 == (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__funct3)) 
                                                << 1U) 
                                               | (0U 
                                                  == (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__funct3)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: control_unit.sv:64: Assertion failed in %Ntop.core_inst.stage_id_inst.control_unit_inst.decode_store_op: unique case, but multiple matches found for '3'h%x'\n",0,
                                             64,VL_TIME_UNITED_Q(1),
                                             -12,vlSymsp->name(),
                                             3,(IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__funct3));
                                VL_STOP_MT("../../rtl/pkg/../../rtl/control_unit.sv", 64, "");
                            }
                        }
                    }
                    __Vlabel0: ;
                }
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o 
                    = ((0x000ffe00U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o) 
                       | (1U | ((IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__Vfuncout) 
                                << 7U)));
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 2U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 0U;
            } else {
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
            }
        } else {
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
        if ((8U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
        } else if ((4U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0x000a2002U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 4U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 0U;
                } else {
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
                }
            } else {
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o 
                    = (0x00020000U | (0x0001ffffU & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o));
                vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op_imm__4__funct7 
                    = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__funct7_i;
                vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op_imm__4__funct3 
                    = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__funct3_i;
                vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op_imm__4__Vfuncout 
                    = ((4U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op_imm__4__funct3))
                        ? ((2U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op_imm__4__funct3))
                            ? ((1U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op_imm__4__funct3))
                                ? 0x0aU : 8U) : ((1U 
                                                  & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op_imm__4__funct3))
                                                  ? 
                                                 ((0x00000020U 
                                                   & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op_imm__4__funct7))
                                                   ? 7U
                                                   : 6U)
                                                  : 9U))
                        : ((2U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op_imm__4__funct3))
                            ? ((1U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op_imm__4__funct3))
                                ? 4U : 3U) : ((1U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op_imm__4__funct3))
                                               ? 5U
                                               : 1U)));
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o 
                    = ((0x000e0000U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o) 
                       | (2U | ((IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op_imm__4__Vfuncout) 
                                << 0x0000000dU)));
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 1U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 0U;
            } else {
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
            }
        } else {
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
        }
    } else if ((8U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
    } else if ((4U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
    } else if ((2U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
        if ((1U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i))) {
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o 
                = (0x00022000U | (0x0000007fU & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o));
            vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_load_op__5__funct3 
                = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__funct3_i;
            vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_load_op__5__Vfuncout 
                = ((4U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_load_op__5__funct3))
                    ? ((2U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_load_op__5__funct3))
                        ? 0U : ((1U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_load_op__5__funct3))
                                 ? 0U : 4U)) : ((2U 
                                                 & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_load_op__5__funct3))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_load_op__5__funct3))
                                                  ? 2U
                                                  : 5U)
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_load_op__5__funct3))
                                                  ? 3U
                                                  : 1U)));
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o 
                = ((0x000fff80U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o) 
                   | (0x0aU | ((IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_load_op__5__Vfuncout) 
                               << 4U)));
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 1U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 0U;
        } else {
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
        }
    } else {
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = 6U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = 1U;
    }
    vlSelfRef.top__DOT__core_inst__DOT__rs1_addr = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs1_addr_o;
    vlSelfRef.top__DOT__core_inst__DOT__rs2_addr = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs2_addr_o;
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o;
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o;
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o;
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o;
    vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rs1_addr_i 
        = vlSelfRef.top__DOT__core_inst__DOT__rs1_addr;
    vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rs2_addr_i 
        = vlSelfRef.top__DOT__core_inst__DOT__rs2_addr;
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__rst_i) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__pc_o = 0U;
    } else if (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__pc_we_i) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__pc_o 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__pc_next_i;
    }
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_q 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__pc_o;
}

void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__rom_inst__DOT__mem_rsp_o = 
        (((QData)((IData)((0x000000ffU & (vlSelfRef.top__DOT__rom_inst__DOT__mem_req_i[2U] 
                                          >> 1U)))) 
          << 0x00000021U) | (QData)((IData)(vlSelfRef.top__DOT__rom_inst__DOT__mem
                                            [(0x0000ffffU 
                                              & (vlSelfRef.top__DOT__rom_inst__DOT__mem_req_i[1U] 
                                                 >> 2U))])));
    vlSelfRef.top__DOT__rom_inst__DOT__mem_rsp_valid_o 
        = vlSelfRef.top__DOT__rom_inst__DOT__mem_req_valid_i;
    vlSelfRef.top__DOT__imem_rsp = vlSelfRef.top__DOT__rom_inst__DOT__mem_rsp_o;
    vlSelfRef.top__DOT__imem_rsp_valid = vlSelfRef.top__DOT__rom_inst__DOT__mem_rsp_valid_o;
    vlSelfRef.top__DOT__core_inst__DOT__imem_rsp_i 
        = vlSelfRef.top__DOT__imem_rsp;
    vlSelfRef.top__DOT__core_inst__DOT__imem_rsp_valid_i 
        = vlSelfRef.top__DOT__imem_rsp_valid;
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_i 
        = vlSelfRef.top__DOT__core_inst__DOT__imem_rsp_i;
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_valid_i 
        = vlSelfRef.top__DOT__core_inst__DOT__imem_rsp_valid_i;
}

void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __VdlyDim0__top__DOT__core_inst__DOT__regfile_inst__DOT__regs__v0;
    __VdlyDim0__top__DOT__core_inst__DOT__regfile_inst__DOT__regs__v0 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__core_inst__DOT__regfile_inst__DOT__regs__v1;
    __VdlyVal__top__DOT__core_inst__DOT__regfile_inst__DOT__regs__v1 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__core_inst__DOT__regfile_inst__DOT__regs__v1;
    __VdlyDim0__top__DOT__core_inst__DOT__regfile_inst__DOT__regs__v1 = 0;
    // Body
    if (vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rst_i) {
        vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000020U, vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__unnamedblk1__DOT__i)) {
            __VdlyDim0__top__DOT__core_inst__DOT__regfile_inst__DOT__regs__v0 
                = (0x0000001fU & vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__unnamedblk1__DOT__i);
            vlSelfRef.__VdlyCommitQueuetop__DOT__core_inst__DOT__regfile_inst__DOT__regs.enqueue(0U, (IData)(__VdlyDim0__top__DOT__core_inst__DOT__regfile_inst__DOT__regs__v0));
            vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__unnamedblk1__DOT__i);
        }
    } else if (((IData)(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rd_we_i) 
                & (0U != (IData)(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rd_addr_i)))) {
        __VdlyVal__top__DOT__core_inst__DOT__regfile_inst__DOT__regs__v1 
            = vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rd_data_i;
        __VdlyDim0__top__DOT__core_inst__DOT__regfile_inst__DOT__regs__v1 
            = vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rd_addr_i;
        vlSelfRef.__VdlyCommitQueuetop__DOT__core_inst__DOT__regfile_inst__DOT__regs.enqueue(__VdlyVal__top__DOT__core_inst__DOT__regfile_inst__DOT__regs__v1, (IData)(__VdlyDim0__top__DOT__core_inst__DOT__regfile_inst__DOT__regs__v1));
    }
    vlSelfRef.__VdlyCommitQueuetop__DOT__core_inst__DOT__regfile_inst__DOT__regs.commit(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs);
}

void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*32:0*/ __Vdly__top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_q;
    __Vdly__top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_q = 0;
    QData/*32:0*/ __VdlyMask__top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_q;
    __VdlyMask__top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_q = 0;
    // Body
    if (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__rst_i) {
        __Vdly__top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_q = 0ULL;
        __VdlyMask__top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_q = 0x00000001ffffffffULL;
        vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[0U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[1U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[2U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[3U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[4U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[5U] = 0U;
    } else {
        vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[0U] 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_d[0U];
        vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[1U] 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_d[1U];
        vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[2U] 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_d[2U];
        vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[3U] 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_d[3U];
        vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[4U] 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_d[4U];
        vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[5U] 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_d[5U];
    }
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_q 
        = ((__Vdly__top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_q 
            & __VdlyMask__top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_q) 
           | (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_q 
              & (~ __VdlyMask__top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_q)));
    __VdlyMask__top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_q = 0ULL;
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_o 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_q;
    vlSelfRef.top__DOT__core_inst__DOT__pc_redirect 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_o;
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_o[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[0U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_o[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[1U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_o[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[2U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_o[3U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[3U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_o[4U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[4U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_o[5U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[5U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_i 
        = vlSelfRef.top__DOT__core_inst__DOT__pc_redirect;
    vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[2U] 
        = (0x00000fffU & vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[2U]);
    if ((1U & (IData)((vlSelfRef.top__DOT__core_inst__DOT__pc_redirect 
                       >> 0x00000020U)))) {
        vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[2U] 
            = (0x00001000U | vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[2U]);
    }
    vlSelfRef.top__DOT__core_inst__DOT__ex_mem[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_o[0U];
    vlSelfRef.top__DOT__core_inst__DOT__ex_mem[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_o[1U];
    vlSelfRef.top__DOT__core_inst__DOT__ex_mem[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_o[2U];
    vlSelfRef.top__DOT__core_inst__DOT__ex_mem[3U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_o[3U];
    vlSelfRef.top__DOT__core_inst__DOT__ex_mem[4U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_o[4U];
    vlSelfRef.top__DOT__core_inst__DOT__ex_mem[5U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_o[5U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__ex_mem[0U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__ex_mem[1U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__ex_mem[2U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[3U] 
        = vlSelfRef.top__DOT__core_inst__DOT__ex_mem[3U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[4U] 
        = vlSelfRef.top__DOT__core_inst__DOT__ex_mem[4U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[5U] 
        = vlSelfRef.top__DOT__core_inst__DOT__ex_mem[5U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__addr_i 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[0U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__data_in 
        = ((0x00002000U & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[3U])
            ? ((0x00001000U & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[3U])
                ? ((vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[3U] 
                    << 0x0000001bU) | (vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[2U] 
                                       >> 5U)) : (0x0000ffffU 
                                                  & (vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[2U] 
                                                     >> 5U)))
            : ((0x00001000U & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[3U])
                ? (0x000000ffU & (vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[2U] 
                                  >> 5U)) : 0U));
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_we 
        = ((vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[3U] 
            >> 5U) & (vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[5U] 
                      >> 0x00000019U));
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__info_mem_o 
        = ((0x00000020ffffffffULL & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__info_mem_o) 
           | ((QData)((IData)((0x0000001fU & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[2U]))) 
              << 0x00000020U));
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__info_mem_o 
        = ((0x0000003f00000000ULL & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__info_mem_o) 
           | (IData)((IData)(((0x00000100U & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[3U])
                               ? ((0x00000080U & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[3U])
                                   ? ((vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[4U] 
                                       << 7U) | (vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[3U] 
                                                 >> 0x00000019U))
                                   : 0U) : ((0x00000080U 
                                             & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[3U])
                                             ? vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[1U]
                                             : vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[0U])))));
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__info_mem_o 
        = ((0x0000001fffffffffULL & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__info_mem_o) 
           | ((QData)((IData)((1U & (vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[5U] 
                                     >> 0x00000019U)))) 
              << 0x00000025U));
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__data_i 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__data_in;
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__we_i 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_we;
    vlSelfRef.top__DOT__core_inst__DOT__info_mem = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__info_mem_o;
    vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[2U] 
        = ((0x0000107fU & vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[2U]) 
           | (0x00000f80U & ((IData)((vlSelfRef.top__DOT__core_inst__DOT__info_mem 
                                      >> 0x00000020U)) 
                             << 7U)));
    vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[1U] 
        = ((3U & vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[1U]) 
           | ((IData)(vlSelfRef.top__DOT__core_inst__DOT__info_mem) 
              << 2U));
    vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[2U] 
        = ((0x00001ffcU & vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[2U]) 
           | (0x00001fffU & ((IData)(vlSelfRef.top__DOT__core_inst__DOT__info_mem) 
                             >> 0x0000001eU)));
    vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[0U] 
        = ((0xfffffffdU & vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[0U]) 
           | (2U & ((IData)((vlSelfRef.top__DOT__core_inst__DOT__info_mem 
                             >> 0x00000025U)) << 1U)));
}

void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rst_i) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[0U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[1U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[2U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[3U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[5U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[6U] = 0U;
    } else {
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[0U] 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[0U];
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[1U] 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[1U];
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[2U] 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[2U];
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[3U] 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[3U];
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U] 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[4U];
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[5U] 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[5U];
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[6U] 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[6U];
    }
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_o[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[0U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_o[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[1U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_o[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[2U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_o[3U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[3U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_o[4U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_o[5U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[5U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_o[6U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[6U];
    vlSelfRef.top__DOT__core_inst__DOT__id_ex[0U] = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_o[0U];
    vlSelfRef.top__DOT__core_inst__DOT__id_ex[1U] = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_o[1U];
    vlSelfRef.top__DOT__core_inst__DOT__id_ex[2U] = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_o[2U];
    vlSelfRef.top__DOT__core_inst__DOT__id_ex[3U] = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_o[3U];
    vlSelfRef.top__DOT__core_inst__DOT__id_ex[4U] = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_o[4U];
    vlSelfRef.top__DOT__core_inst__DOT__id_ex[5U] = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_o[5U];
    vlSelfRef.top__DOT__core_inst__DOT__id_ex[6U] = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_o[6U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__id_ex[0U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__id_ex[1U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__id_ex[2U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[3U] 
        = vlSelfRef.top__DOT__core_inst__DOT__id_ex[3U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
        = vlSelfRef.top__DOT__core_inst__DOT__id_ex[4U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[5U] 
        = vlSelfRef.top__DOT__core_inst__DOT__id_ex[5U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[6U] 
        = vlSelfRef.top__DOT__core_inst__DOT__id_ex[6U];
    if ((1U & (~ VL_ONEHOT_I(((2U & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                                     >> 6U)) | (1U 
                                                & (~ 
                                                   (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                                                    >> 7U)))))))) {
        if ((0U != ((2U & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                           >> 6U)) | (1U & (~ (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                                               >> 7U)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: stage_ex.sv:50: Assertion failed in %Ntop.core_inst.stage_ex_inst: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (1U & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                                    >> 7U)));
                VL_STOP_MT("../../rtl/pkg/../../rtl/stage_ex.sv", 50, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                                             >> 5U))) 
                               << 2U) | (((1U == (3U 
                                                  & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                                                     >> 5U))) 
                                          << 1U) | 
                                         (0U == (3U 
                                                 & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                                                    >> 5U))))))))) {
        if ((0U != (((2U == (3U & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                                   >> 5U))) << 2U) 
                    | (((1U == (3U & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                                      >> 5U))) << 1U) 
                       | (0U == (3U & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                                       >> 5U))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: stage_ex.sv:57: Assertion failed in %Ntop.core_inst.stage_ex_inst: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (3U & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                                    >> 5U)));
                VL_STOP_MT("../../rtl/pkg/../../rtl/stage_ex.sv", 57, "");
            }
        }
    }
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__op_i 
        = (0x0000000fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                          >> 1U));
}

void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__rst_i) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[0U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[1U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[2U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[3U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[4U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[5U] = 0U;
    } else {
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[0U] 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_d[0U];
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[1U] 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_d[1U];
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[2U] 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_d[2U];
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[3U] 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_d[3U];
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[4U] 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_d[4U];
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[5U] 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_d[5U];
    }
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_o[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[0U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_o[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[1U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_o[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[2U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_o[3U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[3U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_o[4U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[4U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_o[5U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[5U];
    vlSelfRef.top__DOT__core_inst__DOT__mem_wb[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_o[0U];
    vlSelfRef.top__DOT__core_inst__DOT__mem_wb[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_o[1U];
    vlSelfRef.top__DOT__core_inst__DOT__mem_wb[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_o[2U];
    vlSelfRef.top__DOT__core_inst__DOT__mem_wb[3U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_o[3U];
    vlSelfRef.top__DOT__core_inst__DOT__mem_wb[4U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_o[4U];
    vlSelfRef.top__DOT__core_inst__DOT__mem_wb[5U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_o[5U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__mem_wb[0U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__mem_wb[1U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__mem_wb[2U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[3U] 
        = vlSelfRef.top__DOT__core_inst__DOT__mem_wb[3U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[4U] 
        = vlSelfRef.top__DOT__core_inst__DOT__mem_wb[4U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[5U] 
        = vlSelfRef.top__DOT__core_inst__DOT__mem_wb[5U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__rd_we_o 
        = ((vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[3U] 
            >> 6U) & (vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[5U] 
                      >> 0x00000019U));
    vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__info_wb_o 
        = (1U & (vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[5U] 
                 >> 0x00000019U));
    vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__rd_addr_o 
        = (0x0000001fU & vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[3U]);
    vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_data 
        = ((0x00000800U & vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[3U])
            ? ((0x00000400U & vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[3U])
                ? 0U : ((0x00000200U & vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[3U])
                         ? vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[0U]
                         : (0x0000ffffU & vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[0U])))
            : ((0x00000400U & vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[3U])
                ? ((0x00000200U & vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[3U])
                    ? (((- (IData)((1U & (vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[0U] 
                                          >> 7U)))) 
                        << 0x00000010U) | (0x0000ffffU 
                                           & vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[0U]))
                    : (0x000000ffU & vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[0U]))
                : ((0x00000200U & vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[3U])
                    ? (((- (IData)((1U & (vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[0U] 
                                          >> 7U)))) 
                        << 8U) | (0x000000ffU & vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[0U]))
                    : 0U)));
    vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__rd_data_o 
        = ((0x00000100U & vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[3U])
            ? ((0x00000080U & vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[3U])
                ? ((vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[4U] 
                    << 7U) | (vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[3U] 
                              >> 0x00000019U)) : vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_data)
            : ((0x00000080U & vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[3U])
                ? vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[2U]
                : vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i[1U]));
    vlSelfRef.top__DOT__core_inst__DOT__rd_we = vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__rd_we_o;
    vlSelfRef.top__DOT__core_inst__DOT__info_wb = vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__info_wb_o;
    vlSelfRef.top__DOT__core_inst__DOT__rd_addr = vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__rd_addr_o;
    vlSelfRef.top__DOT__core_inst__DOT__rd_data = vlSelfRef.top__DOT__core_inst__DOT__stage_wb_inst__DOT__rd_data_o;
    vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rd_we_i 
        = vlSelfRef.top__DOT__core_inst__DOT__rd_we;
    vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[0U] 
        = ((0xfffffffeU & vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[0U]) 
           | (IData)(vlSelfRef.top__DOT__core_inst__DOT__info_wb));
    vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rd_addr_i 
        = vlSelfRef.top__DOT__core_inst__DOT__rd_addr;
    vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[2U] 
        = ((0x00001f83U & vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[2U]) 
           | (0x00001fffU & ((IData)(vlSelfRef.top__DOT__core_inst__DOT__rd_addr) 
                             << 2U)));
    vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rd_data_i 
        = vlSelfRef.top__DOT__core_inst__DOT__rd_data;
    vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[0U] 
        = ((3U & vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[0U]) 
           | (vlSelfRef.top__DOT__core_inst__DOT__rd_data 
              << 2U));
    vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[1U] 
        = ((0xfffffffcU & vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[1U]) 
           | (vlSelfRef.top__DOT__core_inst__DOT__rd_data 
              >> 0x0000001eU));
}

void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__rom_inst__DOT__mem_req_i[0U] 
        = vlSelfRef.top__DOT__imem_req[0U];
    vlSelfRef.top__DOT__rom_inst__DOT__mem_req_i[1U] 
        = vlSelfRef.top__DOT__imem_req[1U];
    vlSelfRef.top__DOT__rom_inst__DOT__mem_req_i[2U] 
        = vlSelfRef.top__DOT__imem_req[2U];
    vlSelfRef.top__DOT__rom_inst__DOT__mem_req_valid_i 
        = vlSelfRef.top__DOT__imem_req_valid;
}

void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_epoch_match 
        = ((0x0000000fU & (IData)((vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_i 
                                   >> 0x00000025U))) 
           == (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_epoch_q));
}

void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rs1_data 
        = ((0U == (IData)(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rs1_addr_i))
            ? 0U : vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs
           [vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rs1_addr_i]);
    vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rs2_data 
        = ((0U == (IData)(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rs2_addr_i))
            ? 0U : vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs
           [vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rs2_addr_i]);
    vlSelfRef.top__DOT__core_inst__DOT__rs1_data = vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rs1_data;
    vlSelfRef.top__DOT__core_inst__DOT__rs2_data = vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rs2_data;
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs1_data_i 
        = vlSelfRef.top__DOT__core_inst__DOT__rs1_data;
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs2_data_i 
        = vlSelfRef.top__DOT__core_inst__DOT__rs2_data;
}

void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_next 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_q;
    if ((1U & (IData)((vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_i 
                       >> 0x00000020U)))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_next 
            = (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_i);
    } else if ((1U & (IData)((vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_pending_q 
                              >> 0x00000020U)))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_next 
            = (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_pending_q);
    } else if (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_accepted) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_next 
            = ((IData)(4U) + vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_q);
    }
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__pc_next_i 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_next;
}

void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__info_id_o = 0U;
    if ((((0U != (7U & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[3U] 
                        >> 0x00000018U))) & (((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs1_addr_o) 
                                              == (0x0000001fU 
                                                  & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[1U] 
                                                     >> 5U))) 
                                             | ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs2_addr_o) 
                                                == 
                                                (0x0000001fU 
                                                 & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[1U] 
                                                    >> 5U))))) 
         & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[6U] 
            >> 8U))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__info_id_o = 1U;
    }
    vlSelfRef.top__DOT__core_inst__DOT__info_id = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__info_id_o;
}

void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ctrl_mem_i) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_d[0U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_d[1U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_d[2U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_d[3U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_d[4U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_d[5U] = 0U;
    } else {
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_d[0U] 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__data_out;
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_d[1U] 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[0U];
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_d[2U] 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[1U];
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_d[3U] 
            = ((0xffffffe0U & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[3U]) 
               | (0x0000001fU & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[2U]));
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_d[4U] 
            = ((0x0000001fU & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[4U]) 
               | (0xffffffe0U & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[4U]));
        vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_d[5U] 
            = ((0x0000001fU & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[5U]) 
               | (0x03ffffe0U & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i[5U]));
    }
}

void Vtop___024root___nba_comb__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[0U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[1U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__ctrl_ex[2U];
}

void Vtop___024root___nba_comb__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__core_inst__DOT__ctrl_id = 0U;
    if ((1U & (IData)((vlSelfRef.top__DOT__core_inst__DOT__pc_redirect 
                       >> 0x00000020U)))) {
        vlSelfRef.top__DOT__core_inst__DOT__ctrl_id 
            = (4U | (IData)(vlSelfRef.top__DOT__core_inst__DOT__ctrl_id));
    }
    vlSelfRef.top__DOT__core_inst__DOT__ctrl_if = (0x0bU 
                                                   & (IData)(vlSelfRef.top__DOT__core_inst__DOT__ctrl_if));
    vlSelfRef.top__DOT__core_inst__DOT__ctrl_if = (0x0eU 
                                                   & (IData)(vlSelfRef.top__DOT__core_inst__DOT__ctrl_if));
    vlSelfRef.top__DOT__core_inst__DOT__ctrl_if = (7U 
                                                   & (IData)(vlSelfRef.top__DOT__core_inst__DOT__ctrl_if));
    vlSelfRef.top__DOT__core_inst__DOT__ctrl_if = (0x0dU 
                                                   & (IData)(vlSelfRef.top__DOT__core_inst__DOT__ctrl_if));
    if ((1U & (IData)((vlSelfRef.top__DOT__core_inst__DOT__pc_redirect 
                       >> 0x00000020U)))) {
        vlSelfRef.top__DOT__core_inst__DOT__ctrl_if 
            = (4U | (IData)(vlSelfRef.top__DOT__core_inst__DOT__ctrl_if));
    }
    if (vlSelfRef.top__DOT__core_inst__DOT__info_id) {
        vlSelfRef.top__DOT__core_inst__DOT__ctrl_id 
            = (1U | (IData)(vlSelfRef.top__DOT__core_inst__DOT__ctrl_id));
        vlSelfRef.top__DOT__core_inst__DOT__ctrl_if 
            = (8U | (IData)(vlSelfRef.top__DOT__core_inst__DOT__ctrl_if));
        vlSelfRef.top__DOT__core_inst__DOT__ctrl_if 
            = (2U | (IData)(vlSelfRef.top__DOT__core_inst__DOT__ctrl_if));
    }
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_id_i 
        = vlSelfRef.top__DOT__core_inst__DOT__ctrl_id;
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i 
        = vlSelfRef.top__DOT__core_inst__DOT__ctrl_if;
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_we 
        = (1U & (~ ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i) 
                    >> 3U)));
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_ready_o 
        = (1U & (~ ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i) 
                    >> 1U)));
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__pc_we_i 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_we;
    vlSelfRef.top__DOT__core_inst__DOT__imem_rsp_ready_o 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_ready_o;
    vlSelfRef.top__DOT__imem_rsp_ready = vlSelfRef.top__DOT__core_inst__DOT__imem_rsp_ready_o;
    vlSelfRef.top__DOT__rom_inst__DOT__mem_rsp_ready_i 
        = vlSelfRef.top__DOT__imem_rsp_ready;
}

void Vtop___024root___nba_comb__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs1_data 
        = ((((0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[2U] 
                             >> 7U)) == (0x0000001fU 
                                         & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[3U] 
                                            >> 0x0000000fU))) 
            & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[0U] 
               >> 1U)) ? ((vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[2U] 
                           << 0x0000001eU) | (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[1U] 
                                              >> 2U))
            : ((((0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[2U] 
                                 >> 2U)) == (0x0000001fU 
                                             & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[3U] 
                                                >> 0x0000000fU))) 
                & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[0U])
                ? ((vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[1U] 
                    << 0x0000001eU) | (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i[0U] 
                                       >> 2U)) : ((vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[3U] 
                                                   << 0x00000016U) 
                                                  | (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[2U] 
                                                     >> 0x0000000aU))));
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_a 
        = ((0x00000080U & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U])
            ? ((0x00000080U & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U])
                ? ((vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[5U] 
                    << 0x00000018U) | (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i[4U] 
                                       >> 8U)) : vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs1_data)
            : vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs1_data);
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__a_i 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_a;
}

void Vtop___024root___nba_comb__TOP__8(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[0U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[1U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[2U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[3U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[3U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[4U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[5U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[5U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[6U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[6U];
    if ((4U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_id_i))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[0U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[1U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[2U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[3U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[4U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[5U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[6U] = 0U;
    } else if ((1U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_id_i))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[6U] 
            = (0x000000ffU & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[6U]);
    } else if ((1U & (~ ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_id_i) 
                         >> 1U)))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[3U] 
            = ((0x000003ffU & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[3U]) 
               | ((vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals 
                   << 0x00000014U) | (((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs1_addr_o) 
                                       << 0x0000000fU) 
                                      | ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs2_addr_o) 
                                         << 0x0000000aU))));
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[4U] 
            = (((0x00000300U & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[0U] 
                                << 8U)) | ((0x000003ffU 
                                            & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals 
                                               >> 0x0000000cU)) 
                                           | ((0x000003ffU 
                                               & ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs1_addr_o) 
                                                  >> 0x00000011U)) 
                                              | ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs2_addr_o) 
                                                 >> 0x00000016U)))) 
               | (0xfffffc00U & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[0U] 
                                 << 8U)));
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[5U] 
            = (((vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[0U] 
                 >> 0x00000018U) | (0x00000300U & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[1U] 
                                                   << 8U))) 
               | (0xfffffc00U & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[1U] 
                                 << 8U)));
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[6U] 
            = (0x000001ffU & ((vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[1U] 
                               >> 0x00000018U) | (0x00000300U 
                                                  & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[2U] 
                                                     << 8U))));
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[1U] 
            = (IData)((((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs2_data_i)) 
                        << 0x0000000aU) | (QData)((IData)(
                                                          ((0x000003e0U 
                                                            & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[1U] 
                                                               >> 2U)) 
                                                           | (0x0000001fU 
                                                              & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[1U] 
                                                                 >> 0x00000014U)))))));
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[2U] 
            = ((0xfffffc00U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[2U]) 
               | (IData)(((((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs2_data_i)) 
                            << 0x0000000aU) | (QData)((IData)(
                                                              ((0x000003e0U 
                                                                & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[1U] 
                                                                   >> 2U)) 
                                                               | (0x0000001fU 
                                                                  & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[1U] 
                                                                     >> 0x00000014U)))))) 
                          >> 0x00000020U)));
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[2U] 
            = ((0x000003ffU & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[2U]) 
               | (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs1_data_i 
                  << 0x0000000aU));
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[3U] 
            = ((0xfffffc00U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[3U]) 
               | (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs1_data_i 
                  >> 0x00000016U));
        vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr_type 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type;
        vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i[1U];
        vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__Vfuncout 
            = ((4U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr_type))
                ? ((2U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr_type))
                    ? 0U : ((1U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr_type))
                             ? ((((0x00000ffeU & ((- (IData)(
                                                             (vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                                              >> 0x1fU))) 
                                                  << 1U)) 
                                  | (vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                     >> 0x1fU)) << 0x00000014U) 
                                | ((((0x000001feU & 
                                      (vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                       >> 0x0000000bU)) 
                                     | (1U & (vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                              >> 0x14U))) 
                                    << 0x0000000bU) 
                                   | (0x000007feU & 
                                      (vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                       >> 0x00000014U))))
                             : (0xfffff000U & vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr)))
                : ((2U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr_type))
                    ? ((1U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr_type))
                        ? (((- (IData)((vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                        >> 0x1fU))) 
                            << 0x0000000dU) | ((((2U 
                                                  & (vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                                     >> 0x0000001eU)) 
                                                 | (1U 
                                                    & (vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                                       >> 7U))) 
                                                << 0x0000000bU) 
                                               | ((0x000007e0U 
                                                   & (vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                                      >> 0x00000014U)) 
                                                  | (0x0000001eU 
                                                     & (vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                                        >> 7U)))))
                        : (((- (IData)((vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                        >> 0x1fU))) 
                            << 0x0000000cU) | ((0x00000fe0U 
                                                & (vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                                   >> 0x00000014U)) 
                                               | (0x0000001fU 
                                                  & (vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                                     >> 7U)))))
                    : ((1U & (IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr_type))
                        ? (((- (IData)((vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                        >> 0x1fU))) 
                            << 0x0000000cU) | (vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
                                               >> 0x14U))
                        : 0U)));
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[0U] 
            = vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__Vfuncout;
    }
}

void Vtop___024root___nba_comb__TOP__9(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[0U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[2U];
    if ((4U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[0U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[1U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[2U] = 0U;
    } else if ((1U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[2U] = 0U;
    } else if ((1U & (~ ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i) 
                         >> 1U)))) {
        if (((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_valid_i) 
             & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_epoch_match))) {
            vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[0U] 
                = (IData)((((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_i)) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_issued_q))));
            vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[1U] 
                = (IData)(((((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_i)) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_issued_q))) 
                           >> 0x00000020U));
            vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[2U] = 1U;
        } else {
            vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[2U] = 0U;
        }
    }
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_accepted 
        = ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_ready_o) 
           & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_valid_i));
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_d 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_q;
    if (((~ (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_accepted)) 
         & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_accepted))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_d = 1U;
    } else if (((~ (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_accepted)) 
                & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_accepted))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_d = 0U;
    }
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_has_space 
        = (1U & ((~ (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_q)) 
                 | (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_accepted)));
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_issue 
        = (IData)((((0U == (7U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i))) 
                    & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_has_space)) 
                   & ((~ (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_q)) 
                      | (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_accepted))));
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_d 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_q;
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_d 
        = ((~ (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_accepted)) 
           & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_q));
    if (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_issue) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_d 
            = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_q)));
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_d = 1U;
    }
}

void Vtop___024root___nba_comb__TOP__11(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_d[0U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_q[0U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_d[1U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_q[1U];
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_d[2U] 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_q[2U];
    if (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_issue) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_d[1U] 
            = (IData)((((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_epoch_q)) 
                        << 0x00000025U) | (((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_q)) 
                                            << 0x00000021U) 
                                           | (QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_next)))));
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_d[2U] 
            = (0x000001ffU & (IData)(((((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_epoch_q)) 
                                        << 0x00000025U) 
                                       | (((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_q)) 
                                           << 0x00000021U) 
                                          | (QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_next)))) 
                                      >> 0x00000020U)));
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_d[0U] = 0U;
    }
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000002000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x0000000000000060ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x0000000000000180ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x0000000000000018ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x0000000000000600ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0x0000000000001800ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x0000000000000060ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0x0000000000004060ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x0000000000000078ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x00000000000001e3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x0000000000000660ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0x0000000000002003ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((0x0000000000001803ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__5(vlSelf);
    }
    if ((0x0000000000000663ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__6(vlSelf);
    }
    if ((0x0000000000001e03ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__7(vlSelf);
    }
    if ((0x000000000000067bULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__8(vlSelf);
    }
    if ((0x0000000000004663ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__9(vlSelf);
    }
    if ((0x0000000000001e07ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((0x00000000000047e3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__11(vlSelf);
    }
}

void Vtop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtop___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("../../rtl/pkg/../../rtl/top.sv", 3, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vtop___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("../../rtl/pkg/../../rtl/top.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("../../rtl/pkg/../../rtl/top.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vtop___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtop___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk_i & 0xfeU)))) {
        Verilated::overWidthError("clk_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_i & 0xfeU)))) {
        Verilated::overWidthError("rst_i");
    }
}
#endif  // VL_DEBUG
