// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vquadra_top.h for the primary calling header

#include "Vquadra_top__pch.h"
#include "Vquadra_top__Syms.h"
#include "Vquadra_top___024unit.h"

void Vquadra_top___024unit___ctor_var_reset(Vquadra_top___024unit* vlSelf);

Vquadra_top___024unit::Vquadra_top___024unit(Vquadra_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vquadra_top___024unit___ctor_var_reset(this);
}

void Vquadra_top___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vquadra_top___024unit::~Vquadra_top___024unit() {
}
