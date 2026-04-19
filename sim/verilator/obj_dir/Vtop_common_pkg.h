// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_COMMON_PKG_H_
#define VERILATED_VTOP_COMMON_PKG_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_common_pkg final {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr IData/*31:0*/ XLEN = 0x00000020U;
    static constexpr IData/*31:0*/ PC_RESET = 0U;

    // CONSTRUCTORS
    Vtop_common_pkg();
    ~Vtop_common_pkg();
    void ctor(Vtop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop_common_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
