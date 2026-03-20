// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vquadra_top__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vquadra_top::Vquadra_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vquadra_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_b{vlSymsp->TOP.rst_b}
    , x_dv{vlSymsp->TOP.x_dv}
    , y_dv{vlSymsp->TOP.y_dv}
    , x{vlSymsp->TOP.x}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vquadra_top::Vquadra_top(const char* _vcname__)
    : Vquadra_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vquadra_top::~Vquadra_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vquadra_top___024root___eval_debug_assertions(Vquadra_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vquadra_top___024root___eval_static(Vquadra_top___024root* vlSelf);
void Vquadra_top___024root___eval_initial(Vquadra_top___024root* vlSelf);
void Vquadra_top___024root___eval_settle(Vquadra_top___024root* vlSelf);
void Vquadra_top___024root___eval(Vquadra_top___024root* vlSelf);

void Vquadra_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vquadra_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vquadra_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vquadra_top___024root___eval_static(&(vlSymsp->TOP));
        Vquadra_top___024root___eval_initial(&(vlSymsp->TOP));
        Vquadra_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vquadra_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vquadra_top::eventsPending() { return false; }

uint64_t Vquadra_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vquadra_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vquadra_top___024root___eval_final(Vquadra_top___024root* vlSelf);

VL_ATTR_COLD void Vquadra_top::final() {
    Vquadra_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vquadra_top::hierName() const { return vlSymsp->name(); }
const char* Vquadra_top::modelName() const { return "Vquadra_top"; }
unsigned Vquadra_top::threads() const { return 1; }
void Vquadra_top::prepareClone() const { contextp()->prepareClone(); }
void Vquadra_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vquadra_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vquadra_top___024root__trace_decl_types(VerilatedVcd* tracep);

void Vquadra_top___024root__trace_init_top(Vquadra_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vquadra_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vquadra_top___024root*>(voidSelf);
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vquadra_top___024root__trace_decl_types(tracep);
    Vquadra_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vquadra_top___024root__trace_register(Vquadra_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vquadra_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vquadra_top::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vquadra_top___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
