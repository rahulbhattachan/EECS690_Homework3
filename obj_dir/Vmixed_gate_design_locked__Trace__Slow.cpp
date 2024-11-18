// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmixed_gate_design_locked__Syms.h"


//======================

void Vmixed_gate_design_locked::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vmixed_gate_design_locked::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmixed_gate_design_locked__Syms* __restrict vlSymsp = static_cast<Vmixed_gate_design_locked__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vmixed_gate_design_locked::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vmixed_gate_design_locked::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vmixed_gate_design_locked__Syms* __restrict vlSymsp = static_cast<Vmixed_gate_design_locked__Syms*>(userp);
    Vmixed_gate_design_locked* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vmixed_gate_design_locked::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vmixed_gate_design_locked__Syms* __restrict vlSymsp = static_cast<Vmixed_gate_design_locked__Syms*>(userp);
    Vmixed_gate_design_locked* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+26,"I1", false,-1);
        tracep->declBit(c+27,"I2", false,-1);
        tracep->declBit(c+28,"I3", false,-1);
        tracep->declBit(c+29,"I4", false,-1);
        tracep->declBit(c+30,"keyinput0", false,-1);
        tracep->declBit(c+31,"keyinput1", false,-1);
        tracep->declBit(c+32,"keyinput2", false,-1);
        tracep->declBit(c+33,"keyinput3", false,-1);
        tracep->declBit(c+34,"keyinput4", false,-1);
        tracep->declBit(c+35,"keyinput5", false,-1);
        tracep->declBit(c+36,"keyinput6", false,-1);
        tracep->declBit(c+37,"O1", false,-1);
        tracep->declBit(c+38,"O2", false,-1);
        tracep->declBit(c+39,"O3", false,-1);
        tracep->declBit(c+26,"mixed_gate_design I1", false,-1);
        tracep->declBit(c+27,"mixed_gate_design I2", false,-1);
        tracep->declBit(c+28,"mixed_gate_design I3", false,-1);
        tracep->declBit(c+29,"mixed_gate_design I4", false,-1);
        tracep->declBit(c+30,"mixed_gate_design keyinput0", false,-1);
        tracep->declBit(c+31,"mixed_gate_design keyinput1", false,-1);
        tracep->declBit(c+32,"mixed_gate_design keyinput2", false,-1);
        tracep->declBit(c+33,"mixed_gate_design keyinput3", false,-1);
        tracep->declBit(c+34,"mixed_gate_design keyinput4", false,-1);
        tracep->declBit(c+35,"mixed_gate_design keyinput5", false,-1);
        tracep->declBit(c+36,"mixed_gate_design keyinput6", false,-1);
        tracep->declBit(c+37,"mixed_gate_design O1", false,-1);
        tracep->declBit(c+38,"mixed_gate_design O2", false,-1);
        tracep->declBit(c+39,"mixed_gate_design O3", false,-1);
        tracep->declBit(c+40,"mixed_gate_design W1", false,-1);
        tracep->declBit(c+1,"mixed_gate_design W2", false,-1);
        tracep->declBit(c+2,"mixed_gate_design W3", false,-1);
        tracep->declBit(c+41,"mixed_gate_design W4", false,-1);
        tracep->declBit(c+42,"mixed_gate_design W5", false,-1);
        tracep->declBit(c+3,"mixed_gate_design W6", false,-1);
        tracep->declBit(c+4,"mixed_gate_design W7", false,-1);
        tracep->declBit(c+5,"mixed_gate_design W8", false,-1);
        tracep->declBit(c+43,"mixed_gate_design W9", false,-1);
        tracep->declBit(c+6,"mixed_gate_design W10", false,-1);
        tracep->declBit(c+44,"mixed_gate_design W11", false,-1);
        tracep->declBit(c+7,"mixed_gate_design W12", false,-1);
        tracep->declBit(c+45,"mixed_gate_design W13", false,-1);
        tracep->declBit(c+46,"mixed_gate_design W14", false,-1);
        tracep->declBit(c+8,"mixed_gate_design W15", false,-1);
        tracep->declBit(c+9,"mixed_gate_design W16", false,-1);
        tracep->declBit(c+10,"mixed_gate_design W17", false,-1);
        tracep->declBit(c+11,"mixed_gate_design W18", false,-1);
        tracep->declBit(c+12,"mixed_gate_design W19", false,-1);
        tracep->declBit(c+13,"mixed_gate_design W20", false,-1);
        tracep->declBit(c+14,"mixed_gate_design W21", false,-1);
        tracep->declBit(c+47,"mixed_gate_design W22", false,-1);
        tracep->declBit(c+48,"mixed_gate_design W23", false,-1);
        tracep->declBit(c+49,"mixed_gate_design W24", false,-1);
        tracep->declBit(c+15,"mixed_gate_design W25", false,-1);
        tracep->declBit(c+16,"mixed_gate_design W26", false,-1);
        tracep->declBit(c+50,"mixed_gate_design W27", false,-1);
        tracep->declBit(c+51,"mixed_gate_design W28", false,-1);
        tracep->declBit(c+52,"mixed_gate_design W29", false,-1);
        tracep->declBit(c+53,"mixed_gate_design W30", false,-1);
        tracep->declBit(c+54,"mixed_gate_design W31", false,-1);
        tracep->declBit(c+17,"mixed_gate_design W32", false,-1);
        tracep->declBit(c+18,"mixed_gate_design W33", false,-1);
        tracep->declBit(c+19,"mixed_gate_design W34", false,-1);
        tracep->declBit(c+20,"mixed_gate_design W35", false,-1);
        tracep->declBit(c+55,"mixed_gate_design keyinputgate_0", false,-1);
        tracep->declBit(c+21,"mixed_gate_design keyinputgate_1", false,-1);
        tracep->declBit(c+22,"mixed_gate_design keyinputgate_2", false,-1);
        tracep->declBit(c+23,"mixed_gate_design keyinputgate_3", false,-1);
        tracep->declBit(c+24,"mixed_gate_design keyinputgate_4", false,-1);
        tracep->declBit(c+56,"mixed_gate_design keyinputgate_5", false,-1);
        tracep->declBit(c+25,"mixed_gate_design keyinputgate_6", false,-1);
    }
}

