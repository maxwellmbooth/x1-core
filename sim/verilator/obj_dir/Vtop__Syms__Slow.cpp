// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(416);
    // Setup sub module instances
    TOP____024unit.ctor(this, "$unit");
    TOP__common_pkg.ctor(this, "common_pkg");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    TOP.__PVT__common_pkg = &TOP__common_pkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    TOP__common_pkg.__Vconfigure(true);
    // Setup scopes
    __Vscopep_TOP = new VerilatedScope{this, "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    __Vscopep___024unit = new VerilatedScope{this, "$unit", "$unit", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    __Vscopep_common_pkg = new VerilatedScope{this, "common_pkg", "common_pkg", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    __Vscopep_top = new VerilatedScope{this, "top", "top", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    __Vscopep_top__core_inst = new VerilatedScope{this, "top.core_inst", "core_inst", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    __Vscopep_top__core_inst__regfile_inst = new VerilatedScope{this, "top.core_inst.regfile_inst", "regfile_inst", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    __Vscopep_top__core_inst__regfile_inst__unnamedblk1 = new VerilatedScope{this, "top.core_inst.regfile_inst.unnamedblk1", "unnamedblk1", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    __Vscopep_top__core_inst__stage_ex_inst = new VerilatedScope{this, "top.core_inst.stage_ex_inst", "stage_ex_inst", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    __Vscopep_top__core_inst__stage_ex_inst__alu_inst = new VerilatedScope{this, "top.core_inst.stage_ex_inst.alu_inst", "alu_inst", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    __Vscopep_top__core_inst__stage_id_inst = new VerilatedScope{this, "top.core_inst.stage_id_inst", "stage_id_inst", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    __Vscopep_top__core_inst__stage_id_inst__control_unit_inst = new VerilatedScope{this, "top.core_inst.stage_id_inst.control_unit_inst", "control_unit_inst", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    __Vscopep_top__core_inst__stage_id_inst__control_unit_inst__decode_store_op = new VerilatedScope{this, "top.core_inst.stage_id_inst.control_unit_inst.decode_store_op", "decode_store_op", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_top__core_inst__stage_if_inst = new VerilatedScope{this, "top.core_inst.stage_if_inst", "stage_if_inst", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    __Vscopep_top__core_inst__stage_if_inst__program_counter_inst = new VerilatedScope{this, "top.core_inst.stage_if_inst.program_counter_inst", "program_counter_inst", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    __Vscopep_top__core_inst__stage_mem_inst = new VerilatedScope{this, "top.core_inst.stage_mem_inst", "stage_mem_inst", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    __Vscopep_top__core_inst__stage_mem_inst__ram_inst = new VerilatedScope{this, "top.core_inst.stage_mem_inst.ram_inst", "ram_inst", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    __Vscopep_top__core_inst__stage_wb_inst = new VerilatedScope{this, "top.core_inst.stage_wb_inst", "stage_wb_inst", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    __Vscopep_top__rom_inst = new VerilatedScope{this, "top.rom_inst", "rom_inst", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_TOP->varInsert("clk_i", &(TOP.clk_i), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("rst_i", &(TOP.rst_i), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep___024unit->varInsert("RAM_ADDR_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.RAM_ADDR_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep___024unit->varInsert("RAM_DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.RAM_DATA_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep___024unit->varInsert("RAM_DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.RAM_DEPTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep___024unit->varInsert("ROM_ADDR_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.ROM_ADDR_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep___024unit->varInsert("ROM_DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.ROM_DATA_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep___024unit->varInsert("ROM_DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.ROM_DEPTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_common_pkg->varInsert("PC_RESET", const_cast<void*>(static_cast<const void*>(&(TOP__common_pkg.PC_RESET))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_common_pkg->varInsert("XLEN", const_cast<void*>(static_cast<const void*>(&(TOP__common_pkg.XLEN))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_top->varInsert("HEX_FILE", const_cast<void*>(static_cast<const void*>(TOP.top__DOT__HEX_FILE.c_str())), true, VLVT_STRING, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top->varInsert("clk_i", &(TOP.top__DOT__clk_i), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top->varInsert("dmem_req", &(TOP.top__DOT__dmem_req), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,72,0);
    __Vscopep_top->varInsert("dmem_req_ready", &(TOP.top__DOT__dmem_req_ready), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top->varInsert("dmem_req_valid", &(TOP.top__DOT__dmem_req_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top->varInsert("dmem_rsp", &(TOP.top__DOT__dmem_rsp), false, VLVT_UINT64, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,40,0);
    __Vscopep_top->varInsert("dmem_rsp_ready", &(TOP.top__DOT__dmem_rsp_ready), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top->varInsert("dmem_rsp_valid", &(TOP.top__DOT__dmem_rsp_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top->varInsert("imem_req", &(TOP.top__DOT__imem_req), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,72,0);
    __Vscopep_top->varInsert("imem_req_ready", &(TOP.top__DOT__imem_req_ready), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top->varInsert("imem_req_valid", &(TOP.top__DOT__imem_req_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top->varInsert("imem_rsp", &(TOP.top__DOT__imem_rsp), false, VLVT_UINT64, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,40,0);
    __Vscopep_top->varInsert("imem_rsp_ready", &(TOP.top__DOT__imem_rsp_ready), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top->varInsert("imem_rsp_valid", &(TOP.top__DOT__imem_rsp_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top->varInsert("rst_i", &(TOP.top__DOT__rst_i), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst->varInsert("clk_i", &(TOP.top__DOT__core_inst__DOT__clk_i), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst->varInsert("ctrl_ex", &(TOP.top__DOT__core_inst__DOT__ctrl_ex), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,76,0);
    __Vscopep_top__core_inst->varInsert("ctrl_id", &(TOP.top__DOT__core_inst__DOT__ctrl_id), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_top__core_inst->varInsert("ctrl_if", &(TOP.top__DOT__core_inst__DOT__ctrl_if), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_top__core_inst->varInsert("ctrl_mem", &(TOP.top__DOT__core_inst__DOT__ctrl_mem), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,0,0);
    __Vscopep_top__core_inst->varInsert("dmem_req_o", &(TOP.top__DOT__core_inst__DOT__dmem_req_o), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,72,0);
    __Vscopep_top__core_inst->varInsert("dmem_rsp_i", &(TOP.top__DOT__core_inst__DOT__dmem_rsp_i), false, VLVT_UINT64, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,40,0);
    __Vscopep_top__core_inst->varInsert("ex_mem", &(TOP.top__DOT__core_inst__DOT__ex_mem), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,185,0);
    __Vscopep_top__core_inst->varInsert("id_ex", &(TOP.top__DOT__core_inst__DOT__id_ex), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,200,0);
    __Vscopep_top__core_inst->varInsert("if_id", &(TOP.top__DOT__core_inst__DOT__if_id), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,64,0);
    __Vscopep_top__core_inst->varInsert("imem_req_o", &(TOP.top__DOT__core_inst__DOT__imem_req_o), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,72,0);
    __Vscopep_top__core_inst->varInsert("imem_req_ready_i", &(TOP.top__DOT__core_inst__DOT__imem_req_ready_i), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst->varInsert("imem_req_valid_o", &(TOP.top__DOT__core_inst__DOT__imem_req_valid_o), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst->varInsert("imem_rsp_i", &(TOP.top__DOT__core_inst__DOT__imem_rsp_i), false, VLVT_UINT64, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,40,0);
    __Vscopep_top__core_inst->varInsert("imem_rsp_ready_o", &(TOP.top__DOT__core_inst__DOT__imem_rsp_ready_o), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst->varInsert("imem_rsp_valid_i", &(TOP.top__DOT__core_inst__DOT__imem_rsp_valid_i), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst->varInsert("info_id", &(TOP.top__DOT__core_inst__DOT__info_id), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,0,0);
    __Vscopep_top__core_inst->varInsert("info_if", &(TOP.top__DOT__core_inst__DOT__info_if), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,0,0);
    __Vscopep_top__core_inst->varInsert("info_mem", &(TOP.top__DOT__core_inst__DOT__info_mem), false, VLVT_UINT64, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,37,0);
    __Vscopep_top__core_inst->varInsert("info_wb", &(TOP.top__DOT__core_inst__DOT__info_wb), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,0,0);
    __Vscopep_top__core_inst->varInsert("mem_wb", &(TOP.top__DOT__core_inst__DOT__mem_wb), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,185,0);
    __Vscopep_top__core_inst->varInsert("pc_redirect", &(TOP.top__DOT__core_inst__DOT__pc_redirect), false, VLVT_UINT64, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,32,0);
    __Vscopep_top__core_inst->varInsert("rd_addr", &(TOP.top__DOT__core_inst__DOT__rd_addr), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_top__core_inst->varInsert("rd_data", &(TOP.top__DOT__core_inst__DOT__rd_data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_top__core_inst->varInsert("rd_we", &(TOP.top__DOT__core_inst__DOT__rd_we), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst->varInsert("rs1_addr", &(TOP.top__DOT__core_inst__DOT__rs1_addr), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_top__core_inst->varInsert("rs1_data", &(TOP.top__DOT__core_inst__DOT__rs1_data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_top__core_inst->varInsert("rs2_addr", &(TOP.top__DOT__core_inst__DOT__rs2_addr), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_top__core_inst->varInsert("rs2_data", &(TOP.top__DOT__core_inst__DOT__rs2_data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_top__core_inst->varInsert("rst_i", &(TOP.top__DOT__core_inst__DOT__rst_i), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst__regfile_inst->varInsert("clk_i", &(TOP.top__DOT__core_inst__DOT__regfile_inst__DOT__clk_i), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst__regfile_inst->varInsert("rd_addr_i", &(TOP.top__DOT__core_inst__DOT__regfile_inst__DOT__rd_addr_i), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_top__core_inst__regfile_inst->varInsert("rd_data_i", &(TOP.top__DOT__core_inst__DOT__regfile_inst__DOT__rd_data_i), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_top__core_inst__regfile_inst->varInsert("rd_we_i", &(TOP.top__DOT__core_inst__DOT__regfile_inst__DOT__rd_we_i), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst__regfile_inst->varInsert("regs", &(TOP.top__DOT__core_inst__DOT__regfile_inst__DOT__regs), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,0,31 ,31,0);
    __Vscopep_top__core_inst__regfile_inst->varInsert("rs1_addr_i", &(TOP.top__DOT__core_inst__DOT__regfile_inst__DOT__rs1_addr_i), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_top__core_inst__regfile_inst->varInsert("rs1_data", &(TOP.top__DOT__core_inst__DOT__regfile_inst__DOT__rs1_data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,31,0);
    __Vscopep_top__core_inst__regfile_inst->varInsert("rs2_addr_i", &(TOP.top__DOT__core_inst__DOT__regfile_inst__DOT__rs2_addr_i), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_top__core_inst__regfile_inst->varInsert("rs2_data", &(TOP.top__DOT__core_inst__DOT__regfile_inst__DOT__rs2_data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,31,0);
    __Vscopep_top__core_inst__regfile_inst->varInsert("rst_i", &(TOP.top__DOT__core_inst__DOT__regfile_inst__DOT__rst_i), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst__regfile_inst__unnamedblk1->varInsert("i", &(TOP.top__DOT__core_inst__DOT__regfile_inst__DOT__unnamedblk1__DOT__i), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_top__core_inst__stage_ex_inst->varInsert("alu_a", &(TOP.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_a), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_top__core_inst__stage_ex_inst->varInsert("alu_b", &(TOP.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_b), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_top__core_inst__stage_ex_inst->varInsert("alu_eq", &(TOP.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_eq), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst__stage_ex_inst->varInsert("alu_lt", &(TOP.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_lt), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst__stage_ex_inst->varInsert("alu_ltu", &(TOP.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_ltu), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst__stage_ex_inst->varInsert("alu_q", &(TOP.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_q), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_top__core_inst__stage_ex_inst->varInsert("clk_i", &(TOP.top__DOT__core_inst__DOT__stage_ex_inst__DOT__clk_i), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst__stage_ex_inst->varInsert("ctrl_ex_i", &(TOP.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ctrl_ex_i), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,76,0);
    __Vscopep_top__core_inst__stage_ex_inst->varInsert("ex_mem_d", &(TOP.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_d), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,185,0);
    __Vscopep_top__core_inst__stage_ex_inst->varInsert("ex_mem_o", &(TOP.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_o), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,185,0);
    __Vscopep_top__core_inst__stage_ex_inst->varInsert("ex_mem_q", &(TOP.top__DOT__core_inst__DOT__stage_ex_inst__DOT__ex_mem_q), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,185,0);
    __Vscopep_top__core_inst__stage_ex_inst->varInsert("id_ex_i", &(TOP.top__DOT__core_inst__DOT__stage_ex_inst__DOT__id_ex_i), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,200,0);
    __Vscopep_top__core_inst__stage_ex_inst->varInsert("pc_redirect_d", &(TOP.top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_d), false, VLVT_UINT64, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,32,0);
    __Vscopep_top__core_inst__stage_ex_inst->varInsert("pc_redirect_o", &(TOP.top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_o), false, VLVT_UINT64, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,32,0);
    __Vscopep_top__core_inst__stage_ex_inst->varInsert("pc_redirect_q", &(TOP.top__DOT__core_inst__DOT__stage_ex_inst__DOT__pc_redirect_q), false, VLVT_UINT64, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,32,0);
    __Vscopep_top__core_inst__stage_ex_inst->varInsert("rs1_data", &(TOP.top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs1_data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_top__core_inst__stage_ex_inst->varInsert("rs2_data", &(TOP.top__DOT__core_inst__DOT__stage_ex_inst__DOT__rs2_data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_top__core_inst__stage_ex_inst->varInsert("rst_i", &(TOP.top__DOT__core_inst__DOT__stage_ex_inst__DOT__rst_i), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst__stage_ex_inst__alu_inst->varInsert("a_i", &(TOP.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__a_i), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_top__core_inst__stage_ex_inst__alu_inst->varInsert("b_i", &(TOP.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__b_i), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_top__core_inst__stage_ex_inst__alu_inst->varInsert("eq_o", &(TOP.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__eq_o), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_top__core_inst__stage_ex_inst__alu_inst->varInsert("lt_o", &(TOP.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__lt_o), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_top__core_inst__stage_ex_inst__alu_inst->varInsert("ltu_o", &(TOP.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__ltu_o), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_top__core_inst__stage_ex_inst__alu_inst->varInsert("op_i", &(TOP.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__op_i), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_top__core_inst__stage_ex_inst__alu_inst->varInsert("q_o", &(TOP.top__DOT__core_inst__DOT__stage_ex_inst__DOT__alu_inst__DOT__q_o), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_top__core_inst__stage_id_inst->varInsert("clk_i", &(TOP.top__DOT__core_inst__DOT__stage_id_inst__DOT__clk_i), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst__stage_id_inst->varInsert("ctrl_id_i", &(TOP.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_id_i), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_top__core_inst__stage_id_inst->varInsert("ctrl_signals", &(TOP.top__DOT__core_inst__DOT__stage_id_inst__DOT__ctrl_signals), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,19,0);
    __Vscopep_top__core_inst__stage_id_inst->varInsert("eraise", &(TOP.top__DOT__core_inst__DOT__stage_id_inst__DOT__eraise), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst__stage_id_inst->varInsert("id_ex_d", &(TOP.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_d), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,200,0);
    __Vscopep_top__core_inst__stage_id_inst->varInsert("id_ex_o", &(TOP.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_o), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,200,0);
    __Vscopep_top__core_inst__stage_id_inst->varInsert("id_ex_q", &(TOP.top__DOT__core_inst__DOT__stage_id_inst__DOT__id_ex_q), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,200,0);
    __Vscopep_top__core_inst__stage_id_inst->varInsert("if_id_i", &(TOP.top__DOT__core_inst__DOT__stage_id_inst__DOT__if_id_i), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,64,0);
    __Vscopep_top__core_inst__stage_id_inst->varInsert("illegal", &(TOP.top__DOT__core_inst__DOT__stage_id_inst__DOT__illegal), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst__stage_id_inst->varInsert("info_id_o", &(TOP.top__DOT__core_inst__DOT__stage_id_inst__DOT__info_id_o), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,0,0);
    __Vscopep_top__core_inst__stage_id_inst->varInsert("instr_type", &(TOP.top__DOT__core_inst__DOT__stage_id_inst__DOT__instr_type), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_top__core_inst__stage_id_inst->varInsert("rs1_addr_o", &(TOP.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs1_addr_o), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,4,0);
    __Vscopep_top__core_inst__stage_id_inst->varInsert("rs1_data_i", &(TOP.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs1_data_i), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_top__core_inst__stage_id_inst->varInsert("rs2_addr_o", &(TOP.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs2_addr_o), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,4,0);
    __Vscopep_top__core_inst__stage_id_inst->varInsert("rs2_data_i", &(TOP.top__DOT__core_inst__DOT__stage_id_inst__DOT__rs2_data_i), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_top__core_inst__stage_id_inst->varInsert("rst_i", &(TOP.top__DOT__core_inst__DOT__stage_id_inst__DOT__rst_i), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst__stage_id_inst__control_unit_inst->varInsert("ctrl_signals_o", &(TOP.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__ctrl_signals_o), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,19,0);
    __Vscopep_top__core_inst__stage_id_inst__control_unit_inst->varInsert("eraise_o", &(TOP.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__eraise_o), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst__stage_id_inst__control_unit_inst->varInsert("funct3_i", &(TOP.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__funct3_i), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_top__core_inst__stage_id_inst__control_unit_inst->varInsert("funct7_i", &(TOP.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__funct7_i), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,6,0);
    __Vscopep_top__core_inst__stage_id_inst__control_unit_inst->varInsert("illegal_o", &(TOP.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__illegal_o), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst__stage_id_inst__control_unit_inst->varInsert("instr_type_o", &(TOP.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__instr_type_o), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_top__core_inst__stage_id_inst__control_unit_inst->varInsert("opcode_i", &(TOP.top__DOT__core_inst__DOT__stage_id_inst__DOT__control_unit_inst__DOT__opcode_i), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,6,0);
    __Vscopep_top__core_inst__stage_if_inst->varInsert("clk_i", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__clk_i), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst__stage_if_inst->varInsert("ctrl_if_i", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__ctrl_if_i), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_top__core_inst__stage_if_inst->varInsert("fetch_epoch_q", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_epoch_q), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_top__core_inst__stage_if_inst->varInsert("fetch_id_d", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_d), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_top__core_inst__stage_if_inst->varInsert("fetch_id_q", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__fetch_id_q), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_top__core_inst__stage_if_inst->varInsert("if_id_d", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_d), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,64,0);
    __Vscopep_top__core_inst__stage_if_inst->varInsert("if_id_o", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_o), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,64,0);
    __Vscopep_top__core_inst__stage_if_inst->varInsert("if_id_q", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__if_id_q), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,64,0);
    __Vscopep_top__core_inst__stage_if_inst->varInsert("imem_epoch_match", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_epoch_match), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_top__core_inst__stage_if_inst->varInsert("imem_req_accepted", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_accepted), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_top__core_inst__stage_if_inst->varInsert("imem_req_d", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_d), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,72,0);
    __Vscopep_top__core_inst__stage_if_inst->varInsert("imem_req_has_space", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_has_space), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_top__core_inst__stage_if_inst->varInsert("imem_req_inflight_d", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_d), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst__stage_if_inst->varInsert("imem_req_inflight_q", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_inflight_q), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst__stage_if_inst->varInsert("imem_req_issue", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_issue), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_top__core_inst__stage_if_inst->varInsert("imem_req_o", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_o), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,72,0);
    __Vscopep_top__core_inst__stage_if_inst->varInsert("imem_req_q", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_q), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,72,0);
    __Vscopep_top__core_inst__stage_if_inst->varInsert("imem_req_ready_i", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_ready_i), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst__stage_if_inst->varInsert("imem_req_valid_d", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_d), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst__stage_if_inst->varInsert("imem_req_valid_o", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_o), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_top__core_inst__stage_if_inst->varInsert("imem_req_valid_q", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_req_valid_q), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst__stage_if_inst->varInsert("imem_rsp_accepted", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_accepted), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_top__core_inst__stage_if_inst->varInsert("imem_rsp_i", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_i), false, VLVT_UINT64, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,40,0);
    __Vscopep_top__core_inst__stage_if_inst->varInsert("imem_rsp_ready_o", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_ready_o), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_top__core_inst__stage_if_inst->varInsert("imem_rsp_valid_i", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__imem_rsp_valid_i), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst__stage_if_inst->varInsert("info_if_o", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__info_if_o), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,0,0);
    __Vscopep_top__core_inst__stage_if_inst->varInsert("pc_issued_q", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_issued_q), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_top__core_inst__stage_if_inst->varInsert("pc_next", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_next), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_top__core_inst__stage_if_inst->varInsert("pc_q", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_q), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_top__core_inst__stage_if_inst->varInsert("pc_redirect_i", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_i), false, VLVT_UINT64, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,32,0);
    __Vscopep_top__core_inst__stage_if_inst->varInsert("pc_redirect_pending_q", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_redirect_pending_q), false, VLVT_UINT64, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,32,0);
    __Vscopep_top__core_inst__stage_if_inst->varInsert("pc_we", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__pc_we), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_top__core_inst__stage_if_inst->varInsert("rst_i", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__rst_i), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst__stage_if_inst__program_counter_inst->varInsert("clk_i", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__clk_i), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst__stage_if_inst__program_counter_inst->varInsert("pc_next_i", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__pc_next_i), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_top__core_inst__stage_if_inst__program_counter_inst->varInsert("pc_o", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__pc_o), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_top__core_inst__stage_if_inst__program_counter_inst->varInsert("pc_we_i", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__pc_we_i), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst__stage_if_inst__program_counter_inst->varInsert("rst_i", &(TOP.top__DOT__core_inst__DOT__stage_if_inst__DOT__program_counter_inst__DOT__rst_i), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst__stage_mem_inst->varInsert("clk_i", &(TOP.top__DOT__core_inst__DOT__stage_mem_inst__DOT__clk_i), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst__stage_mem_inst->varInsert("ctrl_mem_i", &(TOP.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ctrl_mem_i), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,0,0);
    __Vscopep_top__core_inst__stage_mem_inst->varInsert("data_in", &(TOP.top__DOT__core_inst__DOT__stage_mem_inst__DOT__data_in), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_top__core_inst__stage_mem_inst->varInsert("data_out", &(TOP.top__DOT__core_inst__DOT__stage_mem_inst__DOT__data_out), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_top__core_inst__stage_mem_inst->varInsert("dmem_req_o", &(TOP.top__DOT__core_inst__DOT__stage_mem_inst__DOT__dmem_req_o), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,72,0);
    __Vscopep_top__core_inst__stage_mem_inst->varInsert("dmem_rsp_i", &(TOP.top__DOT__core_inst__DOT__stage_mem_inst__DOT__dmem_rsp_i), false, VLVT_UINT64, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,40,0);
    __Vscopep_top__core_inst__stage_mem_inst->varInsert("ex_mem_i", &(TOP.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ex_mem_i), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,185,0);
    __Vscopep_top__core_inst__stage_mem_inst->varInsert("info_mem_o", &(TOP.top__DOT__core_inst__DOT__stage_mem_inst__DOT__info_mem_o), false, VLVT_UINT64, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,37,0);
    __Vscopep_top__core_inst__stage_mem_inst->varInsert("mem_wb_d", &(TOP.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_d), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,185,0);
    __Vscopep_top__core_inst__stage_mem_inst->varInsert("mem_wb_o", &(TOP.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_o), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,185,0);
    __Vscopep_top__core_inst__stage_mem_inst->varInsert("mem_wb_q", &(TOP.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_wb_q), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,185,0);
    __Vscopep_top__core_inst__stage_mem_inst->varInsert("mem_we", &(TOP.top__DOT__core_inst__DOT__stage_mem_inst__DOT__mem_we), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_top__core_inst__stage_mem_inst->varInsert("rst_i", &(TOP.top__DOT__core_inst__DOT__stage_mem_inst__DOT__rst_i), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst__stage_mem_inst__ram_inst->varInsert("addr_i", &(TOP.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__addr_i), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_top__core_inst__stage_mem_inst__ram_inst->varInsert("clk_i", &(TOP.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__clk_i), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst__stage_mem_inst__ram_inst->varInsert("data_i", &(TOP.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__data_i), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_top__core_inst__stage_mem_inst__ram_inst->varInsert("data_o", &(TOP.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__data_o), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_top__core_inst__stage_mem_inst__ram_inst->varInsert("mem", &(TOP.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__mem), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,0,65535 ,31,0);
    __Vscopep_top__core_inst__stage_mem_inst__ram_inst->varInsert("we_i", &(TOP.top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__we_i), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst__stage_wb_inst->varInsert("clk", &(TOP.top__DOT__core_inst__DOT__stage_wb_inst__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__core_inst__stage_wb_inst->varInsert("info_wb_o", &(TOP.top__DOT__core_inst__DOT__stage_wb_inst__DOT__info_wb_o), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,0,0);
    __Vscopep_top__core_inst__stage_wb_inst->varInsert("mem_data", &(TOP.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_top__core_inst__stage_wb_inst->varInsert("mem_wb_i", &(TOP.top__DOT__core_inst__DOT__stage_wb_inst__DOT__mem_wb_i), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,185,0);
    __Vscopep_top__core_inst__stage_wb_inst->varInsert("rd_addr_o", &(TOP.top__DOT__core_inst__DOT__stage_wb_inst__DOT__rd_addr_o), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,4,0);
    __Vscopep_top__core_inst__stage_wb_inst->varInsert("rd_data_o", &(TOP.top__DOT__core_inst__DOT__stage_wb_inst__DOT__rd_data_o), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_top__core_inst__stage_wb_inst->varInsert("rd_we_o", &(TOP.top__DOT__core_inst__DOT__stage_wb_inst__DOT__rd_we_o), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_top__core_inst__stage_wb_inst->varInsert("rst", &(TOP.top__DOT__core_inst__DOT__stage_wb_inst__DOT__rst), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__rom_inst->varInsert("HEX_FILE", const_cast<void*>(static_cast<const void*>(TOP.top__DOT__rom_inst__DOT__HEX_FILE.c_str())), true, VLVT_STRING, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__rom_inst->varInsert("clk_i", &(TOP.top__DOT__rom_inst__DOT__clk_i), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__rom_inst->varInsert("mem", &(TOP.top__DOT__rom_inst__DOT__mem), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,0,65535 ,31,0);
    __Vscopep_top__rom_inst->varInsert("mem_req_i", &(TOP.top__DOT__rom_inst__DOT__mem_req_i), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,72,0);
    __Vscopep_top__rom_inst->varInsert("mem_req_ready_o", &(TOP.top__DOT__rom_inst__DOT__mem_req_ready_o), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_top__rom_inst->varInsert("mem_req_valid_i", &(TOP.top__DOT__rom_inst__DOT__mem_req_valid_i), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__rom_inst->varInsert("mem_rsp_o", &(TOP.top__DOT__rom_inst__DOT__mem_rsp_o), false, VLVT_UINT64, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,40,0);
    __Vscopep_top__rom_inst->varInsert("mem_rsp_ready_i", &(TOP.top__DOT__rom_inst__DOT__mem_rsp_ready_i), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_top__rom_inst->varInsert("mem_rsp_valid_o", &(TOP.top__DOT__rom_inst__DOT__mem_rsp_valid_o), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
}

Vtop__Syms::~Vtop__Syms() {
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_TOP, __Vscopep_TOP = nullptr);
    VL_DO_CLEAR(delete __Vscopep___024unit, __Vscopep___024unit = nullptr);
    VL_DO_CLEAR(delete __Vscopep_common_pkg, __Vscopep_common_pkg = nullptr);
    VL_DO_CLEAR(delete __Vscopep_top, __Vscopep_top = nullptr);
    VL_DO_CLEAR(delete __Vscopep_top__core_inst, __Vscopep_top__core_inst = nullptr);
    VL_DO_CLEAR(delete __Vscopep_top__core_inst__regfile_inst, __Vscopep_top__core_inst__regfile_inst = nullptr);
    VL_DO_CLEAR(delete __Vscopep_top__core_inst__regfile_inst__unnamedblk1, __Vscopep_top__core_inst__regfile_inst__unnamedblk1 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_top__core_inst__stage_ex_inst, __Vscopep_top__core_inst__stage_ex_inst = nullptr);
    VL_DO_CLEAR(delete __Vscopep_top__core_inst__stage_ex_inst__alu_inst, __Vscopep_top__core_inst__stage_ex_inst__alu_inst = nullptr);
    VL_DO_CLEAR(delete __Vscopep_top__core_inst__stage_id_inst, __Vscopep_top__core_inst__stage_id_inst = nullptr);
    VL_DO_CLEAR(delete __Vscopep_top__core_inst__stage_id_inst__control_unit_inst, __Vscopep_top__core_inst__stage_id_inst__control_unit_inst = nullptr);
    VL_DO_CLEAR(delete __Vscopep_top__core_inst__stage_id_inst__control_unit_inst__decode_store_op, __Vscopep_top__core_inst__stage_id_inst__control_unit_inst__decode_store_op = nullptr);
    VL_DO_CLEAR(delete __Vscopep_top__core_inst__stage_if_inst, __Vscopep_top__core_inst__stage_if_inst = nullptr);
    VL_DO_CLEAR(delete __Vscopep_top__core_inst__stage_if_inst__program_counter_inst, __Vscopep_top__core_inst__stage_if_inst__program_counter_inst = nullptr);
    VL_DO_CLEAR(delete __Vscopep_top__core_inst__stage_mem_inst, __Vscopep_top__core_inst__stage_mem_inst = nullptr);
    VL_DO_CLEAR(delete __Vscopep_top__core_inst__stage_mem_inst__ram_inst, __Vscopep_top__core_inst__stage_mem_inst__ram_inst = nullptr);
    VL_DO_CLEAR(delete __Vscopep_top__core_inst__stage_wb_inst, __Vscopep_top__core_inst__stage_wb_inst = nullptr);
    VL_DO_CLEAR(delete __Vscopep_top__rom_inst, __Vscopep_top__rom_inst = nullptr);
    // Tear down sub module instances
    TOP__common_pkg.dtor();
    TOP____024unit.dtor();
}
