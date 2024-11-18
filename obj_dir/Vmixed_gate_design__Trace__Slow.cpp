// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmixed_gate_design__Syms.h"


//======================

void Vmixed_gate_design::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vmixed_gate_design::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmixed_gate_design__Syms* __restrict vlSymsp = static_cast<Vmixed_gate_design__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vmixed_gate_design::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vmixed_gate_design::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vmixed_gate_design__Syms* __restrict vlSymsp = static_cast<Vmixed_gate_design__Syms*>(userp);
    Vmixed_gate_design* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vmixed_gate_design::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vmixed_gate_design__Syms* __restrict vlSymsp = static_cast<Vmixed_gate_design__Syms*>(userp);
    Vmixed_gate_design* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+24,"I1", false,-1);
        tracep->declBit(c+25,"I2", false,-1);
        tracep->declBit(c+26,"I3", false,-1);
        tracep->declBit(c+27,"I4", false,-1);
        tracep->declBit(c+28,"O1", false,-1);
        tracep->declBit(c+29,"O2", false,-1);
        tracep->declBit(c+30,"O3", false,-1);
        tracep->declBit(c+24,"mixed_gate_design I1", false,-1);
        tracep->declBit(c+25,"mixed_gate_design I2", false,-1);
        tracep->declBit(c+26,"mixed_gate_design I3", false,-1);
        tracep->declBit(c+27,"mixed_gate_design I4", false,-1);
        tracep->declBit(c+28,"mixed_gate_design O1", false,-1);
        tracep->declBit(c+29,"mixed_gate_design O2", false,-1);
        tracep->declBit(c+30,"mixed_gate_design O3", false,-1);
        tracep->declBit(c+31,"mixed_gate_design W1", false,-1);
        tracep->declBit(c+1,"mixed_gate_design W2", false,-1);
        tracep->declBit(c+2,"mixed_gate_design W3", false,-1);
        tracep->declBit(c+32,"mixed_gate_design W4", false,-1);
        tracep->declBit(c+3,"mixed_gate_design W5", false,-1);
        tracep->declBit(c+4,"mixed_gate_design W6", false,-1);
        tracep->declBit(c+5,"mixed_gate_design W7", false,-1);
        tracep->declBit(c+6,"mixed_gate_design W8", false,-1);
        tracep->declBit(c+7,"mixed_gate_design W9", false,-1);
        tracep->declBit(c+8,"mixed_gate_design W10", false,-1);
        tracep->declBit(c+33,"mixed_gate_design W11", false,-1);
        tracep->declBit(c+9,"mixed_gate_design W12", false,-1);
        tracep->declBit(c+34,"mixed_gate_design W13", false,-1);
        tracep->declBit(c+10,"mixed_gate_design W14", false,-1);
        tracep->declBit(c+11,"mixed_gate_design W15", false,-1);
        tracep->declBit(c+12,"mixed_gate_design W16", false,-1);
        tracep->declBit(c+13,"mixed_gate_design W17", false,-1);
        tracep->declBit(c+14,"mixed_gate_design W18", false,-1);
        tracep->declBit(c+15,"mixed_gate_design W19", false,-1);
        tracep->declBit(c+16,"mixed_gate_design W20", false,-1);
        tracep->declBit(c+17,"mixed_gate_design W21", false,-1);
        tracep->declBit(c+35,"mixed_gate_design W22", false,-1);
        tracep->declBit(c+36,"mixed_gate_design W23", false,-1);
        tracep->declBit(c+37,"mixed_gate_design W24", false,-1);
        tracep->declBit(c+18,"mixed_gate_design W25", false,-1);
        tracep->declBit(c+19,"mixed_gate_design W26", false,-1);
        tracep->declBit(c+38,"mixed_gate_design W27", false,-1);
        tracep->declBit(c+39,"mixed_gate_design W28", false,-1);
        tracep->declBit(c+40,"mixed_gate_design W29", false,-1);
        tracep->declBit(c+41,"mixed_gate_design W30", false,-1);
        tracep->declBit(c+42,"mixed_gate_design W31", false,-1);
        tracep->declBit(c+20,"mixed_gate_design W32", false,-1);
        tracep->declBit(c+21,"mixed_gate_design W33", false,-1);
        tracep->declBit(c+22,"mixed_gate_design W34", false,-1);
        tracep->declBit(c+23,"mixed_gate_design W35", false,-1);
    }
}

