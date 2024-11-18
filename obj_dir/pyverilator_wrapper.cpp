#include <cstddef>
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vmixed_gate_design_locked.h"
    
// pyverilator defined values
// first declare variables as extern
extern const char* _pyverilator_module_name;
extern const uint32_t _pyverilator_num_inputs;
extern const char* _pyverilator_inputs[];
extern const uint32_t _pyverilator_input_widths[];
extern const uint32_t _pyverilator_num_outputs;
extern const char* _pyverilator_outputs[];
extern const uint32_t _pyverilator_output_widths[];
extern const uint32_t _pyverilator_num_internal_signals;
extern const char* _pyverilator_internal_signals[];
extern const uint32_t _pyverilator_internal_signal_widths[];
extern const uint32_t _pyverilator_num_rules;
extern const char* _pyverilator_rules[];
extern const char* _pyverilator_json_data;
// now initialize the variables
const char* _pyverilator_module_name = "mixed_gate_design_locked";
const uint32_t _pyverilator_num_inputs = 11;
const char* _pyverilator_inputs[] = {"I1","I2","I3","I4","keyinput0","keyinput1","keyinput2","keyinput3","keyinput4","keyinput5","keyinput6"};
const uint32_t _pyverilator_input_widths[] = {1,1,1,1,1,1,1,1,1,1,1};

const uint32_t _pyverilator_num_outputs = 3;
const char* _pyverilator_outputs[] = {"O1","O2","O3"};
const uint32_t _pyverilator_output_widths[] = {1,1,1};

const uint32_t _pyverilator_num_internal_signals = 0;
const char* _pyverilator_internal_signals[] = {};
const uint32_t _pyverilator_internal_signal_widths[] = {};

const char* _pyverilator_json_data = "null";

// this is required by verilator for verilog designs using $time
// main_time is incremented in eval
double main_time = 0;

// What to call when $finish is called
typedef void (*vl_finish_callback)(const char* filename, int line, const char* hier);
vl_finish_callback vl_user_finish = NULL;
    
double sc_time_stamp() {
return main_time;
}
void vl_finish (const char* filename, int linenum, const char* hier) VL_MT_UNSAFE {
    if (vl_user_finish) {
       (*vl_user_finish)(filename, linenum, hier);
    } else {
        // Default implementation
        VL_PRINTF("- %s:%d: Verilog $finish\n", filename, linenum);  // Not VL_PRINTF_MT, already on main thread
        if (Verilated::gotFinish()) {
            VL_PRINTF("- %s:%d: Second verilog $finish, exiting\n", filename, linenum);  // Not VL_PRINTF_MT, already on main thread
            Verilated::flushCall();
            exit(0);
        }
        Verilated::gotFinish(true);
    }
}
// function definitions
// helper functions for basic verilator tasks
extern "C" { //Open an extern C closed in the footer
Vmixed_gate_design_locked* construct() {
    Verilated::traceEverOn(true);
    Vmixed_gate_design_locked* top = new Vmixed_gate_design_locked();
    return top;
}
int eval(Vmixed_gate_design_locked* top) {
    top->eval();
    main_time++;
    return 0;
}
int destruct(Vmixed_gate_design_locked* top) {
    if (top != nullptr) {
        delete top;
        top = nullptr;
    }
    return 0;
}
VerilatedVcdC* start_vcd_trace(Vmixed_gate_design_locked* top, const char* filename) {
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open(filename);
    return tfp;
}
int add_to_vcd_trace(VerilatedVcdC* tfp, int time) {
    tfp->dump(time);
    return 0;
}
int flush_vcd_trace(VerilatedVcdC* tfp) {
    tfp->flush();
    return 0;
}
int stop_vcd_trace(VerilatedVcdC* tfp) {
    tfp->close();
    return 0;
}
bool get_finished() {
    return Verilated::gotFinish();
}
void set_finished(bool b) {
    Verilated::gotFinish(b);
}
void set_vl_finish_callback(vl_finish_callback callback) {
    vl_user_finish = callback;
}
void set_command_args(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
}

uint32_t get_O1(Vmixed_gate_design_locked* top){return top->O1;}
uint32_t get_O2(Vmixed_gate_design_locked* top){return top->O2;}
uint32_t get_O3(Vmixed_gate_design_locked* top){return top->O3;}
uint32_t get_I1(Vmixed_gate_design_locked* top){return top->I1;}
uint32_t get_I2(Vmixed_gate_design_locked* top){return top->I2;}
uint32_t get_I3(Vmixed_gate_design_locked* top){return top->I3;}
uint32_t get_I4(Vmixed_gate_design_locked* top){return top->I4;}
uint32_t get_keyinput0(Vmixed_gate_design_locked* top){return top->keyinput0;}
uint32_t get_keyinput1(Vmixed_gate_design_locked* top){return top->keyinput1;}
uint32_t get_keyinput2(Vmixed_gate_design_locked* top){return top->keyinput2;}
uint32_t get_keyinput3(Vmixed_gate_design_locked* top){return top->keyinput3;}
uint32_t get_keyinput4(Vmixed_gate_design_locked* top){return top->keyinput4;}
uint32_t get_keyinput5(Vmixed_gate_design_locked* top){return top->keyinput5;}
uint32_t get_keyinput6(Vmixed_gate_design_locked* top){return top->keyinput6;}
int set_I1(Vmixed_gate_design_locked* top, uint32_t new_value){ top->I1 = new_value; return 0;}
int set_I2(Vmixed_gate_design_locked* top, uint32_t new_value){ top->I2 = new_value; return 0;}
int set_I3(Vmixed_gate_design_locked* top, uint32_t new_value){ top->I3 = new_value; return 0;}
int set_I4(Vmixed_gate_design_locked* top, uint32_t new_value){ top->I4 = new_value; return 0;}
int set_keyinput0(Vmixed_gate_design_locked* top, uint32_t new_value){ top->keyinput0 = new_value; return 0;}
int set_keyinput1(Vmixed_gate_design_locked* top, uint32_t new_value){ top->keyinput1 = new_value; return 0;}
int set_keyinput2(Vmixed_gate_design_locked* top, uint32_t new_value){ top->keyinput2 = new_value; return 0;}
int set_keyinput3(Vmixed_gate_design_locked* top, uint32_t new_value){ top->keyinput3 = new_value; return 0;}
int set_keyinput4(Vmixed_gate_design_locked* top, uint32_t new_value){ top->keyinput4 = new_value; return 0;}
int set_keyinput5(Vmixed_gate_design_locked* top, uint32_t new_value){ top->keyinput5 = new_value; return 0;}
int set_keyinput6(Vmixed_gate_design_locked* top, uint32_t new_value){ top->keyinput6 = new_value; return 0;}
}