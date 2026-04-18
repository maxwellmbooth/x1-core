// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<6>/*191:0*/ __Vtemp_13;
    VlWide<6>/*191:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_25;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,((1U & (~ ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i) 
                                       >> 1U)))));
        bufp->chgCData(oldp+1,((0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                                               >> 0x0000000fU))),5);
        bufp->chgCData(oldp+2,((0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                                               >> 0x00000014U))),5);
        bufp->chgCData(oldp+3,((0x0000001fU & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[3U])),5);
        bufp->chgIData(oldp+4,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rd_data_i),32);
        bufp->chgBit(oldp+5,(((vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[3U] 
                               >> 6U) & (vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[5U] 
                                         >> 0x00000019U))));
        bufp->chgIData(oldp+6,(((0U == (0x0000001fU 
                                        & (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                                           >> 0x0000000fU)))
                                 ? 0U : vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs
                                [(0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                                                 >> 0x0000000fU))])),32);
        bufp->chgIData(oldp+7,(((0U == (0x0000001fU 
                                        & (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                                           >> 0x00000014U)))
                                 ? 0U : vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs
                                [(0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                                                 >> 0x00000014U))])),32);
        bufp->chgQData(oldp+8,(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_q),33);
        bufp->chgWData(oldp+10,(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q),65);
        bufp->chgCData(oldp+13,(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i),4);
        bufp->chgBit(oldp+14,(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_q));
        bufp->chgWData(oldp+15,(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q),201);
        bufp->chgCData(oldp+22,(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_id_i),3);
        bufp->chgBit(oldp+23,(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__info_id_o));
        bufp->chgWData(oldp+24,(vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q),186);
        bufp->chgBit(oldp+30,((1U & (vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[5U] 
                                     >> 0x00000019U))));
        bufp->chgIData(oldp+31,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[0]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[1]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[2]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[3]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[4]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[5]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[6]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[7]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[8]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[9]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[10]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[11]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[12]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[13]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[14]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[15]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[16]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[17]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[18]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[19]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[20]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[21]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[22]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[23]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[24]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[25]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[26]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[27]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[28]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[29]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[30]),32);
        bufp->chgIData(oldp+62,(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__regs[31]),32);
        bufp->chgCData(oldp+63,((0x0000000fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U] 
                                                >> 1U))),4);
        bufp->chgWData(oldp+64,(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d),201);
        bufp->chgIData(oldp+71,(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals),20);
        bufp->chgCData(oldp+72,(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type),3);
        bufp->chgBit(oldp+73,(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise));
        bufp->chgBit(oldp+74,(vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal));
        bufp->chgCData(oldp+75,((0x0000007fU & vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U])),7);
        bufp->chgCData(oldp+76,((7U & (vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                                       >> 0x0000000cU))),3);
        bufp->chgCData(oldp+77,((vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q[1U] 
                                 >> 0x00000019U)),7);
        bufp->chgCData(oldp+78,(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_epoch_q),4);
        bufp->chgCData(oldp+79,(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_q),4);
        bufp->chgIData(oldp+80,(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_q),32);
        bufp->chgIData(oldp+81,(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_issued_q),32);
        bufp->chgBit(oldp+82,((1U & (~ ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i) 
                                        >> 3U)))));
        bufp->chgQData(oldp+83,(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_pending_q),33);
        bufp->chgIData(oldp+85,(((0x00000800U & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[3U])
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
                                              << 8U) 
                                             | (0x000000ffU 
                                                & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[0U]))
                                          : 0U)))),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[3U])))) {
        __Vtemp_2[0U] = (((IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rd_data_i)))) 
                          << 2U) | ((2U & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[5U] 
                                           >> 0x00000018U)) 
                                    | (1U & (vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[5U] 
                                             >> 0x00000019U))));
        __Vtemp_2[1U] = (((IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rd_data_i)))) 
                          >> 0x0000001eU) | ((IData)(
                                                     ((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rd_data_i))) 
                                                      >> 0x00000020U)) 
                                             << 2U));
        __Vtemp_2[2U] = ((((0x00000400U & ((IData)(
                                                   (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_q 
                                                    >> 0x00000020U)) 
                                           << 0x0000000aU)) 
                           | ((0x000003e0U & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[2U] 
                                              << 5U)) 
                              | (0x0000001fU & vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q[3U]))) 
                          << 2U) | ((IData)(((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                               << 0x00000020U) 
                                              | (QData)((IData)(vlSelfRef.top__DOT__core_inst__DOT__regfile_inst__DOT__rd_data_i))) 
                                             >> 0x00000020U)) 
                                    >> 0x0000001eU));
        bufp->chgWData(oldp+86,(__Vtemp_2),77);
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
                                  << 0x00000011U) | 
                                 (0x0001ffe0U & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[4U] 
                                                 >> 0x0000000fU))));
            __Vtemp_13[5U] = ((0x0000001fU & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[5U] 
                                              >> 0x0000000fU)) 
                              | (0x03ffffe0U & ((vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[6U] 
                                                 << 0x00000011U) 
                                                | (0x0001ffe0U 
                                                   & (vlSelfRef.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q[5U] 
                                                      >> 0x0000000fU)))));
        }
        bufp->chgWData(oldp+89,(__Vtemp_13),186);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgQData(oldp+95,(vlSelfRef.top__DOT__imem_rsp),41);
        bufp->chgBit(oldp+97,(vlSelfRef.top__DOT__imem_rsp_valid));
        bufp->chgIData(oldp+98,(vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__data_out),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity[3U])))) {
        __Vtemp_21[0U] = vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__data_out;
        __Vtemp_21[1U] = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[0U];
        __Vtemp_21[2U] = vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[1U];
        __Vtemp_21[3U] = ((0xffffffe0U & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[3U]) 
                          | (0x0000001fU & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[2U]));
        __Vtemp_21[4U] = ((0x0000001fU & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[4U]) 
                          | (0xffffffe0U & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[4U]));
        __Vtemp_21[5U] = ((0x0000001fU & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[5U]) 
                          | (0x03ffffe0U & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[5U]));
        bufp->chgWData(oldp+99,(__Vtemp_21),186);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgWData(oldp+105,(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_q),73);
        bufp->chgBit(oldp+108,(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_q));
        bufp->chgWData(oldp+109,(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q),186);
        bufp->chgQData(oldp+115,((((QData)((IData)(
                                                   (1U 
                                                    & (vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[5U] 
                                                       >> 0x00000019U)))) 
                                   << 0x00000025U) 
                                  | (((QData)((IData)(
                                                      (0x0000001fU 
                                                       & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[2U]))) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))))),38);
        bufp->chgQData(oldp+117,(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_d),33);
        bufp->chgIData(oldp+119,(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__a_i),32);
        bufp->chgIData(oldp+120,(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i),32);
        bufp->chgIData(oldp+121,(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__q_o),32);
        bufp->chgBit(oldp+122,(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__eq_o));
        bufp->chgBit(oldp+123,(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__lt_o));
        bufp->chgBit(oldp+124,(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__ltu_o));
        bufp->chgIData(oldp+125,(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs1_data),32);
        bufp->chgIData(oldp+126,(vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs2_data),32);
        bufp->chgIData(oldp+127,(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_next),32);
        bufp->chgBit(oldp+128,(vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__we_i));
        bufp->chgIData(oldp+129,(vlSelfRef.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__data_i),32);
        bufp->chgCData(oldp+130,((0x000000ffU & vlSelfRef.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q[0U])),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+131,(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_accepted));
        bufp->chgBit(oldp+132,(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_d));
        bufp->chgBit(oldp+133,(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_issue));
        bufp->chgWData(oldp+134,(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d),65);
    }
    bufp->chgBit(oldp+137,(vlSelfRef.clk_i));
    bufp->chgBit(oldp+138,(vlSelfRef.rst_i));
    bufp->chgCData(oldp+139,((0x0000000fU & ((IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_q) 
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
    bufp->chgWData(oldp+140,(__Vtemp_25),73);
    bufp->chgBit(oldp+143,(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_issue));
    bufp->chgBit(oldp+144,((1U & ((~ (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_q)) 
                                  | (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_accepted)))));
    bufp->chgBit(oldp+145,(((0x0000000fU & (IData)(
                                                   (vlSelfRef.top__DOT__imem_rsp 
                                                    >> 0x00000025U))) 
                            == (IData)(vlSelfRef.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_epoch_q))));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
