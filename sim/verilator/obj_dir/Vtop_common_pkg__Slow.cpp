// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop_common_pkg
constexpr IData/*31:0*/ Vtop_common_pkg::XLEN;
constexpr IData/*31:0*/ Vtop_common_pkg::PC_RESET;


void Vtop_common_pkg___ctor_var_reset(Vtop_common_pkg* vlSelf);

Vtop_common_pkg::Vtop_common_pkg() = default;
Vtop_common_pkg::~Vtop_common_pkg() = default;

void Vtop_common_pkg::ctor(Vtop__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtop_common_pkg___ctor_var_reset(this);
}

void Vtop_common_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtop_common_pkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
