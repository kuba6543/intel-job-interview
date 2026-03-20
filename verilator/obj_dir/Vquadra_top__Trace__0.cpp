// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vquadra_top__Syms.h"


void Vquadra_top___024root__trace_chg_0_sub_0(Vquadra_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vquadra_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_chg_0\n"); );
    // Init
    Vquadra_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vquadra_top___024root*>(voidSelf);
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vquadra_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vquadra_top___024root__trace_chg_0_sub_0(Vquadra_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->quadra_top__DOT__a_lut_out),30);
        bufp->chgIData(oldp+1,(vlSelf->quadra_top__DOT__b_lut_out),19);
        bufp->chgSData(oldp+2,(vlSelf->quadra_top__DOT__c_lut_out),13);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+3,(vlSelf->quadra_top__DOT__dv_p0));
        bufp->chgBit(oldp+4,(vlSelf->quadra_top__DOT__dv_p1));
        bufp->chgBit(oldp+5,(vlSelf->quadra_top__DOT__dv_p2));
        bufp->chgIData(oldp+6,(vlSelf->quadra_top__DOT__y_quadra_out),25);
        bufp->chgIData(oldp+7,(vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__x_lut),24);
        bufp->chgIData(oldp+8,(vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__a_lut),30);
        bufp->chgIData(oldp+9,(vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__b_lut),19);
        bufp->chgSData(oldp+10,(vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__c_lut),13);
        bufp->chgIData(oldp+11,((0x1ffffffU & (vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__x_lut 
                                               * vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__x_lut))),25);
        bufp->chgIData(oldp+12,(vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__a_shift),25);
        bufp->chgIData(oldp+13,(vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__bx_shift),25);
        bufp->chgIData(oldp+14,(vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__cx2_shift),25);
    }
    bufp->chgBit(oldp+15,(vlSelf->clk));
    bufp->chgBit(oldp+16,(vlSelf->rst_b));
    bufp->chgIData(oldp+17,(vlSelf->x),24);
    bufp->chgBit(oldp+18,(vlSelf->x_dv));
    bufp->chgIData(oldp+19,(vlSelf->y),25);
    bufp->chgBit(oldp+20,(vlSelf->y_dv));
    bufp->chgCData(oldp+21,((0x7fU & (vlSelf->x >> 0x11U))),7);
    bufp->chgIData(oldp+22,((0x1ffffU & vlSelf->x)),24);
}

void Vquadra_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_cleanup\n"); );
    // Init
    Vquadra_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vquadra_top___024root*>(voidSelf);
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
