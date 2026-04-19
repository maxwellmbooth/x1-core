// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i__0 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i;
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
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__core_inst__DOT__ctrl_mem = 0U;
    VL_READMEM_N(true, 32, 65536, 0, "../prog.hex"s
                 ,  &(vlSelfRef.top__DOT__rom_inst__DOT__mem)
                 , 0, ~0ULL);
    vlSelfRef.top__DOT__rom_inst__DOT__mem_req_ready_o = 1U;
    vlSelfRef.top__DOT__core_inst__DOT__imem_req_ready_i = 1U;
    vlSelfRef.top__DOT__imem_req_ready = 1U;
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_ready_i = 1U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("../../rtl/pkg/../../rtl/top.sv", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtop___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtop___024root___eval_triggers_vec__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers_vec__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[1U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlTriggered[0U] = (QData)((IData)(
                                                    (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i 
                                                     != vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i__0 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered[0U] = (1ULL | vlSelfRef.__VstlTriggered[0U]);
    }
}

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] top.core_inst.stage_ex_inst.alu_inst.b_i)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
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

void Vtop___024root___ico_comb__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[1U])) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & (vlSelfRef.__VstlTriggered[1U] | vlSelfRef.__VstlTriggered[0U]))) {
        Vtop___024root___ico_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] top.core_inst.stage_ex_inst.alu_inst.b_i)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge top.core_inst.stage_ex_inst.clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge top.core_inst.stage_ex_inst.rst_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([hybrid] top.core_inst.stage_ex_inst.alu_inst.b_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge top.core_inst.regfile_inst.clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(posedge top.core_inst.regfile_inst.rst_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(posedge top.core_inst.stage_if_inst.clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @(posedge top.core_inst.stage_if_inst.rst_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @(posedge top.core_inst.stage_if_inst.program_counter_inst.clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @(posedge top.core_inst.stage_if_inst.program_counter_inst.rst_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @(posedge top.core_inst.stage_id_inst.clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @(posedge top.core_inst.stage_id_inst.rst_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 11 is active: @(posedge top.core_inst.stage_mem_inst.clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 12 is active: @(posedge top.core_inst.stage_mem_inst.rst_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 13 is active: @(posedge top.core_inst.stage_mem_inst.ram_inst.clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 14 is active: @(posedge top.rom_inst.clk_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5726502174457611970ull);
    vlSelf->top__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14065288826916884808ull);
    vlSelf->top__DOT__rst_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14747453079174068898ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->top__DOT__imem_req, __VscopeHash, 710680679915369647ull);
    vlSelf->top__DOT__imem_rsp = VL_SCOPED_RAND_RESET_Q(41, __VscopeHash, 9868612771109274929ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->top__DOT__dmem_req, __VscopeHash, 1665501854511653757ull);
    vlSelf->top__DOT__dmem_rsp = VL_SCOPED_RAND_RESET_Q(41, __VscopeHash, 13732101265992558163ull);
    vlSelf->top__DOT__imem_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6989263310207731536ull);
    vlSelf->top__DOT__imem_req_ready = 1U;
    ;
    vlSelf->top__DOT__imem_rsp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6950252463047641076ull);
    vlSelf->top__DOT__imem_rsp_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16304429206783450604ull);
    vlSelf->top__DOT__dmem_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2595778999086667654ull);
    vlSelf->top__DOT__dmem_req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2705606000187899542ull);
    vlSelf->top__DOT__dmem_rsp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6596106401533796040ull);
    vlSelf->top__DOT__dmem_rsp_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9123194915224263235ull);
    vlSelf->top__DOT__core_inst__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13698186063880164638ull);
    vlSelf->top__DOT__core_inst__DOT__rst_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9108505425696528190ull);
    vlSelf->top__DOT__core_inst__DOT__imem_rsp_valid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18109063120027015694ull);
    vlSelf->top__DOT__core_inst__DOT__imem_req_ready_i = 1U;
    ;
    vlSelf->top__DOT__core_inst__DOT__imem_rsp_i = VL_SCOPED_RAND_RESET_Q(41, __VscopeHash, 2865240149899542183ull);
    vlSelf->top__DOT__core_inst__DOT__dmem_rsp_i = VL_SCOPED_RAND_RESET_Q(41, __VscopeHash, 13467537651381137031ull);
    vlSelf->top__DOT__core_inst__DOT__imem_req_valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5688267228556616135ull);
    vlSelf->top__DOT__core_inst__DOT__imem_rsp_ready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14639053288422453668ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->top__DOT__core_inst__DOT__imem_req_o, __VscopeHash, 17665680443442985254ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->top__DOT__core_inst__DOT__dmem_req_o, __VscopeHash, 15268809922974867715ull);
    vlSelf->top__DOT__core_inst__DOT__rs1_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11909408298633330349ull);
    vlSelf->top__DOT__core_inst__DOT__rs2_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13580723347871917756ull);
    vlSelf->top__DOT__core_inst__DOT__rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2264599226170757813ull);
    vlSelf->top__DOT__core_inst__DOT__rd_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4212685578247104754ull);
    vlSelf->top__DOT__core_inst__DOT__rd_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17680697668916194034ull);
    vlSelf->top__DOT__core_inst__DOT__rs1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8781767531594770198ull);
    vlSelf->top__DOT__core_inst__DOT__rs2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14341350605306983449ull);
    vlSelf->top__DOT__core_inst__DOT__pc_redirect = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 14465649767300441528ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->top__DOT__core_inst__DOT__if_id, __VscopeHash, 615380631763999822ull);
    vlSelf->top__DOT__core_inst__DOT__ctrl_if = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7063081046104944175ull);
    vlSelf->top__DOT__core_inst__DOT__info_if = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14295716230133999020ull);
    VL_SCOPED_RAND_RESET_W(201, vlSelf->top__DOT__core_inst__DOT__id_ex, __VscopeHash, 7272586201405466719ull);
    vlSelf->top__DOT__core_inst__DOT__ctrl_id = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17928710226007899538ull);
    vlSelf->top__DOT__core_inst__DOT__info_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18423310113824478852ull);
    VL_SCOPED_RAND_RESET_W(186, vlSelf->top__DOT__core_inst__DOT__ex_mem, __VscopeHash, 9178716969136010823ull);
    VL_SCOPED_RAND_RESET_W(77, vlSelf->top__DOT__core_inst__DOT__ctrl_ex, __VscopeHash, 7959865753208481683ull);
    VL_SCOPED_RAND_RESET_W(186, vlSelf->top__DOT__core_inst__DOT__mem_wb, __VscopeHash, 11826274701738854975ull);
    vlSelf->top__DOT__core_inst__DOT__ctrl_mem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12161578569311182040ull);
    vlSelf->top__DOT__core_inst__DOT__info_mem = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 3871082737224085955ull);
    vlSelf->top__DOT__core_inst__DOT__info_wb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16392844608512134639ull);
    vlSelf->top__DOT__core_inst__DOT__regfile_inst__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13706352280241942590ull);
    vlSelf->top__DOT__core_inst__DOT__regfile_inst__DOT__rst_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6301906812423243410ull);
    vlSelf->top__DOT__core_inst__DOT__regfile_inst__DOT__rs1_addr_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4514723783154572663ull);
    vlSelf->top__DOT__core_inst__DOT__regfile_inst__DOT__rs2_addr_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5999589469997635757ull);
    vlSelf->top__DOT__core_inst__DOT__regfile_inst__DOT__rd_addr_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17341873691533078448ull);
    vlSelf->top__DOT__core_inst__DOT__regfile_inst__DOT__rd_data_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12478520074650168972ull);
    vlSelf->top__DOT__core_inst__DOT__regfile_inst__DOT__rd_we_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4009394631923469052ull);
    vlSelf->top__DOT__core_inst__DOT__regfile_inst__DOT__rs1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3679821382364349864ull);
    vlSelf->top__DOT__core_inst__DOT__regfile_inst__DOT__rs2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11810454951826306596ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__core_inst__DOT__regfile_inst__DOT__regs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3269025013727561489ull);
    }
    vlSelf->top__DOT__core_inst__DOT__regfile_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3332079354803043478ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__rst_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14526298138156314831ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10664503502659143065ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_valid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11117291143607222236ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_ready_i = 1U;
    ;
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_i = VL_SCOPED_RAND_RESET_Q(41, __VscopeHash, 2667602248253485846ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_i = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 4009270071498174691ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12575143880802640745ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_ready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15971730906574913291ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_o, __VscopeHash, 4504313812713289045ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__info_if_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5025940204774251209ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_o, __VscopeHash, 15736098043759412462ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_epoch_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5216728364993139664ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_d = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15419667343512955731ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8812475494333294285ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_accepted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9485891964166611021ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_accepted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14604506532121836870ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17501972518977614664ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_issued_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7311653470911501971ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1923405434870328336ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9017928739335449886ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_pending_q = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 8276358730020436702ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_d, __VscopeHash, 9391997035149458270ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_q, __VscopeHash, 12039387508371825404ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7115977409505408725ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2808078965690132215ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16382560949492410227ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18315521917131671107ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_has_space = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15885308150952182782ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_issue = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10571571913781027612ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d, __VscopeHash, 1739590100663501097ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q, __VscopeHash, 760505785146254443ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_epoch_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16265616917853955622ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12897614319814840142ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__rst_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3193073689777187863ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__pc_we_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6670822570316707064ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__pc_next_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16803676077021149694ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__pc_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10650873926118417132ull);
    vlSelf->top__DOT__core_inst__DOT__stage_id_inst__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9089484761099232408ull);
    vlSelf->top__DOT__core_inst__DOT__stage_id_inst__DOT__rst_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7009524439166352391ull);
    vlSelf->top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_id_i = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5250163172865278466ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i, __VscopeHash, 15098526995252572095ull);
    vlSelf->top__DOT__core_inst__DOT__stage_id_inst__DOT__rs1_data_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11070087365663467648ull);
    vlSelf->top__DOT__core_inst__DOT__stage_id_inst__DOT__rs2_data_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9360080100076621179ull);
    vlSelf->top__DOT__core_inst__DOT__stage_id_inst__DOT__rs1_addr_o = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1388145061089231479ull);
    vlSelf->top__DOT__core_inst__DOT__stage_id_inst__DOT__rs2_addr_o = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5824085152353095619ull);
    vlSelf->top__DOT__core_inst__DOT__stage_id_inst__DOT__info_id_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1746983209564060701ull);
    VL_SCOPED_RAND_RESET_W(201, vlSelf->top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_o, __VscopeHash, 12797400975588631955ull);
    VL_SCOPED_RAND_RESET_W(201, vlSelf->top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d, __VscopeHash, 11732739748976844532ull);
    VL_SCOPED_RAND_RESET_W(201, vlSelf->top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q, __VscopeHash, 15697389664737797044ull);
    vlSelf->top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 2015355872773392859ull);
    vlSelf->top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5632297478658224985ull);
    vlSelf->top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 889007777048950819ull);
    vlSelf->top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12920256224106699256ull);
    vlSelf->top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6388360614657396556ull);
    vlSelf->top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__funct3_i = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15576189984798717549ull);
    vlSelf->top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__funct7_i = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2845688609397219491ull);
    vlSelf->top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 14765253038774462644ull);
    vlSelf->top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6154019202357601582ull);
    vlSelf->top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9698182507688686941ull);
    vlSelf->top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6065552826639533159ull);
    vlSelf->top__DOT__core_inst__DOT__stage_ex_inst__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17923834967017041119ull);
    vlSelf->top__DOT__core_inst__DOT__stage_ex_inst__DOT__rst_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16796693296818945068ull);
    VL_SCOPED_RAND_RESET_W(77, vlSelf->top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i, __VscopeHash, 16315406920801399203ull);
    VL_SCOPED_RAND_RESET_W(201, vlSelf->top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i, __VscopeHash, 1065330099017147195ull);
    vlSelf->top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_o = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 10186356775134298412ull);
    VL_SCOPED_RAND_RESET_W(186, vlSelf->top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_o, __VscopeHash, 16787815985729482474ull);
    vlSelf->top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_d = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 7143363836011197884ull);
    vlSelf->top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_q = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 2396050519003168442ull);
    VL_SCOPED_RAND_RESET_W(186, vlSelf->top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_d, __VscopeHash, 2999013589803426378ull);
    VL_SCOPED_RAND_RESET_W(186, vlSelf->top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q, __VscopeHash, 2891063491620517176ull);
    vlSelf->top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1217777026020095951ull);
    vlSelf->top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15128119115423377663ull);
    vlSelf->top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1072035993477727757ull);
    vlSelf->top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_eq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4685760174361370474ull);
    vlSelf->top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_lt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1592407278543462938ull);
    vlSelf->top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_ltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3781395613785549681ull);
    vlSelf->top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8178135503488813248ull);
    vlSelf->top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9593671787650520976ull);
    vlSelf->top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__a_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14640225354084003192ull);
    vlSelf->top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 203074122139593265ull);
    vlSelf->top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__op_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6101491753339023051ull);
    vlSelf->top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__q_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6838026133723308352ull);
    vlSelf->top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__eq_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13265425100672103212ull);
    vlSelf->top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__lt_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17140994322015292022ull);
    vlSelf->top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__ltu_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10769656052363974639ull);
    vlSelf->top__DOT__core_inst__DOT__stage_mem_inst__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7420555265103511842ull);
    vlSelf->top__DOT__core_inst__DOT__stage_mem_inst__DOT__rst_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5487798963867016834ull);
    vlSelf->top__DOT__core_inst__DOT__stage_mem_inst__DOT__ctrl_mem_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6536406140054118248ull);
    VL_SCOPED_RAND_RESET_W(186, vlSelf->top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i, __VscopeHash, 623187293318870ull);
    vlSelf->top__DOT__core_inst__DOT__stage_mem_inst__DOT__dmem_rsp_i = VL_SCOPED_RAND_RESET_Q(41, __VscopeHash, 1076001376731262131ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->top__DOT__core_inst__DOT__stage_mem_inst__DOT__dmem_req_o, __VscopeHash, 15183639832255836249ull);
    vlSelf->top__DOT__core_inst__DOT__stage_mem_inst__DOT__info_mem_o = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 6061920893312933006ull);
    VL_SCOPED_RAND_RESET_W(186, vlSelf->top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_o, __VscopeHash, 11665537938728697122ull);
    VL_SCOPED_RAND_RESET_W(186, vlSelf->top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_d, __VscopeHash, 13254056305128305163ull);
    VL_SCOPED_RAND_RESET_W(186, vlSelf->top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q, __VscopeHash, 6407303929350989460ull);
    vlSelf->top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14846211732799029054ull);
    vlSelf->top__DOT__core_inst__DOT__stage_mem_inst__DOT__data_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10422726913781411882ull);
    vlSelf->top__DOT__core_inst__DOT__stage_mem_inst__DOT__data_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7991086290232695338ull);
    vlSelf->top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4046885092683315660ull);
    vlSelf->top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__we_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14928532799467723275ull);
    vlSelf->top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__addr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11496482025454376219ull);
    vlSelf->top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__data_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12991262952829944493ull);
    vlSelf->top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__data_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8404299499864479767ull);
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15845286994832833593ull);
    }
    vlSelf->top__DOT__core_inst__DOT__stage_wb_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9117059587093944223ull);
    vlSelf->top__DOT__core_inst__DOT__stage_wb_inst__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10708845936418739540ull);
    VL_SCOPED_RAND_RESET_W(186, vlSelf->top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i, __VscopeHash, 6993041299797086369ull);
    vlSelf->top__DOT__core_inst__DOT__stage_wb_inst__DOT__rd_addr_o = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4114313888244331257ull);
    vlSelf->top__DOT__core_inst__DOT__stage_wb_inst__DOT__rd_data_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4184764707754813591ull);
    vlSelf->top__DOT__core_inst__DOT__stage_wb_inst__DOT__rd_we_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2070672536272728977ull);
    vlSelf->top__DOT__core_inst__DOT__stage_wb_inst__DOT__info_wb_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5145751614119894631ull);
    vlSelf->top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14723010158076918911ull);
    vlSelf->top__DOT__rom_inst__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8691663038079727088ull);
    vlSelf->top__DOT__rom_inst__DOT__mem_req_valid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6454250145144771160ull);
    vlSelf->top__DOT__rom_inst__DOT__mem_rsp_ready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11675411941990318039ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->top__DOT__rom_inst__DOT__mem_req_i, __VscopeHash, 1807536544582454667ull);
    vlSelf->top__DOT__rom_inst__DOT__mem_rsp_valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16866340389082499843ull);
    vlSelf->top__DOT__rom_inst__DOT__mem_req_ready_o = 1U;
    ;
    vlSelf->top__DOT__rom_inst__DOT__mem_rsp_o = VL_SCOPED_RAND_RESET_Q(41, __VscopeHash, 174266861772956145ull);
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->top__DOT__rom_inst__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10376846086347911442ull);
    }
    vlSelf->__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr = 0;
    vlSelf->__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr_type = 0;
    vlSelf->__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_branch_op__1__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_branch_op__1__funct3 = 0;
    vlSelf->__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op__2__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op__2__funct3 = 0;
    vlSelf->__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op__2__funct7 = 0;
    vlSelf->__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__funct3 = 0;
    vlSelf->__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op_imm__4__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op_imm__4__funct3 = 0;
    vlSelf->__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op_imm__4__funct7 = 0;
    vlSelf->__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_load_op__5__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_load_op__5__funct3 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i__0 = 0;
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__VicoDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_ex_inst__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_ex_inst__DOT__rst_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__regfile_inst__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__regfile_inst__DOT__rst_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_if_inst__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_if_inst__DOT__rst_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__rst_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_id_inst__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_id_inst__DOT__rst_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_mem_inst__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_mem_inst__DOT__rst_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__rom_inst__DOT__clk_i__0 = 0;
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