void Vmixed_gate_design_locked::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vmixed_gate_design_locked::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vmixed_gate_design_locked__Syms* __restrict vlSymsp = static_cast<Vmixed_gate_design_locked__Syms*>(userp);
    Vmixed_gate_design_locked* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vmixed_gate_design_locked::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vmixed_gate_design_locked__Syms* __restrict vlSymsp = static_cast<Vmixed_gate_design_locked__Syms*>(userp);
    Vmixed_gate_design_locked* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->mixed_gate_design__DOT__W2));
        tracep->fullBit(oldp+2,(vlTOPp->mixed_gate_design__DOT__W3));
        tracep->fullBit(oldp+3,(vlTOPp->mixed_gate_design__DOT__W6));
        tracep->fullBit(oldp+4,(vlTOPp->mixed_gate_design__DOT__W7));
        tracep->fullBit(oldp+5,(vlTOPp->mixed_gate_design__DOT__W8));
        tracep->fullBit(oldp+6,(vlTOPp->mixed_gate_design__DOT__W10));
        tracep->fullBit(oldp+7,(vlTOPp->mixed_gate_design__DOT__W12));
        tracep->fullBit(oldp+8,(((IData)(vlTOPp->mixed_gate_design__DOT__keyinputgate_3) 
                                 & (IData)(vlTOPp->mixed_gate_design__DOT__W3))));
        tracep->fullBit(oldp+9,((((IData)(vlTOPp->mixed_gate_design__DOT__keyinputgate_3) 
                                  & (IData)(vlTOPp->mixed_gate_design__DOT__W3)) 
                                 | (IData)(vlTOPp->mixed_gate_design__DOT__keyinputgate_1))));
        tracep->fullBit(oldp+10,((1U & (~ ((((IData)(vlTOPp->mixed_gate_design__DOT__keyinputgate_3) 
                                             & (IData)(vlTOPp->mixed_gate_design__DOT__W3)) 
                                            | (IData)(vlTOPp->mixed_gate_design__DOT__keyinputgate_1)) 
                                           | (IData)(vlTOPp->mixed_gate_design__DOT__keyinputgate_2))))));
        tracep->fullBit(oldp+11,((1U & (~ ((~ ((((IData)(vlTOPp->mixed_gate_design__DOT__keyinputgate_3) 
                                                 & (IData)(vlTOPp->mixed_gate_design__DOT__W3)) 
                                                | (IData)(vlTOPp->mixed_gate_design__DOT__keyinputgate_1)) 
                                               | (IData)(vlTOPp->mixed_gate_design__DOT__keyinputgate_2))) 
                                           ^ (IData)(vlTOPp->mixed_gate_design__DOT__W2))))));
        tracep->fullBit(oldp+12,(vlTOPp->mixed_gate_design__DOT__W19));
        tracep->fullBit(oldp+13,((1U & (~ ((IData)(vlTOPp->mixed_gate_design__DOT__W19) 
                                           & (IData)(vlTOPp->mixed_gate_design__DOT__W8))))));
        tracep->fullBit(oldp+14,(((IData)(vlTOPp->mixed_gate_design__DOT__W19) 
                                  & (IData)(vlTOPp->mixed_gate_design__DOT__W8))));
        tracep->fullBit(oldp+15,(vlTOPp->mixed_gate_design__DOT__W25));
        tracep->fullBit(oldp+16,(((IData)(vlTOPp->mixed_gate_design__DOT__W25) 
                                  | (IData)(vlTOPp->mixed_gate_design__DOT__W12))));
        tracep->fullBit(oldp+17,(vlTOPp->mixed_gate_design__DOT__W32));
        tracep->fullBit(oldp+18,(((IData)(vlTOPp->mixed_gate_design__DOT__W32) 
                                  & (IData)(vlTOPp->mixed_gate_design__DOT__W19))));
        tracep->fullBit(oldp+19,((((IData)(vlTOPp->mixed_gate_design__DOT__W32) 
                                   & (IData)(vlTOPp->mixed_gate_design__DOT__W19)) 
                                  ^ (IData)(vlTOPp->mixed_gate_design__DOT__keyinputgate_1))));
        tracep->fullBit(oldp+20,((1U & (~ ((IData)(vlTOPp->mixed_gate_design__DOT__keyinputgate_6) 
                                           | (IData)(vlTOPp->mixed_gate_design__DOT__W25))))));
        tracep->fullBit(oldp+21,(vlTOPp->mixed_gate_design__DOT__keyinputgate_1));
        tracep->fullBit(oldp+22,(vlTOPp->mixed_gate_design__DOT__keyinputgate_2));
        tracep->fullBit(oldp+23,(vlTOPp->mixed_gate_design__DOT__keyinputgate_3));
        tracep->fullBit(oldp+24,(vlTOPp->mixed_gate_design__DOT__keyinputgate_4));
        tracep->fullBit(oldp+25,(vlTOPp->mixed_gate_design__DOT__keyinputgate_6));
        tracep->fullBit(oldp+26,(vlTOPp->I1));
        tracep->fullBit(oldp+27,(vlTOPp->I2));
        tracep->fullBit(oldp+28,(vlTOPp->I3));
        tracep->fullBit(oldp+29,(vlTOPp->I4));
        tracep->fullBit(oldp+30,(vlTOPp->keyinput0));
        tracep->fullBit(oldp+31,(vlTOPp->keyinput1));
        tracep->fullBit(oldp+32,(vlTOPp->keyinput2));
        tracep->fullBit(oldp+33,(vlTOPp->keyinput3));
        tracep->fullBit(oldp+34,(vlTOPp->keyinput4));
        tracep->fullBit(oldp+35,(vlTOPp->keyinput5));
        tracep->fullBit(oldp+36,(vlTOPp->keyinput6));
        tracep->fullBit(oldp+37,(vlTOPp->O1));
        tracep->fullBit(oldp+38,(vlTOPp->O2));
        tracep->fullBit(oldp+39,(vlTOPp->O3));
        tracep->fullBit(oldp+40,(((IData)(vlTOPp->I1) 
                                  & (IData)(vlTOPp->I2))));
        tracep->fullBit(oldp+41,((1U & (~ (((IData)(vlTOPp->I1) 
                                            & (IData)(vlTOPp->I2)) 
                                           ^ (IData)(vlTOPp->mixed_gate_design__DOT__W2))))));
        tracep->fullBit(oldp+42,((1U & (~ ((IData)(vlTOPp->mixed_gate_design__DOT__W3) 
                                           & (IData)(vlTOPp->I2))))));
        tracep->fullBit(oldp+43,(((IData)(vlTOPp->mixed_gate_design__DOT__W8) 
                                  ^ (IData)(vlTOPp->I2))));
        tracep->fullBit(oldp+44,((1U & (~ (IData)(vlTOPp->I2)))));
        tracep->fullBit(oldp+45,(((IData)(vlTOPp->mixed_gate_design__DOT__W12) 
                                  | (IData)(vlTOPp->I1))));
        tracep->fullBit(oldp+46,((1U & (~ (((IData)(vlTOPp->mixed_gate_design__DOT__W12) 
                                            | (IData)(vlTOPp->I1)) 
                                           | (IData)(vlTOPp->I4))))));
        tracep->fullBit(oldp+47,((((IData)(vlTOPp->mixed_gate_design__DOT__W19) 
                                   & (IData)(vlTOPp->mixed_gate_design__DOT__W8)) 
                                  ^ (IData)(vlTOPp->I4))));
        tracep->fullBit(oldp+48,((1U & ((~ ((((IData)(vlTOPp->mixed_gate_design__DOT__W19) 
                                              & (IData)(vlTOPp->mixed_gate_design__DOT__W8)) 
                                             ^ (IData)(vlTOPp->I4)) 
                                            ^ (IData)(vlTOPp->keyinput5))) 
                                        | (IData)(vlTOPp->mixed_gate_design__DOT__W7)))));
        tracep->fullBit(oldp+49,((1U & (~ (((~ ((((IData)(vlTOPp->mixed_gate_design__DOT__W19) 
                                                  & (IData)(vlTOPp->mixed_gate_design__DOT__W8)) 
                                                 ^ (IData)(vlTOPp->I4)) 
                                                ^ (IData)(vlTOPp->keyinput5))) 
                                            | (IData)(vlTOPp->mixed_gate_design__DOT__W7)) 
                                           | (IData)(vlTOPp->mixed_gate_design__DOT__W10))))));
        tracep->fullBit(oldp+50,((((IData)(vlTOPp->mixed_gate_design__DOT__W25) 
                                   | (IData)(vlTOPp->mixed_gate_design__DOT__W12)) 
                                  & (IData)(vlTOPp->I1))));
        tracep->fullBit(oldp+51,((1U & (~ (((IData)(vlTOPp->mixed_gate_design__DOT__W25) 
                                            | (IData)(vlTOPp->mixed_gate_design__DOT__W12)) 
                                           & (IData)(vlTOPp->I1))))));
        tracep->fullBit(oldp+52,((1U & (~ ((~ (((IData)(vlTOPp->mixed_gate_design__DOT__W25) 
                                                | (IData)(vlTOPp->mixed_gate_design__DOT__W12)) 
                                               & (IData)(vlTOPp->I1))) 
                                           | (IData)(vlTOPp->mixed_gate_design__DOT__W6))))));
        tracep->fullBit(oldp+53,((1U & (~ ((~ ((~ (
                                                   ((IData)(vlTOPp->mixed_gate_design__DOT__W25) 
                                                    | (IData)(vlTOPp->mixed_gate_design__DOT__W12)) 
                                                   & (IData)(vlTOPp->I1))) 
                                               | (IData)(vlTOPp->mixed_gate_design__DOT__W6))) 
                                           ^ (IData)(vlTOPp->mixed_gate_design__DOT__W12))))));
        tracep->fullBit(oldp+54,((1U & (~ ((~ ((~ (
                                                   (~ 
                                                    (((IData)(vlTOPp->mixed_gate_design__DOT__W25) 
                                                      | (IData)(vlTOPp->mixed_gate_design__DOT__W12)) 
                                                     & (IData)(vlTOPp->I1))) 
                                                   | (IData)(vlTOPp->mixed_gate_design__DOT__W6))) 
                                               ^ (IData)(vlTOPp->mixed_gate_design__DOT__W12))) 
                                           & (IData)(vlTOPp->mixed_gate_design__DOT__keyinputgate_4))))));
        tracep->fullBit(oldp+55,((1U & (~ ((~ (((IData)(vlTOPp->I1) 
                                                & (IData)(vlTOPp->I2)) 
                                               ^ (IData)(vlTOPp->mixed_gate_design__DOT__W2))) 
                                           ^ (IData)(vlTOPp->keyinput0))))));
        tracep->fullBit(oldp+56,((1U & (~ ((((IData)(vlTOPp->mixed_gate_design__DOT__W19) 
                                             & (IData)(vlTOPp->mixed_gate_design__DOT__W8)) 
                                            ^ (IData)(vlTOPp->I4)) 
                                           ^ (IData)(vlTOPp->keyinput5))))));
    }
}
