// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vquadra_top.h for the primary calling header

#ifndef VERILATED_VQUADRA_TOP___024UNIT_H_
#define VERILATED_VQUADRA_TOP___024UNIT_H_  // guard

#include "verilated.h"


class Vquadra_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vquadra_top___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vquadra_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vquadra_top___024unit(Vquadra_top__Syms* symsp, const char* v__name);
    ~Vquadra_top___024unit();
    VL_UNCOPYABLE(Vquadra_top___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
