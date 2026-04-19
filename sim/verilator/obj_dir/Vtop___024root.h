// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
class Vtop___024unit;
class Vtop_common_pkg;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;
    Vtop_common_pkg* __PVT__common_pkg;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_i,0,0);
        CData/*0:0*/ top__DOT__clk_i;
        CData/*0:0*/ top__DOT__rst_i;
        CData/*0:0*/ top__DOT__imem_req_valid;
        CData/*0:0*/ top__DOT__imem_req_ready;
        CData/*0:0*/ top__DOT__imem_rsp_valid;
        CData/*0:0*/ top__DOT__imem_rsp_ready;
        CData/*0:0*/ top__DOT__dmem_req_valid;
        CData/*0:0*/ top__DOT__dmem_req_ready;
        CData/*0:0*/ top__DOT__dmem_rsp_valid;
        CData/*0:0*/ top__DOT__dmem_rsp_ready;
        CData/*0:0*/ top__DOT__core_inst__DOT__clk_i;
        CData/*0:0*/ top__DOT__core_inst__DOT__rst_i;
        CData/*0:0*/ top__DOT__core_inst__DOT__imem_rsp_valid_i;
        CData/*0:0*/ top__DOT__core_inst__DOT__imem_req_ready_i;
        CData/*0:0*/ top__DOT__core_inst__DOT__imem_req_valid_o;
        CData/*0:0*/ top__DOT__core_inst__DOT__imem_rsp_ready_o;
        CData/*4:0*/ top__DOT__core_inst__DOT__rs1_addr;
        CData/*4:0*/ top__DOT__core_inst__DOT__rs2_addr;
        CData/*4:0*/ top__DOT__core_inst__DOT__rd_addr;
        CData/*0:0*/ top__DOT__core_inst__DOT__rd_we;
        CData/*3:0*/ top__DOT__core_inst__DOT__ctrl_if;
        CData/*0:0*/ top__DOT__core_inst__DOT__info_if;
        CData/*2:0*/ top__DOT__core_inst__DOT__ctrl_id;
        CData/*0:0*/ top__DOT__core_inst__DOT__info_id;
        CData/*0:0*/ top__DOT__core_inst__DOT__ctrl_mem;
        CData/*0:0*/ top__DOT__core_inst__DOT__info_wb;
        CData/*0:0*/ top__DOT__core_inst__DOT__regfile_inst__DOT__clk_i;
        CData/*0:0*/ top__DOT__core_inst__DOT__regfile_inst__DOT__rst_i;
        CData/*4:0*/ top__DOT__core_inst__DOT__regfile_inst__DOT__rs1_addr_i;
        CData/*4:0*/ top__DOT__core_inst__DOT__regfile_inst__DOT__rs2_addr_i;
        CData/*4:0*/ top__DOT__core_inst__DOT__regfile_inst__DOT__rd_addr_i;
        CData/*0:0*/ top__DOT__core_inst__DOT__regfile_inst__DOT__rd_we_i;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__clk_i;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__rst_i;
        CData/*3:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_valid_i;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_ready_i;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_o;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_ready_o;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__info_if_o;
        CData/*3:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_epoch_q;
        CData/*3:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_d;
        CData/*3:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_q;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_accepted;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_accepted;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_we;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_d;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_q;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_d;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_q;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_has_space;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_issue;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_epoch_match;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__clk_i;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__rst_i;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__pc_we_i;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_id_inst__DOT__clk_i;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_id_inst__DOT__rst_i;
        CData/*2:0*/ top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_id_i;
        CData/*4:0*/ top__DOT__core_inst__DOT__stage_id_inst__DOT__rs1_addr_o;
        CData/*4:0*/ top__DOT__core_inst__DOT__stage_id_inst__DOT__rs2_addr_o;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_id_inst__DOT__info_id_o;
    };
    struct {
        CData/*2:0*/ top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal;
        CData/*6:0*/ top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i;
        CData/*2:0*/ top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__funct3_i;
        CData/*6:0*/ top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__funct7_i;
        CData/*2:0*/ top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_ex_inst__DOT__clk_i;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_ex_inst__DOT__rst_i;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_eq;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_lt;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_ltu;
        CData/*3:0*/ top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__op_i;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__eq_o;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__lt_o;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__ltu_o;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_mem_inst__DOT__clk_i;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_mem_inst__DOT__rst_i;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_mem_inst__DOT__ctrl_mem_i;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_we;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__clk_i;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__we_i;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_wb_inst__DOT__clk;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_wb_inst__DOT__rst;
        CData/*4:0*/ top__DOT__core_inst__DOT__stage_wb_inst__DOT__rd_addr_o;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_wb_inst__DOT__rd_we_o;
        CData/*0:0*/ top__DOT__core_inst__DOT__stage_wb_inst__DOT__info_wb_o;
        CData/*0:0*/ top__DOT__rom_inst__DOT__clk_i;
        CData/*0:0*/ top__DOT__rom_inst__DOT__mem_req_valid_i;
        CData/*0:0*/ top__DOT__rom_inst__DOT__mem_rsp_ready_i;
        CData/*0:0*/ top__DOT__rom_inst__DOT__mem_rsp_valid_o;
        CData/*0:0*/ top__DOT__rom_inst__DOT__mem_req_ready_o;
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
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __VicoDidInit;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_ex_inst__DOT__clk_i__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_ex_inst__DOT__rst_i__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__regfile_inst__DOT__clk_i__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__regfile_inst__DOT__rst_i__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_if_inst__DOT__clk_i__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_if_inst__DOT__rst_i__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__clk_i__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__rst_i__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_id_inst__DOT__clk_i__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_id_inst__DOT__rst_i__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_mem_inst__DOT__clk_i__0;
    };
    struct {
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_mem_inst__DOT__rst_i__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__clk_i__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__rom_inst__DOT__clk_i__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        IData/*31:0*/ top__DOT__core_inst__DOT__rd_data;
        IData/*31:0*/ top__DOT__core_inst__DOT__rs1_data;
        IData/*31:0*/ top__DOT__core_inst__DOT__rs2_data;
        IData/*31:0*/ top__DOT__core_inst__DOT__regfile_inst__DOT__rd_data_i;
        IData/*31:0*/ top__DOT__core_inst__DOT__regfile_inst__DOT__rs1_data;
        IData/*31:0*/ top__DOT__core_inst__DOT__regfile_inst__DOT__rs2_data;
        IData/*31:0*/ top__DOT__core_inst__DOT__regfile_inst__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_q;
        IData/*31:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_issued_q;
        IData/*31:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_next;
        IData/*31:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__pc_next_i;
        IData/*31:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__pc_o;
        IData/*31:0*/ top__DOT__core_inst__DOT__stage_id_inst__DOT__rs1_data_i;
        IData/*31:0*/ top__DOT__core_inst__DOT__stage_id_inst__DOT__rs2_data_i;
        IData/*19:0*/ top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals;
        IData/*19:0*/ top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o;
        IData/*31:0*/ top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_a;
        IData/*31:0*/ top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_b;
        IData/*31:0*/ top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_q;
        IData/*31:0*/ top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs1_data;
        IData/*31:0*/ top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs2_data;
        IData/*31:0*/ top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__a_i;
        IData/*31:0*/ top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i;
        IData/*31:0*/ top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__q_o;
        IData/*31:0*/ top__DOT__core_inst__DOT__stage_mem_inst__DOT__data_in;
        IData/*31:0*/ top__DOT__core_inst__DOT__stage_mem_inst__DOT__data_out;
        IData/*31:0*/ top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__addr_i;
        IData/*31:0*/ top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__data_i;
        IData/*31:0*/ top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__data_o;
        IData/*31:0*/ top__DOT__core_inst__DOT__stage_wb_inst__DOT__rd_data_o;
        IData/*31:0*/ top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_data;
        IData/*31:0*/ __Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__Vfuncout;
        IData/*31:0*/ __Vfunc_top__DOT__core_inst__DOT__stage_id_inst__DOT__imm_gen__0__instr;
        IData/*31:0*/ __Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i__1;
        IData/*31:0*/ __VactIterCount;
        VlWide<3>/*72:0*/ top__DOT__imem_req;
        QData/*40:0*/ top__DOT__imem_rsp;
        VlWide<3>/*72:0*/ top__DOT__dmem_req;
        QData/*40:0*/ top__DOT__dmem_rsp;
        QData/*40:0*/ top__DOT__core_inst__DOT__imem_rsp_i;
        QData/*40:0*/ top__DOT__core_inst__DOT__dmem_rsp_i;
        VlWide<3>/*72:0*/ top__DOT__core_inst__DOT__imem_req_o;
        VlWide<3>/*72:0*/ top__DOT__core_inst__DOT__dmem_req_o;
        QData/*32:0*/ top__DOT__core_inst__DOT__pc_redirect;
        VlWide<3>/*64:0*/ top__DOT__core_inst__DOT__if_id;
        VlWide<7>/*200:0*/ top__DOT__core_inst__DOT__id_ex;
        VlWide<6>/*185:0*/ top__DOT__core_inst__DOT__ex_mem;
        VlWide<3>/*76:0*/ top__DOT__core_inst__DOT__ctrl_ex;
        VlWide<6>/*185:0*/ top__DOT__core_inst__DOT__mem_wb;
        QData/*37:0*/ top__DOT__core_inst__DOT__info_mem;
        QData/*40:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_i;
        QData/*32:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_i;
        VlWide<3>/*72:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_o;
        VlWide<3>/*64:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_o;
        QData/*32:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_pending_q;
        VlWide<3>/*72:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_d;
        VlWide<3>/*72:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_q;
    };
    struct {
        VlWide<3>/*64:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d;
        VlWide<3>/*64:0*/ top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q;
        VlWide<3>/*64:0*/ top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i;
        VlWide<7>/*200:0*/ top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_o;
        VlWide<7>/*200:0*/ top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d;
        VlWide<7>/*200:0*/ top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q;
        VlWide<3>/*76:0*/ top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i;
        VlWide<7>/*200:0*/ top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i;
        QData/*32:0*/ top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_o;
        VlWide<6>/*185:0*/ top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_o;
        QData/*32:0*/ top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_d;
        QData/*32:0*/ top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_q;
        VlWide<6>/*185:0*/ top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_d;
        VlWide<6>/*185:0*/ top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q;
        VlWide<6>/*185:0*/ top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i;
        QData/*40:0*/ top__DOT__core_inst__DOT__stage_mem_inst__DOT__dmem_rsp_i;
        VlWide<3>/*72:0*/ top__DOT__core_inst__DOT__stage_mem_inst__DOT__dmem_req_o;
        QData/*37:0*/ top__DOT__core_inst__DOT__stage_mem_inst__DOT__info_mem_o;
        VlWide<6>/*185:0*/ top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_o;
        VlWide<6>/*185:0*/ top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_d;
        VlWide<6>/*185:0*/ top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q;
        VlWide<6>/*185:0*/ top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i;
        VlWide<3>/*72:0*/ top__DOT__rom_inst__DOT__mem_req_i;
        QData/*40:0*/ top__DOT__rom_inst__DOT__mem_rsp_o;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__core_inst__DOT__regfile_inst__DOT__regs;
        VlUnpacked<IData/*31:0*/, 65536> top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__mem;
        VlUnpacked<IData/*31:0*/, 65536> top__DOT__rom_inst__DOT__mem;
        VlUnpacked<QData/*63:0*/, 2> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 2> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    VlNBACommitQueue<VlUnpacked<IData/*31:0*/, 32>, false, IData/*31:0*/, 1> __VdlyCommitQueuetop__DOT__core_inst__DOT__regfile_inst__DOT__regs;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static const std::string top__DOT__HEX_FILE;
    static const std::string top__DOT__rom_inst__DOT__HEX_FILE;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
