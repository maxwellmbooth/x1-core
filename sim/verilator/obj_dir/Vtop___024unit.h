// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024UNIT_H_
#define VERILATED_VTOP___024UNIT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024unit final {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr IData/*31:0*/ ROM_ADDR_WIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ ROM_DATA_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ ROM_DEPTH = 0x00010000U;
    static constexpr IData/*31:0*/ RAM_ADDR_WIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ RAM_DATA_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ RAM_DEPTH = 0x00010000U;

    // CONSTRUCTORS
    Vtop___024unit();
    ~Vtop___024unit();
    void ctor(Vtop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
