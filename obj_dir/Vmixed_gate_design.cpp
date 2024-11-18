// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmixed_gate_design.h for the primary calling header

#include "Vmixed_gate_design.h"
#include "Vmixed_gate_design__Syms.h"

//==========

VerilatedContext* Vmixed_gate_design::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void Vmixed_gate_design::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmixed_gate_design::eval\n"); );
    Vmixed_gate_design__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vmixed_gate_design* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("mixed_gate_design.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
            } else {
                __Vchange = _change_request(vlSymsp);
            }
        } while (VL_UNLIKELY(__Vchange));
    }
    
    void Vmixed_gate_design::_eval_initial_loop(Vmixed_gate_design__Syms* __restrict vlSymsp) {
        vlSymsp->__Vm_didInit = true;
        _eval_initial(vlSymsp);
        vlSymsp->__Vm_activity = true;
        // Evaluate till stable
        int __VclockLoop = 0;
        QData __Vchange = 1;
        do {
            _eval_settle(vlSymsp);
            _eval(vlSymsp);
            if (VL_UNLIKELY(++__VclockLoop > 100)) {
                // About to fail, so enable debug to see what's not settling.
                // Note you must run make with OPT=-DVL_DEBUG for debug prints.
                int __Vsaved_debug = Verilated::debug();
                Verilated::debug(1);
                __Vchange = _change_request(vlSymsp);
                Verilated::debug(__Vsaved_debug);
                VL_FATAL_MT("mixed_gate_design.v", 1, "",
                    "Verilated model didn't DC converge\n"
                    "- See https://verilator.org/warn/DIDNOTCONVERGE");
                } else {
                    __Vchange = _change_request(vlSymsp);
                }
            } while (VL_UNLIKELY(__Vchange));
        }
        
        VL_INLINE_OPT void Vmixed_gate_design::_combo__TOP__1(Vmixed_gate_design__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vmixed_gate_design::_combo__TOP__1\n"); );
            Vmixed_gate_design* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
            // Body
            vlTOPp->mixed_gate_design__DOT__W2 = ((IData)(vlTOPp->I3) 
                                                  | (IData)(vlTOPp->I4));
            vlTOPp->mixed_gate_design__DOT__W3 = ((IData)(vlTOPp->I1) 
                                                  ^ (IData)(vlTOPp->I3));
            vlTOPp->mixed_gate_design__DOT__W6 = (1U 
                                                  & (~ 
                                                     ((~ 
                                                       (((IData)(vlTOPp->I1) 
                                                         & (IData)(vlTOPp->I2)) 
                                                        ^ (IData)(vlTOPp->mixed_gate_design__DOT__W2))) 
                                                      | (IData)(vlTOPp->I4))));
            vlTOPp->mixed_gate_design__DOT__W5 = (1U 
                                                  & (~ 
                                                     ((IData)(vlTOPp->mixed_gate_design__DOT__W3) 
                                                      & (IData)(vlTOPp->I2))));
            vlTOPp->mixed_gate_design__DOT__W7 = ((IData)(vlTOPp->mixed_gate_design__DOT__W5) 
                                                  & (IData)(vlTOPp->mixed_gate_design__DOT__W6));
            vlTOPp->mixed_gate_design__DOT__W8 = ((IData)(vlTOPp->mixed_gate_design__DOT__W7) 
                                                  | (IData)(vlTOPp->I4));
            vlTOPp->mixed_gate_design__DOT__W9 = ((IData)(vlTOPp->mixed_gate_design__DOT__W8) 
                                                  ^ (IData)(vlTOPp->I2));
            vlTOPp->mixed_gate_design__DOT__W10 = ((IData)(vlTOPp->mixed_gate_design__DOT__W9) 
                                                   & (IData)(vlTOPp->I3));
            vlTOPp->mixed_gate_design__DOT__W12 = (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->mixed_gate_design__DOT__W10) 
                                                       & (~ (IData)(vlTOPp->I2)))));
            vlTOPp->mixed_gate_design__DOT__W14 = (1U 
                                                   & (~ 
                                                      (((IData)(vlTOPp->mixed_gate_design__DOT__W12) 
                                                        | (IData)(vlTOPp->I1)) 
                                                       | (IData)(vlTOPp->I4))));
            vlTOPp->mixed_gate_design__DOT__W18 = (1U 
                                                   & (~ 
                                                      ((~ 
                                                        ((((IData)(vlTOPp->mixed_gate_design__DOT__W14) 
                                                           & (IData)(vlTOPp->mixed_gate_design__DOT__W3)) 
                                                          | (IData)(vlTOPp->mixed_gate_design__DOT__W5)) 
                                                         | (IData)(vlTOPp->mixed_gate_design__DOT__W9))) 
                                                       ^ (IData)(vlTOPp->mixed_gate_design__DOT__W2))));
            vlTOPp->mixed_gate_design__DOT__W19 = ((IData)(vlTOPp->mixed_gate_design__DOT__W18) 
                                                   & (IData)(vlTOPp->I3));
            vlTOPp->mixed_gate_design__DOT__W25 = (1U 
                                                   & ((~ 
                                                       (((((IData)(vlTOPp->mixed_gate_design__DOT__W19) 
                                                           & (IData)(vlTOPp->mixed_gate_design__DOT__W8)) 
                                                          ^ (IData)(vlTOPp->I4)) 
                                                         | (IData)(vlTOPp->mixed_gate_design__DOT__W7)) 
                                                        | (IData)(vlTOPp->mixed_gate_design__DOT__W10))) 
                                                      | (IData)(vlTOPp->mixed_gate_design__DOT__W2)));
            vlTOPp->mixed_gate_design__DOT__W32 = (1U 
                                                   & ((~ 
                                                       ((~ 
                                                         ((~ 
                                                           ((~ 
                                                             (((IData)(vlTOPp->mixed_gate_design__DOT__W25) 
                                                               | (IData)(vlTOPp->mixed_gate_design__DOT__W12)) 
                                                              & (IData)(vlTOPp->I1))) 
                                                            | (IData)(vlTOPp->mixed_gate_design__DOT__W6))) 
                                                          ^ (IData)(vlTOPp->mixed_gate_design__DOT__W12))) 
                                                        & (IData)(vlTOPp->mixed_gate_design__DOT__W18))) 
                                                      | (IData)(vlTOPp->mixed_gate_design__DOT__W14)));
            vlTOPp->O1 = ((IData)(vlTOPp->mixed_gate_design__DOT__W25) 
                          & (IData)(vlTOPp->mixed_gate_design__DOT__W32));
            vlTOPp->mixed_gate_design__DOT__W34 = (
                                                   ((IData)(vlTOPp->mixed_gate_design__DOT__W32) 
                                                    & (IData)(vlTOPp->mixed_gate_design__DOT__W19)) 
                                                   ^ (IData)(vlTOPp->mixed_gate_design__DOT__W5));
            vlTOPp->O3 = ((IData)(vlTOPp->mixed_gate_design__DOT__W18) 
                          ^ (IData)(vlTOPp->mixed_gate_design__DOT__W34));
            vlTOPp->O2 = (1U & ((IData)(vlTOPp->mixed_gate_design__DOT__W14) 
                                | (~ ((IData)(vlTOPp->mixed_gate_design__DOT__W34) 
                                      | (IData)(vlTOPp->mixed_gate_design__DOT__W25)))));
        }
        
        void Vmixed_gate_design::_eval(Vmixed_gate_design__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vmixed_gate_design::_eval\n"); );
            Vmixed_gate_design* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
            // Body
            vlTOPp->_combo__TOP__1(vlSymsp);
            vlTOPp->__Vm_traceActivity[1U] = 1U;
        }
        
        VL_INLINE_OPT QData Vmixed_gate_design::_change_request(Vmixed_gate_design__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vmixed_gate_design::_change_request\n"); );
            Vmixed_gate_design* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
            // Body
            return (vlTOPp->_change_request_1(vlSymsp));
        }
        
        VL_INLINE_OPT QData Vmixed_gate_design::_change_request_1(Vmixed_gate_design__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vmixed_gate_design::_change_request_1\n"); );
            Vmixed_gate_design* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
            // Body
            // Change detection
            QData __req = false;  // Logically a bool
            return __req;
        }
        
#ifdef VL_DEBUG
        void Vmixed_gate_design::_eval_debug_assertions() {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vmixed_gate_design::_eval_debug_assertions\n"); );
            // Body
            if (VL_UNLIKELY((I1 & 0xfeU))) {
                Verilated::overWidthError("I1");}
            if (VL_UNLIKELY((I2 & 0xfeU))) {
                Verilated::overWidthError("I2");}
            if (VL_UNLIKELY((I3 & 0xfeU))) {
                Verilated::overWidthError("I3");}
            if (VL_UNLIKELY((I4 & 0xfeU))) {
                Verilated::overWidthError("I4");}
        }
#endif  // VL_DEBUG
