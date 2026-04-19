// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop___024unit
constexpr IData/*31:0*/ Vtop___024unit::ROM_ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop___024unit::ROM_DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024unit::ROM_DEPTH;
constexpr IData/*31:0*/ Vtop___024unit::RAM_ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop___024unit::RAM_DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024unit::RAM_DEPTH;


void Vtop___024unit___ctor_var_reset(Vtop___024unit* vlSelf);

Vtop___024unit::Vtop___024unit() = default;
Vtop___024unit::~Vtop___024unit() = default;

void Vtop___024unit::ctor(Vtop__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtop___024unit___ctor_var_reset(this);
}

void Vtop___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtop___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
