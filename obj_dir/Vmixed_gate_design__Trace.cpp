// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmixed_gate_design__Syms.h"


void Vmixed_gate_design::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vmixed_gate_design__Syms* __restrict vlSymsp = static_cast<Vmixed_gate_design__Syms*>(userp);
    Vmixed_gate_design* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vmixed_gate_design::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vmixed_gate_design__Syms* __restrict vlSymsp = static_cast<Vmixed_gate_design__Syms*>(userp);
    Vmixed_gate_design* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlTOPp->mixed_gate_design__DOT__W2));
            tracep->chgBit(oldp+1,(vlTOPp->mixed_gate_design__DOT__W3));
            tracep->chgBit(oldp+2,(vlTOPp->mixed_gate_design__DOT__W5));
            tracep->chgBit(oldp+3,(vlTOPp->mixed_gate_design__DOT__W6));
            tracep->chgBit(oldp+4,(vlTOPp->mixed_gate_design__DOT__W7));
            tracep->chgBit(oldp+5,(vlTOPp->mixed_gate_design__DOT__W8));
            tracep->chgBit(oldp+6,(vlTOPp->mixed_gate_design__DOT__W9));
            tracep->chgBit(oldp+7,(vlTOPp->mixed_gate_design__DOT__W10));
            tracep->chgBit(oldp+8,(vlTOPp->mixed_gate_design__DOT__W12));
            tracep->chgBit(oldp+9,(vlTOPp->mixed_gate_design__DOT__W14));
            tracep->chgBit(oldp+10,(((IData)(vlTOPp->mixed_gate_design__DOT__W14) 
                                     & (IData)(vlTOPp->mixed_gate_design__DOT__W3))));
            tracep->chgBit(oldp+11,((((IData)(vlTOPp->mixed_gate_design__DOT__W14) 
                                      & (IData)(vlTOPp->mixed_gate_design__DOT__W3)) 
                                     | (IData)(vlTOPp->mixed_gate_design__DOT__W5))));
            tracep->chgBit(oldp+12,((1U & (~ ((((IData)(vlTOPp->mixed_gate_design__DOT__W14) 
                                                & (IData)(vlTOPp->mixed_gate_design__DOT__W3)) 
                                               | (IData)(vlTOPp->mixed_gate_design__DOT__W5)) 
                                              | (IData)(vlTOPp->mixed_gate_design__DOT__W9))))));
            tracep->chgBit(oldp+13,(vlTOPp->mixed_gate_design__DOT__W18));
            tracep->chgBit(oldp+14,(vlTOPp->mixed_gate_design__DOT__W19));
            tracep->chgBit(oldp+15,((1U & (~ ((IData)(vlTOPp->mixed_gate_design__DOT__W19) 
                                              & (IData)(vlTOPp->mixed_gate_design__DOT__W8))))));
            tracep->chgBit(oldp+16,(((IData)(vlTOPp->mixed_gate_design__DOT__W19) 
                                     & (IData)(vlTOPp->mixed_gate_design__DOT__W8))));
            tracep->chgBit(oldp+17,(vlTOPp->mixed_gate_design__DOT__W25));
            tracep->chgBit(oldp+18,(((IData)(vlTOPp->mixed_gate_design__DOT__W25) 
                                     | (IData)(vlTOPp->mixed_gate_design__DOT__W12))));
            tracep->chgBit(oldp+19,(vlTOPp->mixed_gate_design__DOT__W32));
            tracep->chgBit(oldp+20,(((IData)(vlTOPp->mixed_gate_design__DOT__W32) 
                                     & (IData)(vlTOPp->mixed_gate_design__DOT__W19))));
            tracep->chgBit(oldp+21,(vlTOPp->mixed_gate_design__DOT__W34));
            tracep->chgBit(oldp+22,((1U & (~ ((IData)(vlTOPp->mixed_gate_design__DOT__W34) 
                                              | (IData)(vlTOPp->mixed_gate_design__DOT__W25))))));
        }
        tracep->chgBit(oldp+23,(vlTOPp->I1));
        tracep->chgBit(oldp+24,(vlTOPp->I2));
        tracep->chgBit(oldp+25,(vlTOPp->I3));
        tracep->chgBit(oldp+26,(vlTOPp->I4));
        tracep->chgBit(oldp+27,(vlTOPp->O1));
        tracep->chgBit(oldp+28,(vlTOPp->O2));
        tracep->chgBit(oldp+29,(vlTOPp->O3));
        tracep->chgBit(oldp+30,(((IData)(vlTOPp->I1) 
                                 & (IData)(vlTOPp->I2))));
        tracep->chgBit(oldp+31,((1U & (~ (((IData)(vlTOPp->I1) 
                                           & (IData)(vlTOPp->I2)) 
                                          ^ (IData)(vlTOPp->mixed_gate_design__DOT__W2))))));
        tracep->chgBit(oldp+32,((1U & (~ (IData)(vlTOPp->I2)))));
        tracep->chgBit(oldp+33,(((IData)(vlTOPp->mixed_gate_design__DOT__W12) 
                                 | (IData)(vlTOPp->I1))));
        tracep->chgBit(oldp+34,((((IData)(vlTOPp->mixed_gate_design__DOT__W19) 
                                  & (IData)(vlTOPp->mixed_gate_design__DOT__W8)) 
                                 ^ (IData)(vlTOPp->I4))));
        tracep->chgBit(oldp+35,(((((IData)(vlTOPp->mixed_gate_design__DOT__W19) 
                                   & (IData)(vlTOPp->mixed_gate_design__DOT__W8)) 
                                  ^ (IData)(vlTOPp->I4)) 
                                 | (IData)(vlTOPp->mixed_gate_design__DOT__W7))));
        tracep->chgBit(oldp+36,((1U & (~ (((((IData)(vlTOPp->mixed_gate_design__DOT__W19) 
                                             & (IData)(vlTOPp->mixed_gate_design__DOT__W8)) 
                                            ^ (IData)(vlTOPp->I4)) 
                                           | (IData)(vlTOPp->mixed_gate_design__DOT__W7)) 
                                          | (IData)(vlTOPp->mixed_gate_design__DOT__W10))))));
        tracep->chgBit(oldp+37,((((IData)(vlTOPp->mixed_gate_design__DOT__W25) 
                                  | (IData)(vlTOPp->mixed_gate_design__DOT__W12)) 
                                 & (IData)(vlTOPp->I1))));
        tracep->chgBit(oldp+38,((1U & (~ (((IData)(vlTOPp->mixed_gate_design__DOT__W25) 
                                           | (IData)(vlTOPp->mixed_gate_design__DOT__W12)) 
                                          & (IData)(vlTOPp->I1))))));
        tracep->chgBit(oldp+39,((1U & (~ ((~ (((IData)(vlTOPp->mixed_gate_design__DOT__W25) 
                                               | (IData)(vlTOPp->mixed_gate_design__DOT__W12)) 
                                              & (IData)(vlTOPp->I1))) 
                                          | (IData)(vlTOPp->mixed_gate_design__DOT__W6))))));
        tracep->chgBit(oldp+40,((1U & (~ ((~ ((~ (((IData)(vlTOPp->mixed_gate_design__DOT__W25) 
                                                   | (IData)(vlTOPp->mixed_gate_design__DOT__W12)) 
                                                  & (IData)(vlTOPp->I1))) 
                                              | (IData)(vlTOPp->mixed_gate_design__DOT__W6))) 
                                          ^ (IData)(vlTOPp->mixed_gate_design__DOT__W12))))));
        tracep->chgBit(oldp+41,((1U & (~ ((~ ((~ ((~ 
                                                   (((IData)(vlTOPp->mixed_gate_design__DOT__W25) 
                                                     | (IData)(vlTOPp->mixed_gate_design__DOT__W12)) 
                                                    & (IData)(vlTOPp->I1))) 
                                                  | (IData)(vlTOPp->mixed_gate_design__DOT__W6))) 
                                              ^ (IData)(vlTOPp->mixed_gate_design__DOT__W12))) 
                                          & (IData)(vlTOPp->mixed_gate_design__DOT__W18))))));
    }
}

void Vmixed_gate_design::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vmixed_gate_design__Syms* __restrict vlSymsp = static_cast<Vmixed_gate_design__Syms*>(userp);
    Vmixed_gate_design* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
