// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_i,0,0);
        CData/*0:0*/ top__DOT__imem_rsp_valid;
        CData/*0:0*/ top__DOT__dmem_req_valid;
        CData/*0:0*/ top__DOT__dmem_req_ready;
        CData/*0:0*/ top__DOT__dmem_rsp_valid;
        CData/*0:0*/ top__DOT__dmem_rsp_ready;
        CData/*3:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i;
        CData/*3:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_epoch_q;
        CData/*3:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_d;
        CData/*3:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_q;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_accepted;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_d;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_q;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_d;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_q;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_issue;
        CData/*2:0*/ top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_id_i;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_id_inst__DOT__info_id_o;
        CData/*2:0*/ top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__eq_o;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__lt_o;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__ltu_o;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__we_i;
        CData/*2:0*/ __Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr_type;
        CData/*3:0*/ __Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_branch_op__1__Vfuncout;
        CData/*2:0*/ __Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_branch_op__1__funct3;
        CData/*3:0*/ __Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op__2__Vfuncout;
        CData/*2:0*/ __Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op__2__funct3;
        CData/*6:0*/ __Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op__2__funct7;
        CData/*1:0*/ __Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__Vfuncout;
        CData/*2:0*/ __Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_store_op__3__funct3;
        CData/*3:0*/ __Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op_imm__4__Vfuncout;
        CData/*2:0*/ __Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op_imm__4__funct3;
        CData/*6:0*/ __Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_alu_op_imm__4__funct7;
        CData/*2:0*/ __Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_load_op__5__Vfuncout;
        CData/*2:0*/ __Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__decode_load_op__5__funct3;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk_i__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_i__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        IData/*31:0*/ top__DOT__core_inst__DOT__regfile_inst__DOT__rd_data_i;
        IData/*31:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_q;
        IData/*31:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_issued_q;
        IData/*31:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_next;
        IData/*19:0*/ top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals;
        IData/*31:0*/ top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs1_data;
        IData/*31:0*/ top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs2_data;
        IData/*31:0*/ top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__a_i;
        IData/*31:0*/ top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i;
        IData/*31:0*/ top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__q_o;
        IData/*31:0*/ top__DOT__core_inst__DOT__stage_mem_inst__DOT__data_out;
        IData/*31:0*/ top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__data_i;
        IData/*31:0*/ __Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__Vfuncout;
        IData/*31:0*/ __Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_1;
        IData/*31:0*/ __VactIterCount;
        QData/*40:0*/ top__DOT__imem_rsp;
        VlWide<3>/*72:0*/ top__DOT__dmem_req;
        QData/*40:0*/ top__DOT__dmem_rsp;
    };
    struct {
        QData/*32:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_pending_q;
        VlWide<3>/*72:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_d;
        VlWide<3>/*72:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_q;
        VlWide<3>/*64:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d;
        VlWide<3>/*64:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q;
        VlWide<7>/*200:0*/ top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d;
        VlWide<7>/*200:0*/ top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q;
        QData/*32:0*/ top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_d;
        QData/*32:0*/ top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_q;
        VlWide<6>/*185:0*/ top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_d;
        VlWide<6>/*185:0*/ top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q;
        VlWide<6>/*185:0*/ top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__core_inst__DOT__regfile_inst__DOT__regs;
        VlUnpacked<IData/*31:0*/, 256> top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__mem;
        VlUnpacked<IData/*31:0*/, 65536> top__DOT__rom_inst__DOT__mem;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
