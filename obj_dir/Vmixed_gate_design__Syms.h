// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMIXED_GATE_DESIGN__SYMS_H_
#define VERILATED_VMIXED_GATE_DESIGN__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vmixed_gate_design.h"

// SYMS CLASS
class Vmixed_gate_design__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vmixed_gate_design*            TOPp;
    
    // CREATORS
    Vmixed_gate_design__Syms(VerilatedContext* contextp, Vmixed_gate_design* topp, const char* namep);
    ~Vmixed_gate_design__Syms();
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
