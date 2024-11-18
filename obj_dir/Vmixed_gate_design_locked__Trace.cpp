// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmixed_gate_design_locked__Syms.h"


void Vmixed_gate_design_locked::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vmixed_gate_design_locked__Syms* __restrict vlSymsp = static_cast<Vmixed_gate_design_locked__Syms*>(userp);
    Vmixed_gate_design_locked* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vmixed_gate_design_locked::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vmixed_gate_design_locked__Syms* __restrict vlSymsp = static_cast<Vmixed_gate_design_locked__Syms*>(userp);
    Vmixed_gate_design_locked* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlTOPp->mixed_gate_design__DOT__W2));
            tracep->chgBit(oldp+1,(vlTOPp->mixed_gate_design__DOT__W3));
            tracep->chgBit(oldp+2,(vlTOPp->mixed_gate_design__DOT__W6));
            tracep->chgBit(oldp+3,(vlTOPp->mixed_gate_design__DOT__W7));
            tracep->chgBit(oldp+4,(vlTOPp->mixed_gate_design__DOT__W8));
            tracep->chgBit(oldp+5,(vlTOPp->mixed_gate_design__DOT__W10));
            tracep->chgBit(oldp+6,(vlTOPp->mixed_gate_design__DOT__W12));
            tracep->chgBit(oldp+7,(((IData)(vlTOPp->mixed_gate_design__DOT__keyinputgate_3) 
                                    & (IData)(vlTOPp->mixed_gate_design__DOT__W3))));
            tracep->chgBit(oldp+8,((((IData)(vlTOPp->mixed_gate_design__DOT__keyinputgate_3) 
                                     & (IData)(vlTOPp->mixed_gate_design__DOT__W3)) 
                                    | (IData)(vlTOPp->mixed_gate_design__DOT__keyinputgate_1))));
            tracep->chgBit(oldp+9,((1U & (~ ((((IData)(vlTOPp->mixed_gate_design__DOT__keyinputgate_3) 
                                               & (IData)(vlTOPp->mixed_gate_design__DOT__W3)) 
                                              | (IData)(vlTOPp->mixed_gate_design__DOT__keyinputgate_1)) 
                                             | (IData)(vlTOPp->mixed_gate_design__DOT__keyinputgate_2))))));
            tracep->chgBit(oldp+10,((1U & (~ ((~ ((
                                                   ((IData)(vlTOPp->mixed_gate_design__DOT__keyinputgate_3) 
                                                    & (IData)(vlTOPp->mixed_gate_design__DOT__W3)) 
                                                   | (IData)(vlTOPp->mixed_gate_design__DOT__keyinputgate_1)) 
                                                  | (IData)(vlTOPp->mixed_gate_design__DOT__keyinputgate_2))) 
                                              ^ (IData)(vlTOPp->mixed_gate_design__DOT__W2))))));
            tracep->chgBit(oldp+11,(vlTOPp->mixed_gate_design__DOT__W19));
            tracep->chgBit(oldp+12,((1U & (~ ((IData)(vlTOPp->mixed_gate_design__DOT__W19) 
                                              & (IData)(vlTOPp->mixed_gate_design__DOT__W8))))));
            tracep->chgBit(oldp+13,(((IData)(vlTOPp->mixed_gate_design__DOT__W19) 
                                     & (IData)(vlTOPp->mixed_gate_design__DOT__W8))));
            tracep->chgBit(oldp+14,(vlTOPp->mixed_gate_design__DOT__W25));
            tracep->chgBit(oldp+15,(((IData)(vlTOPp->mixed_gate_design__DOT__W25) 
                                     | (IData)(vlTOPp->mixed_gate_design__DOT__W12))));
            tracep->chgBit(oldp+16,(vlTOPp->mixed_gate_design__DOT__W32));
            tracep->chgBit(oldp+17,(((IData)(vlTOPp->mixed_gate_design__DOT__W32) 
                                     & (IData)(vlTOPp->mixed_gate_design__DOT__W19))));
            tracep->chgBit(oldp+18,((((IData)(vlTOPp->mixed_gate_design__DOT__W32) 
                                      & (IData)(vlTOPp->mixed_gate_design__DOT__W19)) 
                                     ^ (IData)(vlTOPp->mixed_gate_design__DOT__keyinputgate_1))));
            tracep->chgBit(oldp+19,((1U & (~ ((IData)(vlTOPp->mixed_gate_design__DOT__keyinputgate_6) 
                                              | (IData)(vlTOPp->mixed_gate_design__DOT__W25))))));
            tracep->chgBit(oldp+20,(vlTOPp->mixed_gate_design__DOT__keyinputgate_1));
            tracep->chgBit(oldp+21,(vlTOPp->mixed_gate_design__DOT__keyinputgate_2));
            tracep->chgBit(oldp+22,(vlTOPp->mixed_gate_design__DOT__keyinputgate_3));
            tracep->chgBit(oldp+23,(vlTOPp->mixed_gate_design__DOT__keyinputgate_4));
            tracep->chgBit(oldp+24,(vlTOPp->mixed_gate_design__DOT__keyinputgate_6));
        }
        tracep->chgBit(oldp+25,(vlTOPp->I1));
        tracep->chgBit(oldp+26,(vlTOPp->I2));
        tracep->chgBit(oldp+27,(vlTOPp->I3));
        tracep->chgBit(oldp+28,(vlTOPp->I4));
        tracep->chgBit(oldp+29,(vlTOPp->keyinput0));
        tracep->chgBit(oldp+30,(vlTOPp->keyinput1));
        tracep->chgBit(oldp+31,(vlTOPp->keyinput2));
        tracep->chgBit(oldp+32,(vlTOPp->keyinput3));
        tracep->chgBit(oldp+33,(vlTOPp->keyinput4));
        tracep->chgBit(oldp+34,(vlTOPp->keyinput5));
        tracep->chgBit(oldp+35,(vlTOPp->keyinput6));
        tracep->chgBit(oldp+36,(vlTOPp->O1));
        tracep->chgBit(oldp+37,(vlTOPp->O2));
        tracep->chgBit(oldp+38,(vlTOPp->O3));
        tracep->chgBit(oldp+39,(((IData)(vlTOPp->I1) 
                                 & (IData)(vlTOPp->I2))));
        tracep->chgBit(oldp+40,((1U & (~ (((IData)(vlTOPp->I1) 
                                           & (IData)(vlTOPp->I2)) 
                                          ^ (IData)(vlTOPp->mixed_gate_design__DOT__W2))))));
        tracep->chgBit(oldp+41,((1U & (~ ((IData)(vlTOPp->mixed_gate_design__DOT__W3) 
                                          & (IData)(vlTOPp->I2))))));
        tracep->chgBit(oldp+42,(((IData)(vlTOPp->mixed_gate_design__DOT__W8) 
                                 ^ (IData)(vlTOPp->I2))));
        tracep->chgBit(oldp+43,((1U & (~ (IData)(vlTOPp->I2)))));
        tracep->chgBit(oldp+44,(((IData)(vlTOPp->mixed_gate_design__DOT__W12) 
                                 | (IData)(vlTOPp->I1))));
        tracep->chgBit(oldp+45,((1U & (~ (((IData)(vlTOPp->mixed_gate_design__DOT__W12) 
                                           | (IData)(vlTOPp->I1)) 
                                          | (IData)(vlTOPp->I4))))));
        tracep->chgBit(oldp+46,((((IData)(vlTOPp->mixed_gate_design__DOT__W19) 
                                  & (IData)(vlTOPp->mixed_gate_design__DOT__W8)) 
                                 ^ (IData)(vlTOPp->I4))));
        tracep->chgBit(oldp+47,((1U & ((~ ((((IData)(vlTOPp->mixed_gate_design__DOT__W19) 
                                             & (IData)(vlTOPp->mixed_gate_design__DOT__W8)) 
                                            ^ (IData)(vlTOPp->I4)) 
                                           ^ (IData)(vlTOPp->keyinput5))) 
                                       | (IData)(vlTOPp->mixed_gate_design__DOT__W7)))));
        tracep->chgBit(oldp+48,((1U & (~ (((~ ((((IData)(vlTOPp->mixed_gate_design__DOT__W19) 
                                                 & (IData)(vlTOPp->mixed_gate_design__DOT__W8)) 
                                                ^ (IData)(vlTOPp->I4)) 
                                               ^ (IData)(vlTOPp->keyinput5))) 
                                           | (IData)(vlTOPp->mixed_gate_design__DOT__W7)) 
                                          | (IData)(vlTOPp->mixed_gate_design__DOT__W10))))));
        tracep->chgBit(oldp+49,((((IData)(vlTOPp->mixed_gate_design__DOT__W25) 
                                  | (IData)(vlTOPp->mixed_gate_design__DOT__W12)) 
                                 & (IData)(vlTOPp->I1))));
        tracep->chgBit(oldp+50,((1U & (~ (((IData)(vlTOPp->mixed_gate_design__DOT__W25) 
                                           | (IData)(vlTOPp->mixed_gate_design__DOT__W12)) 
                                          & (IData)(vlTOPp->I1))))));
        tracep->chgBit(oldp+51,((1U & (~ ((~ (((IData)(vlTOPp->mixed_gate_design__DOT__W25) 
                                               | (IData)(vlTOPp->mixed_gate_design__DOT__W12)) 
                                              & (IData)(vlTOPp->I1))) 
                                          | (IData)(vlTOPp->mixed_gate_design__DOT__W6))))));
        tracep->chgBit(oldp+52,((1U & (~ ((~ ((~ (((IData)(vlTOPp->mixed_gate_design__DOT__W25) 
                                                   | (IData)(vlTOPp->mixed_gate_design__DOT__W12)) 
                                                  & (IData)(vlTOPp->I1))) 
                                              | (IData)(vlTOPp->mixed_gate_design__DOT__W6))) 
                                          ^ (IData)(vlTOPp->mixed_gate_design__DOT__W12))))));
        tracep->chgBit(oldp+53,((1U & (~ ((~ ((~ ((~ 
                                                   (((IData)(vlTOPp->mixed_gate_design__DOT__W25) 
                                                     | (IData)(vlTOPp->mixed_gate_design__DOT__W12)) 
                                                    & (IData)(vlTOPp->I1))) 
                                                  | (IData)(vlTOPp->mixed_gate_design__DOT__W6))) 
                                              ^ (IData)(vlTOPp->mixed_gate_design__DOT__W12))) 
                                          & (IData)(vlTOPp->mixed_gate_design__DOT__keyinputgate_4))))));
        tracep->chgBit(oldp+54,((1U & (~ ((~ (((IData)(vlTOPp->I1) 
                                               & (IData)(vlTOPp->I2)) 
                                              ^ (IData)(vlTOPp->mixed_gate_design__DOT__W2))) 
                                          ^ (IData)(vlTOPp->keyinput0))))));
        tracep->chgBit(oldp+55,((1U & (~ ((((IData)(vlTOPp->mixed_gate_design__DOT__W19) 
                                            & (IData)(vlTOPp->mixed_gate_design__DOT__W8)) 
                                           ^ (IData)(vlTOPp->I4)) 
                                          ^ (IData)(vlTOPp->keyinput5))))));
    }
}

void Vmixed_gate_design_locked::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vmixed_gate_design_locked__Syms* __restrict vlSymsp = static_cast<Vmixed_gate_design_locked__Syms*>(userp);
    Vmixed_gate_design_locked* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
