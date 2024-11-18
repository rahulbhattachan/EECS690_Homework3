// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vmixed_gate_design_locked__Syms.h"
#include "Vmixed_gate_design_locked.h"



// FUNCTIONS
Vmixed_gate_design_locked__Syms::~Vmixed_gate_design_locked__Syms()
{
}

Vmixed_gate_design_locked__Syms::Vmixed_gate_design_locked__Syms(VerilatedContext* contextp, Vmixed_gate_design_locked* topp, const char* namep)
    // Setup locals
    : VerilatedSyms{contextp}
    , __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
}
