// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmixed_gate_design_locked.h for the primary calling header

#include "Vmixed_gate_design_locked.h"
#include "Vmixed_gate_design_locked__Syms.h"

//==========

Vmixed_gate_design_locked::Vmixed_gate_design_locked(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    Vmixed_gate_design_locked__Syms* __restrict vlSymsp = __VlSymsp = new Vmixed_gate_design_locked__Syms(_vcontextp__, this, name());
    Vmixed_gate_design_locked* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vmixed_gate_design_locked::__Vconfigure(Vmixed_gate_design_locked__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

Vmixed_gate_design_locked::~Vmixed_gate_design_locked() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void Vmixed_gate_design_locked::_eval_initial(Vmixed_gate_design_locked__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmixed_gate_design_locked::_eval_initial\n"); );
    Vmixed_gate_design_locked* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vmixed_gate_design_locked::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmixed_gate_design_locked::final\n"); );
    // Variables
    Vmixed_gate_design_locked__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vmixed_gate_design_locked* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vmixed_gate_design_locked::_eval_settle(Vmixed_gate_design_locked__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmixed_gate_design_locked::_eval_settle\n"); );
    Vmixed_gate_design_locked* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vmixed_gate_design_locked::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmixed_gate_design_locked::_ctor_var_reset\n"); );
    // Body
    I1 = VL_RAND_RESET_I(1);
    I2 = VL_RAND_RESET_I(1);
    I3 = VL_RAND_RESET_I(1);
    I4 = VL_RAND_RESET_I(1);
    keyinput0 = VL_RAND_RESET_I(1);
    keyinput1 = VL_RAND_RESET_I(1);
    keyinput2 = VL_RAND_RESET_I(1);
    keyinput3 = VL_RAND_RESET_I(1);
    keyinput4 = VL_RAND_RESET_I(1);
    keyinput5 = VL_RAND_RESET_I(1);
    keyinput6 = VL_RAND_RESET_I(1);
    O1 = VL_RAND_RESET_I(1);
    O2 = VL_RAND_RESET_I(1);
    O3 = VL_RAND_RESET_I(1);
    mixed_gate_design__DOT__W2 = VL_RAND_RESET_I(1);
    mixed_gate_design__DOT__W3 = VL_RAND_RESET_I(1);
    mixed_gate_design__DOT__W6 = VL_RAND_RESET_I(1);
    mixed_gate_design__DOT__W7 = VL_RAND_RESET_I(1);
    mixed_gate_design__DOT__W8 = VL_RAND_RESET_I(1);
    mixed_gate_design__DOT__W10 = VL_RAND_RESET_I(1);
    mixed_gate_design__DOT__W12 = VL_RAND_RESET_I(1);
    mixed_gate_design__DOT__W19 = VL_RAND_RESET_I(1);
    mixed_gate_design__DOT__W25 = VL_RAND_RESET_I(1);
    mixed_gate_design__DOT__W32 = VL_RAND_RESET_I(1);
    mixed_gate_design__DOT__keyinputgate_1 = VL_RAND_RESET_I(1);
    mixed_gate_design__DOT__keyinputgate_2 = VL_RAND_RESET_I(1);
    mixed_gate_design__DOT__keyinputgate_3 = VL_RAND_RESET_I(1);
    mixed_gate_design__DOT__keyinputgate_4 = VL_RAND_RESET_I(1);
    mixed_gate_design__DOT__keyinputgate_6 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
