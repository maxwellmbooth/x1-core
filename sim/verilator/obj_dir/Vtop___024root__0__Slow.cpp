// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0 = vlSelfRef.clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_i__0 = vlSelfRef.rst_i;
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
    VL_READMEM_N(true, 32, 65536, 0, "../prog.hex"s
                 ,  &(vlSelfRef.top__DOT__rom_inst__DOT__mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
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
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
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
    } while ((1U > n));
    return (0U);
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ VL_ONEHOT_I(((2U & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U] 
                                     >> 6U)) | (1U 
                                                & (~ 
                                                   (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U] 
                                                    >> 7U)))))))) {
        if ((0U != ((2U & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U] 
                           >> 6U)) | (1U & (~ (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U] 
                                               >> 7U)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: stage_ex.sv:50: Assertion failed in %Ntop.core_inst.stage_ex_inst: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (1U & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U] 
                                    >> 7U)));
                VL_STOP_MT("../../rtl/pkg/../../rtl/stage_ex.sv", 50, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U] 
                                             >> 5U))) 
                               << 2U) | (((1U == (3U 
                                                  & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U] 
                                                     >> 5U))) 
                                          << 1U) | 
                                         (0U == (3U 
                                                 & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U] 
                                                    >> 5U))))))))) {
        if ((0U != (((2U == (3U & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U] 
                                   >> 5U))) << 2U) 
                    | (((1U == (3U & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U] 
                                      >> 5U))) << 1U) 
                       | (0U == (3U & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U] 
                                       >> 5U))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: stage_ex.sv:57: Assertion failed in %Ntop.core_inst.stage_ex_inst: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (3U & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U] 
                                    >> 5U)));
                VL_STOP_MT("../../rtl/pkg/../../rtl/stage_ex.sv", 57, "");
            }
        }
    }
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__we_i 
        = ((vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[3U] 
            >> 5U) & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[5U] 
                      >> 0x00000019U));
    vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__data_i 
        = ((0x00002000U & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[3U])
            ? ((0x00001000U & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[3U])
                ? ((vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[3U] 
                    << 0x0000001bU) | (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[2U] 
                                       >> 5U)) : (0x0000ffffU 
                                                  & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[2U] 
                                                     >> 5U)))
            : ((0x00001000U & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[3U])
                ? (0x000000ffU & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[2U] 
                                  >> 5U)) : 0U));
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_next 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_q;
    if ((1U & (IData)((vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_q 
                       >> 0x00000020U)))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_next 
            = (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_q);
    } else if ((1U & (IData)((vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_pending_q 
                              >> 0x00000020U)))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_next 
            = (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_pending_q);
    } else if (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_q) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_next 
            = ((IData)(4U) + vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_q);
    }
    if ((0x00000040U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
        if ((0x00000020U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
            if ((0x00000010U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
                if ((8U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 6U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 1U;
                } else if ((4U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 6U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 1U;
                } else if ((2U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
                    if ((1U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals = 0U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 6U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 1U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 0U;
                    } else {
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals = 0U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 6U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 1U;
                    }
                } else {
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 6U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 1U;
                }
            } else if ((8U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
                if ((4U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
                    if ((2U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
                        if ((1U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
                            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals = 0x000a2e0eU;
                            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 5U;
                            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
                            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 0U;
                        } else {
                            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals = 0U;
                            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 6U;
                            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
                            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 1U;
                        }
                    } else {
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals = 0U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 6U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 1U;
                    }
                } else {
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 6U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 1U;
                }
            } else if ((4U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
                if ((2U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
                    if ((1U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals = 0x0002300eU;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 1U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 0U;
                    } else {
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals = 0U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 6U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 1U;
                    }
                } else {
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 6U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 1U;
                }
            } else if ((2U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
                if ((1U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals 
                        = (0x00001fffU & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals);
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 3U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 0U;
                    vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_branch_op__1__funct3 
                        = (7U & (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                                 >> 0x0000000cU));
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
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals 
                        = ((0x000fe000U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals) 
                           | ((IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_branch_op__1__Vfuncout) 
                              << 9U));
                } else {
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 6U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 1U;
                }
            } else {
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 6U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 1U;
            }
        } else {
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 6U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 1U;
        }
    } else if ((0x00000020U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
        if ((0x00000010U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
            if ((8U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 6U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 1U;
            } else if ((4U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
                if ((2U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
                    if ((1U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals = 6U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 4U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 0U;
                    } else {
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals = 0U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 6U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
                        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 1U;
                    }
                } else {
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 6U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 1U;
                }
            } else if ((2U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
                if ((1U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals 
                        = (0x0001ffffU & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals);
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 0U;
                    vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op__2__funct7 
                        = (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                           >> 0x00000019U);
                    vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op__2__funct3 
                        = (7U & (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                                 >> 0x0000000cU));
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
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals 
                        = ((0x000e0000U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals) 
                           | (2U | ((IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op__2__Vfuncout) 
                                    << 0x0000000dU)));
                } else {
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 6U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 1U;
                }
            } else {
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 6U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 1U;
            }
        } else if ((8U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 6U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 1U;
        } else if ((4U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 6U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 1U;
        } else if ((2U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
            if ((1U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals 
                    = (0x00022000U | (0x000001ffU & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals));
                vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__funct3 
                    = (7U & (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                             >> 0x0000000cU));
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
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals 
                    = ((0x000ffe00U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals) 
                       | (1U | ((IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__Vfuncout) 
                                << 7U)));
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 2U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 0U;
            } else {
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 6U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 1U;
            }
        } else {
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 6U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 1U;
        }
    } else if ((0x00000010U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
        if ((8U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 6U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 1U;
        } else if ((4U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
            if ((2U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
                if ((1U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals = 0x000a2002U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 4U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 0U;
                } else {
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 6U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
                    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 1U;
                }
            } else {
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 6U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 1U;
            }
        } else if ((2U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
            if ((1U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals 
                    = (0x00020000U | (0x0001ffffU & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals));
                vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op_imm__4__funct7 
                    = (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                       >> 0x00000019U);
                vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op_imm__4__funct3 
                    = (7U & (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                             >> 0x0000000cU));
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
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals 
                    = ((0x000e0000U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals) 
                       | (2U | ((IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op_imm__4__Vfuncout) 
                                << 0x0000000dU)));
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 1U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 0U;
            } else {
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 6U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
                vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 1U;
            }
        } else {
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 6U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 1U;
        }
    } else if ((8U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 6U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 1U;
    } else if ((4U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 6U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 1U;
    } else if ((2U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
        if ((1U & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])) {
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals 
                = (0x00022000U | (0x0000007fU & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals));
            vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_load_op__5__funct3 
                = (7U & (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                         >> 0x0000000cU));
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
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals 
                = ((0x000fff80U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals) 
                   | (0x0aU | ((IData)(vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_load_op__5__Vfuncout) 
                               << 4U)));
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 1U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 0U;
        } else {
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 6U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
            vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 1U;
        }
    } else {
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = 6U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = 1U;
    }
    vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__info_id_o 
        = ((0U != (7U & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[3U] 
                         >> 0x00000018U))) & ((((0x0000001fU 
                                                 & (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                                                    >> 0x0000000fU)) 
                                                == 
                                                (0x0000001fU 
                                                 & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[1U] 
                                                    >> 5U))) 
                                               | ((0x0000001fU 
                                                   & (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                                                      >> 0x00000014U)) 
                                                  == 
                                                  (0x0000001fU 
                                                   & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[1U] 
                                                      >> 5U)))) 
                                              & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[6U] 
                                                 >> 8U)));
    vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rd_data_i 
        = ((0x00000100U & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[3U])
            ? ((0x00000080U & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[3U])
                ? ((vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[4U] 
                    << 7U) | (vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[3U] 
                              >> 0x00000019U)) : ((0x00000800U 
                                                   & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[3U])
                                                   ? 
                                                  ((0x00000400U 
                                                    & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[3U])
                                                    ? 0U
                                                    : 
                                                   ((0x00000200U 
                                                     & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[3U])
                                                     ? vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[0U]
                                                     : 
                                                    (0x0000ffffU 
                                                     & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[0U])))
                                                   : 
                                                  ((0x00000400U 
                                                    & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[3U])
                                                    ? 
                                                   ((0x00000200U 
                                                     & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[3U])
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[0U] 
                                                                     >> 7U)))) 
                                                      << 0x00000010U) 
                                                     | (0x0000ffffU 
                                                        & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[0U]))
                                                     : 
                                                    (0x000000ffU 
                                                     & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[0U]))
                                                    : 
                                                   ((0x00000200U 
                                                     & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[3U])
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[0U] 
                                                                     >> 7U)))) 
                                                      << 8U) 
                                                     | (0x000000ffU 
                                                        & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[0U]))
                                                     : 0U))))
            : ((0x00000080U & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[3U])
                ? vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[2U]
                : vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[1U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = ((0x00000100U 
                                                 & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[3U])
                                                 ? 
                                                ((0x00000080U 
                                                  & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[3U])
                                                  ? 
                                                 ((vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[4U] 
                                                   << 7U) 
                                                  | (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[3U] 
                                                     >> 0x00000019U))
                                                  : 0U)
                                                 : 
                                                ((0x00000080U 
                                                  & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[3U])
                                                  ? vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[1U]
                                                  : vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[0U]));
    if (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__info_id_o) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_id_i 
            = (1U | ((1U & (IData)((vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_q 
                                    >> 0x00000020U)))
                      ? 4U : 0U));
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i 
            = (0x0000000aU | ((1U & (IData)((vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_q 
                                             >> 0x00000020U)))
                               ? 4U : 0U));
    } else if ((1U & (IData)((vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_q 
                              >> 0x00000020U)))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_id_i = 4U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i = 4U;
    } else {
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_id_i = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i = 0U;
    }
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs1_data 
        = ((((0x0000001fU & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[2U]) 
             == (0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[3U] 
                                >> 0x0000000fU))) & 
            (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[5U] 
             >> 0x00000019U)) ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1
            : ((((0x0000001fU & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[3U]) 
                 == (0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[3U] 
                                    >> 0x0000000fU))) 
                & (vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[5U] 
                   >> 0x00000019U)) ? vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rd_data_i
                : ((vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[3U] 
                    << 0x00000016U) | (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[2U] 
                                       >> 0x0000000aU))));
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs2_data 
        = ((((0x0000001fU & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[2U]) 
             == (0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[3U] 
                                >> 0x0000000aU))) & 
            (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[5U] 
             >> 0x00000019U)) ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1
            : ((((0x0000001fU & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[3U]) 
                 == (0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[3U] 
                                    >> 0x0000000aU))) 
                & (vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[5U] 
                   >> 0x00000019U)) ? vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rd_data_i
                : ((vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[2U] 
                    << 0x00000016U) | (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[1U] 
                                       >> 0x0000000aU))));
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
               | (0xfffffc00U & ((vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals 
                                  << 0x00000014U) | 
                                 (((0x000003e0U & (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                                                   >> 0x0000000aU)) 
                                   | (0x0000001fU & 
                                      (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                                       >> 0x00000014U))) 
                                  << 0x0000000aU))));
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[4U] 
            = ((0xffffff00U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[4U]) 
               | (0x000003ffU & ((0x000003ffU & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals 
                                                 >> 0x0000000cU)) 
                                 | (((0x000003e0U & 
                                      (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                                       >> 0x0000000aU)) 
                                     | (0x0000001fU 
                                        & (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                                           >> 0x00000014U))) 
                                    >> 0x00000016U))));
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[4U] 
            = ((0x000000ffU & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[4U]) 
               | (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[0U] 
                  << 8U));
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[5U] 
            = ((vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[0U] 
                >> 0x00000018U) | (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                                   << 8U));
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[6U] 
            = (0x000001ffU & ((vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                               >> 0x00000018U) | (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[2U] 
                                                  << 8U)));
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[1U] 
            = ((0xfffffc00U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[1U]) 
               | ((0x000003e0U & (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                                  >> 2U)) | (0x0000001fU 
                                             & (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                                                >> 0x00000014U))));
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[1U] 
            = ((0x000003ffU & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[1U]) 
               | (((0U == (0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                                          >> 0x00000014U)))
                    ? 0U : vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs
                   [(0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                                    >> 0x00000014U))]) 
                  << 0x0000000aU));
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[2U] 
            = ((0xfffffc00U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[2U]) 
               | (((0U == (0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                                          >> 0x00000014U)))
                    ? 0U : vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs
                   [(0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                                    >> 0x00000014U))]) 
                  >> 0x00000016U));
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[2U] 
            = ((0x000003ffU & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[2U]) 
               | (((0U == (0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                                          >> 0x0000000fU)))
                    ? 0U : vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs
                   [(0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                                    >> 0x0000000fU))]) 
                  << 0x0000000aU));
        vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[3U] 
            = ((0xfffffc00U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d[3U]) 
               | (((0U == (0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                                          >> 0x0000000fU)))
                    ? 0U : vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs
                   [(0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                                    >> 0x0000000fU))]) 
                  >> 0x00000016U));
        vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr_type 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type;
        vlSelfRef.__Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U];
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
        if (((IData)(vlSelfRef.top__DOT__imem_rsp_valid) 
             & ((0x0000000fU & (IData)((vlSelfRef.top__DOT__imem_rsp 
                                        >> 0x00000025U))) 
                == (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_epoch_q)))) {
            vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[0U] 
                = (IData)((((QData)((IData)(vlSelfRef.top__DOT__imem_rsp)) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_issued_q))));
            vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[1U] 
                = (IData)(((((QData)((IData)(vlSelfRef.top__DOT__imem_rsp)) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_issued_q))) 
                           >> 0x00000020U));
            vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[2U] = 1U;
        } else {
            vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d[2U] = 0U;
        }
    }
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_accepted 
        = ((~ ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i) 
               >> 1U)) & (IData)(vlSelfRef.top__DOT__imem_rsp_valid));
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__a_i 
        = ((0x00000080U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U])
            ? ((0x00000080U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U])
                ? ((vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[5U] 
                    << 0x00000018U) | (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U] 
                                       >> 8U)) : vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs1_data)
            : vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs1_data);
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i 
        = ((0U == (3U & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U] 
                         >> 5U))) ? vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs2_data
            : ((1U == (3U & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U] 
                             >> 5U))) ? vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[0U]
                : ((2U == (3U & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U] 
                                 >> 5U))) ? (0x0000001fU 
                                             & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[1U])
                    : vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs2_data)));
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_d 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_q;
    if (((~ (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_accepted)) 
         & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_q))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_d = 1U;
    } else if (((~ (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_q)) 
                & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_accepted))) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_d = 0U;
    }
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_issue 
        = (IData)(((0U == (7U & (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i))) 
                   & ((~ (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_q)) 
                      | (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_accepted))));
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__eq_o 
        = (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__a_i 
           == vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i);
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__lt_o 
        = VL_LTS_III(32, vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__a_i, vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i);
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__ltu_o 
        = (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__a_i 
           < vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i);
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_d 
        = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_issue;
    vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_d 
        = (0x0000000fU & ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_q) 
                          + (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_issue)));
    if (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_issue) {
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_d[0U] = 0U;
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_d[1U] 
            = (IData)((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_next)));
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_d[2U] 
            = (((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_epoch_q) 
                << 5U) | (((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_q) 
                           << 1U) | (IData)(((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_next)) 
                                             >> 0x00000020U))));
    } else {
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_d[0U] 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_q[0U];
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_d[1U] 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_q[1U];
        vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_d[2U] 
            = vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_q[2U];
    }
    vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__q_o 
        = ((0x00000010U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U])
            ? ((8U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U])
                ? 0U : ((4U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U])
                         ? ((2U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U])
                             ? 0U : (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__a_i 
                                     & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i))
                         : ((2U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U])
                             ? (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__a_i 
                                ^ vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i)
                             : (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__a_i 
                                | vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i))))
            : ((8U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U])
                ? ((4U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U])
                    ? (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__a_i 
                       >> (0x0000001fU & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i))
                    : ((2U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U])
                        ? (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__a_i 
                           << (0x0000001fU & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i))
                        : ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__ltu_o)
                            ? 1U : 0U))) : ((4U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U])
                                             ? ((2U 
                                                 & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U])
                                                 ? 
                                                ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__lt_o)
                                                  ? 1U
                                                  : 0U)
                                                 : 
                                                (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__a_i 
                                                 - vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i))
                                             : ((2U 
                                                 & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U])
                                                 ? 
                                                (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__a_i 
                                                 + vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i)
                                                 : 0U))));
    if ((1U & (IData)((vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_q 
                       >> 0x00000020U)))) {
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
            = (0x01ffffffU & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[5U]);
        vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_d 
            = (0x00000000ffffffffULL & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_d);
    } else {
        vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_d[0U] 
            = (IData)((((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[0U])) 
                        << 0x00000020U) | (QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__q_o))));
        vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_d[1U] 
            = (IData)(((((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[0U])) 
                         << 0x00000020U) | (QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__q_o))) 
                       >> 0x00000020U));
        vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_d[2U] 
            = (IData)((((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs2_data)) 
                        << 5U) | (QData)((IData)((0x0000001fU 
                                                  & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[1U] 
                                                     >> 5U))))));
        vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_d[3U] 
            = (((vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U] 
                 << 0x00000011U) | (0x0001ffe0U & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[3U] 
                                                   >> 0x0000000fU))) 
               | (IData)(((((QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs2_data)) 
                            << 5U) | (QData)((IData)(
                                                     (0x0000001fU 
                                                      & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[1U] 
                                                         >> 5U))))) 
                          >> 0x00000020U)));
        vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_d[4U] 
            = ((0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U] 
                               >> 0x0000000fU)) | (
                                                   (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[5U] 
                                                    << 0x00000011U) 
                                                   | (0x0001ffe0U 
                                                      & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U] 
                                                         >> 0x0000000fU))));
        vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_d[5U] 
            = ((0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[5U] 
                               >> 0x0000000fU)) | (0x03ffffe0U 
                                                   & ((vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[6U] 
                                                       << 0x00000011U) 
                                                      | (0x0001ffe0U 
                                                         & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[5U] 
                                                            >> 0x0000000fU)))));
        vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_d 
            = ((1U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U])
                ? ((vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[3U] 
                    >> 0x0000001fU) ? 0ULL : ((0x40000000U 
                                               & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[3U])
                                               ? 0ULL
                                               : ((0x20000000U 
                                                   & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[3U])
                                                   ? 0ULL
                                                   : 
                                                  (((QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[6U] 
                                                                        >> 8U)))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__q_o))))))
                : ((vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[3U] 
                    >> 0x0000001fU) ? ((0x40000000U 
                                        & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[3U])
                                        ? ((0x20000000U 
                                            & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[3U])
                                            ? (((QData)((IData)(
                                                                (1U 
                                                                 & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[6U] 
                                                                    >> 8U)))) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__q_o)))
                                            : (((QData)((IData)(
                                                                ((~ (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__ltu_o)) 
                                                                 & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[6U] 
                                                                    >> 8U)))) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(
                                                                 (((vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[5U] 
                                                                    << 0x00000018U) 
                                                                   | (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U] 
                                                                      >> 8U)) 
                                                                  + vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[0U])))))
                                        : ((0x20000000U 
                                            & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[3U])
                                            ? (((QData)((IData)(
                                                                ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__ltu_o) 
                                                                 & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[6U] 
                                                                    >> 8U)))) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(
                                                                 (((vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[5U] 
                                                                    << 0x00000018U) 
                                                                   | (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U] 
                                                                      >> 8U)) 
                                                                  + vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[0U]))))
                                            : (((QData)((IData)(
                                                                ((~ (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__lt_o)) 
                                                                 & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[6U] 
                                                                    >> 8U)))) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(
                                                                 (((vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[5U] 
                                                                    << 0x00000018U) 
                                                                   | (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U] 
                                                                      >> 8U)) 
                                                                  + vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[0U]))))))
                    : ((0x40000000U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[3U])
                        ? ((0x20000000U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[3U])
                            ? (((QData)((IData)(((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__lt_o) 
                                                 & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[6U] 
                                                    >> 8U)))) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  (((vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[5U] 
                                                                     << 0x00000018U) 
                                                                    | (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U] 
                                                                       >> 8U)) 
                                                                   + vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[0U]))))
                            : (((QData)((IData)(((~ (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__eq_o)) 
                                                 & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[6U] 
                                                    >> 8U)))) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  (((vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[5U] 
                                                                     << 0x00000018U) 
                                                                    | (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U] 
                                                                       >> 8U)) 
                                                                   + vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[0U])))))
                        : ((0x20000000U & vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[3U])
                            ? (((QData)((IData)(((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__eq_o) 
                                                 & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[6U] 
                                                    >> 8U)))) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  (((vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[5U] 
                                                                     << 0x00000018U) 
                                                                    | (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U] 
                                                                       >> 8U)) 
                                                                   + vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[0U]))))
                            : 0ULL))));
    }
}

VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        Vtop___024root____Vm_traceActivitySetAll(vlSelf);
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

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge rst_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vm_traceActivitySetAll\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5726502174457611970ull);
    vlSelf->top__DOT__imem_rsp = VL_SCOPED_RAND_RESET_Q(41, __VscopeHash, 9868612771109274929ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->top__DOT__dmem_req, __VscopeHash, 1665501854511653757ull);
    vlSelf->top__DOT__dmem_rsp = VL_SCOPED_RAND_RESET_Q(41, __VscopeHash, 13732101265992558163ull);
    vlSelf->top__DOT__imem_rsp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6950252463047641076ull);
    vlSelf->top__DOT__dmem_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2595778999086667654ull);
    vlSelf->top__DOT__dmem_req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2705606000187899542ull);
    vlSelf->top__DOT__dmem_rsp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6596106401533796040ull);
    vlSelf->top__DOT__dmem_rsp_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9123194915224263235ull);
    vlSelf->top__DOT__core_inst__DOT__regfile_inst__DOT__rd_data_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12478520074650168972ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__core_inst__DOT__regfile_inst__DOT__regs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3269025013727561489ull);
    }
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10664503502659143065ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_epoch_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5216728364993139664ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_d = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15419667343512955731ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8812475494333294285ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_accepted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14604506532121836870ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17501972518977614664ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_issued_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7311653470911501971ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1923405434870328336ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_pending_q = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 8276358730020436702ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_d, __VscopeHash, 9391997035149458270ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_q, __VscopeHash, 12039387508371825404ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7115977409505408725ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2808078965690132215ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16382560949492410227ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18315521917131671107ull);
    vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_issue = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10571571913781027612ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d, __VscopeHash, 1739590100663501097ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q, __VscopeHash, 760505785146254443ull);
    vlSelf->top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_id_i = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5250163172865278466ull);
    vlSelf->top__DOT__core_inst__DOT__stage_id_inst__DOT__info_id_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1746983209564060701ull);
    VL_SCOPED_RAND_RESET_W(201, vlSelf->top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d, __VscopeHash, 11732739748976844532ull);
    VL_SCOPED_RAND_RESET_W(201, vlSelf->top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q, __VscopeHash, 15697389664737797044ull);
    vlSelf->top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 2015355872773392859ull);
    vlSelf->top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5632297478658224985ull);
    vlSelf->top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 889007777048950819ull);
    vlSelf->top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12920256224106699256ull);
    vlSelf->top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_d = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 7143363836011197884ull);
    vlSelf->top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_q = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 2396050519003168442ull);
    VL_SCOPED_RAND_RESET_W(186, vlSelf->top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_d, __VscopeHash, 2999013589803426378ull);
    VL_SCOPED_RAND_RESET_W(186, vlSelf->top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q, __VscopeHash, 2891063491620517176ull);
    vlSelf->top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8178135503488813248ull);
    vlSelf->top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9593671787650520976ull);
    vlSelf->top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__a_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14640225354084003192ull);
    vlSelf->top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 203074122139593265ull);
    vlSelf->top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__q_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6838026133723308352ull);
    vlSelf->top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__eq_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13265425100672103212ull);
    vlSelf->top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__lt_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17140994322015292022ull);
    vlSelf->top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__ltu_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10769656052363974639ull);
    VL_SCOPED_RAND_RESET_W(186, vlSelf->top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q, __VscopeHash, 6407303929350989460ull);
    vlSelf->top__DOT__core_inst__DOT__stage_mem_inst__DOT__data_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7991086290232695338ull);
    vlSelf->top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__we_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14928532799467723275ull);
    vlSelf->top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__data_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12991262952829944493ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15845286994832833593ull);
    }
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
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst_i__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