void Vmixed_gate_design::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vmixed_gate_design::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vmixed_gate_design__Syms* __restrict vlSymsp = static_cast<Vmixed_gate_design__Syms*>(userp);
    Vmixed_gate_design* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vmixed_gate_design::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vmixed_gate_design__Syms* __restrict vlSymsp = static_cast<Vmixed_gate_design__Syms*>(userp);
    Vmixed_gate_design* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->mixed_gate_design__DOT__W2));
        tracep->fullBit(oldp+2,(vlTOPp->mixed_gate_design__DOT__W3));
        tracep->fullBit(oldp+3,(vlTOPp->mixed_gate_design__DOT__W5));
        tracep->fullBit(oldp+4,(vlTOPp->mixed_gate_design__DOT__W6));
        tracep->fullBit(oldp+5,(vlTOPp->mixed_gate_design__DOT__W7));
        tracep->fullBit(oldp+6,(vlTOPp->mixed_gate_design__DOT__W8));
        tracep->fullBit(oldp+7,(vlTOPp->mixed_gate_design__DOT__W9));
        tracep->fullBit(oldp+8,(vlTOPp->mixed_gate_design__DOT__W10));
        tracep->fullBit(oldp+9,(vlTOPp->mixed_gate_design__DOT__W12));
        tracep->fullBit(oldp+10,(vlTOPp->mixed_gate_design__DOT__W14));
        tracep->fullBit(oldp+11,(((IData)(vlTOPp->mixed_gate_design__DOT__W14) 
                                  & (IData)(vlTOPp->mixed_gate_design__DOT__W3))));
        tracep->fullBit(oldp+12,((((IData)(vlTOPp->mixed_gate_design__DOT__W14) 
                                   & (IData)(vlTOPp->mixed_gate_design__DOT__W3)) 
                                  | (IData)(vlTOPp->mixed_gate_design__DOT__W5))));
        tracep->fullBit(oldp+13,((1U & (~ ((((IData)(vlTOPp->mixed_gate_design__DOT__W14) 
                                             & (IData)(vlTOPp->mixed_gate_design__DOT__W3)) 
                                            | (IData)(vlTOPp->mixed_gate_design__DOT__W5)) 
                                           | (IData)(vlTOPp->mixed_gate_design__DOT__W9))))));
        tracep->fullBit(oldp+14,(vlTOPp->mixed_gate_design__DOT__W18));
        tracep->fullBit(oldp+15,(vlTOPp->mixed_gate_design__DOT__W19));
        tracep->fullBit(oldp+16,((1U & (~ ((IData)(vlTOPp->mixed_gate_design__DOT__W19) 
                                           & (IData)(vlTOPp->mixed_gate_design__DOT__W8))))));
        tracep->fullBit(oldp+17,(((IData)(vlTOPp->mixed_gate_design__DOT__W19) 
                                  & (IData)(vlTOPp->mixed_gate_design__DOT__W8))));
        tracep->fullBit(oldp+18,(vlTOPp->mixed_gate_design__DOT__W25));
        tracep->fullBit(oldp+19,(((IData)(vlTOPp->mixed_gate_design__DOT__W25) 
                                  | (IData)(vlTOPp->mixed_gate_design__DOT__W12))));
        tracep->fullBit(oldp+20,(vlTOPp->mixed_gate_design__DOT__W32));
        tracep->fullBit(oldp+21,(((IData)(vlTOPp->mixed_gate_design__DOT__W32) 
                                  & (IData)(vlTOPp->mixed_gate_design__DOT__W19))));
        tracep->fullBit(oldp+22,(vlTOPp->mixed_gate_design__DOT__W34));
        tracep->fullBit(oldp+23,((1U & (~ ((IData)(vlTOPp->mixed_gate_design__DOT__W34) 
                                           | (IData)(vlTOPp->mixed_gate_design__DOT__W25))))));
        tracep->fullBit(oldp+24,(vlTOPp->I1));
        tracep->fullBit(oldp+25,(vlTOPp->I2));
        tracep->fullBit(oldp+26,(vlTOPp->I3));
        tracep->fullBit(oldp+27,(vlTOPp->I4));
        tracep->fullBit(oldp+28,(vlTOPp->O1));
        tracep->fullBit(oldp+29,(vlTOPp->O2));
        tracep->fullBit(oldp+30,(vlTOPp->O3));
        tracep->fullBit(oldp+31,(((IData)(vlTOPp->I1) 
                                  & (IData)(vlTOPp->I2))));
        tracep->fullBit(oldp+32,((1U & (~ (((IData)(vlTOPp->I1) 
                                            & (IData)(vlTOPp->I2)) 
                                           ^ (IData)(vlTOPp->mixed_gate_design__DOT__W2))))));
        tracep->fullBit(oldp+33,((1U & (~ (IData)(vlTOPp->I2)))));
        tracep->fullBit(oldp+34,(((IData)(vlTOPp->mixed_gate_design__DOT__W12) 
                                  | (IData)(vlTOPp->I1))));
        tracep->fullBit(oldp+35,((((IData)(vlTOPp->mixed_gate_design__DOT__W19) 
                                   & (IData)(vlTOPp->mixed_gate_design__DOT__W8)) 
                                  ^ (IData)(vlTOPp->I4))));
        tracep->fullBit(oldp+36,(((((IData)(vlTOPp->mixed_gate_design__DOT__W19) 
                                    & (IData)(vlTOPp->mixed_gate_design__DOT__W8)) 
                                   ^ (IData)(vlTOPp->I4)) 
                                  | (IData)(vlTOPp->mixed_gate_design__DOT__W7))));
        tracep->fullBit(oldp+37,((1U & (~ (((((IData)(vlTOPp->mixed_gate_design__DOT__W19) 
                                              & (IData)(vlTOPp->mixed_gate_design__DOT__W8)) 
                                             ^ (IData)(vlTOPp->I4)) 
                                            | (IData)(vlTOPp->mixed_gate_design__DOT__W7)) 
                                           | (IData)(vlTOPp->mixed_gate_design__DOT__W10))))));
        tracep->fullBit(oldp+38,((((IData)(vlTOPp->mixed_gate_design__DOT__W25) 
                                   | (IData)(vlTOPp->mixed_gate_design__DOT__W12)) 
                                  & (IData)(vlTOPp->I1))));
        tracep->fullBit(oldp+39,((1U & (~ (((IData)(vlTOPp->mixed_gate_design__DOT__W25) 
                                            | (IData)(vlTOPp->mixed_gate_design__DOT__W12)) 
                                           & (IData)(vlTOPp->I1))))));
        tracep->fullBit(oldp+40,((1U & (~ ((~ (((IData)(vlTOPp->mixed_gate_design__DOT__W25) 
                                                | (IData)(vlTOPp->mixed_gate_design__DOT__W12)) 
                                               & (IData)(vlTOPp->I1))) 
                                           | (IData)(vlTOPp->mixed_gate_design__DOT__W6))))));
        tracep->fullBit(oldp+41,((1U & (~ ((~ ((~ (
                                                   ((IData)(vlTOPp->mixed_gate_design__DOT__W25) 
                                                    | (IData)(vlTOPp->mixed_gate_design__DOT__W12)) 
                                                   & (IData)(vlTOPp->I1))) 
                                               | (IData)(vlTOPp->mixed_gate_design__DOT__W6))) 
                                           ^ (IData)(vlTOPp->mixed_gate_design__DOT__W12))))));
        tracep->fullBit(oldp+42,((1U & (~ ((~ ((~ (
                                                   (~ 
                                                    (((IData)(vlTOPp->mixed_gate_design__DOT__W25) 
                                                      | (IData)(vlTOPp->mixed_gate_design__DOT__W12)) 
                                                     & (IData)(vlTOPp->I1))) 
                                                   | (IData)(vlTOPp->mixed_gate_design__DOT__W6))) 
                                               ^ (IData)(vlTOPp->mixed_gate_design__DOT__W12))) 
                                           & (IData)(vlTOPp->mixed_gate_design__DOT__W18))))));
    }
}
