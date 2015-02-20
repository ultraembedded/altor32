// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vtop__Syms_H_
#define _Vtop__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vtop.h"
#include "Vtop_top.h"
#include "Vtop_cpu_if__pi1.h"
#include "Vtop_soc__pi2.h"
#include "Vtop_cpu__I10000000.h"
#include "Vtop_uart_periph__U64.h"
#include "Vtop_timer_periph__pi7.h"
#include "Vtop_intr_periph__E0.h"
#include "Vtop_altor32_lite__I10000000.h"
#include "Vtop_uart__U64.h"
#include "Vtop_altor32_alu.h"
#include "Vtop_altor32_regfile_sim.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class Vtop__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool	__Vm_activity;		///< Used by trace routines to determine change occurred
    bool	__Vm_didInit;
    //char	__VpadToAlign10[6];
    
    // SUBCELL STATE
    Vtop*                          TOPp;
    Vtop_top                       TOP__v;
    Vtop_cpu_if__pi1               TOP__v__u_cpu;
    Vtop_cpu__I10000000            TOP__v__u_cpu__u1_cpu;
    Vtop_altor32_lite__I10000000   TOP__v__u_cpu__u1_cpu__u_exec;
    Vtop_altor32_alu               TOP__v__u_cpu__u1_cpu__u_exec__alu;
    Vtop_altor32_regfile_sim       TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank;
    Vtop_soc__pi2                  TOP__v__u_soc;
    Vtop_intr_periph__E0           TOP__v__u_soc__u_intr;
    Vtop_timer_periph__pi7         TOP__v__u_soc__u_timer;
    Vtop_uart_periph__U64          TOP__v__u_soc__u_uart;
    Vtop_uart__U64                 TOP__v__u_soc__u_uart__u1_uart;
    
    // COVERAGE
    
    // SCOPE NAMES
    VerilatedScope __Vscope_TOP;
    VerilatedScope __Vscope_v;
    VerilatedScope __Vscope_v__u_cpu__u1_cpu;
    VerilatedScope __Vscope_v__u_cpu__u1_cpu__u_exec;
    VerilatedScope __Vscope_v__u_cpu__u1_cpu__u_exec__alu;
    VerilatedScope __Vscope_v__u_cpu__u1_cpu__u_exec__genblk1__REGFILE_SIM__reg_bank;
    VerilatedScope __Vscope_v__u_soc;
    VerilatedScope __Vscope_v__u_soc__u_intr;
    VerilatedScope __Vscope_v__u_soc__u_timer;
    VerilatedScope __Vscope_v__u_soc__u_uart;
    VerilatedScope __Vscope_v__u_soc__u_uart__u1_uart;
    
    // CREATORS
    Vtop__Syms(Vtop* topp, const char* namep);
    ~Vtop__Syms() {};
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r;}
    
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
