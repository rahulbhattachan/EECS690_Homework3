// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VMIXED_GATE_DESIGN_LOCKED_H_
#define VERILATED_VMIXED_GATE_DESIGN_LOCKED_H_  // guard

#include "verilated_heavy.h"

//==========

class Vmixed_gate_design_locked__Syms;
class Vmixed_gate_design_locked_VerilatedVcd;


//----------

VL_MODULE(Vmixed_gate_design_locked) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(I1,0,0);
    VL_IN8(I2,0,0);
    VL_IN8(I3,0,0);
    VL_IN8(I4,0,0);
    VL_IN8(keyinput0,0,0);
    VL_IN8(keyinput1,0,0);
    VL_IN8(keyinput2,0,0);
    VL_IN8(keyinput3,0,0);
    VL_IN8(keyinput4,0,0);
    VL_IN8(keyinput5,0,0);
    VL_IN8(keyinput6,0,0);
    VL_OUT8(O1,0,0);
    VL_OUT8(O2,0,0);
    VL_OUT8(O3,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ mixed_gate_design__DOT__W2;
    CData/*0:0*/ mixed_gate_design__DOT__W3;
    CData/*0:0*/ mixed_gate_design__DOT__W6;
    CData/*0:0*/ mixed_gate_design__DOT__W7;
    CData/*0:0*/ mixed_gate_design__DOT__W8;
    CData/*0:0*/ mixed_gate_design__DOT__W10;
    CData/*0:0*/ mixed_gate_design__DOT__W12;
    CData/*0:0*/ mixed_gate_design__DOT__W19;
    CData/*0:0*/ mixed_gate_design__DOT__W25;
    CData/*0:0*/ mixed_gate_design__DOT__W32;
    CData/*0:0*/ mixed_gate_design__DOT__keyinputgate_1;
    CData/*0:0*/ mixed_gate_design__DOT__keyinputgate_2;
    CData/*0:0*/ mixed_gate_design__DOT__keyinputgate_3;
    CData/*0:0*/ mixed_gate_design__DOT__keyinputgate_4;
    CData/*0:0*/ mixed_gate_design__DOT__keyinputgate_6;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vmixed_gate_design_locked__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vmixed_gate_design_locked);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vmixed_gate_design_locked(VerilatedContext* contextp, const char* name = "TOP");
    Vmixed_gate_design_locked(const char* name = "TOP")
      : Vmixed_gate_design_locked(nullptr, name) {}
    /// Destroy the model; called (often implicitly) by application code
    ~Vmixed_gate_design_locked();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp();
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
    static void _eval_initial_loop(Vmixed_gate_design_locked__Syms* __restrict vlSymsp);
    void __Vconfigure(Vmixed_gate_design_locked__Syms* symsp, bool first);
  private:
    static QData _change_request(Vmixed_gate_design_locked__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vmixed_gate_design_locked__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(Vmixed_gate_design_locked__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vmixed_gate_design_locked__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vmixed_gate_design_locked__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vmixed_gate_design_locked__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
