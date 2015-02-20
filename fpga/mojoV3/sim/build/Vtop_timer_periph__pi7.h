// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef _Vtop_timer_periph__pi7_H_
#define _Vtop_timer_periph__pi7_H_

#include "verilated.h"
#include "Vtop__Dpi.h"

class Vtop__Syms;

//----------

VL_MODULE(Vtop_timer_periph__pi7) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_i,0,0);
    VL_OUT8(intr_systick_o,0,0);
    VL_OUT8(intr_hires_o,0,0);
    VL_IN8(addr_i,7,0);
    VL_IN8(we_i,0,0);
    VL_IN8(stb_i,0,0);
    //char	__VpadToAlign7[1];
    VL_OUT(data_o,31,0);
    VL_IN(data_i,31,0);
    
    // LOCAL SIGNALS
    VL_SIG(__PVT__systick_count,31,0);
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vtop__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vtop_timer_periph__pi7& operator= (const Vtop_timer_periph__pi7&);	///< Copying not allowed
    Vtop_timer_periph__pi7(const Vtop_timer_periph__pi7&);	///< Copying not allowed
  public:
    Vtop_timer_periph__pi7(const char* name="TOP");
    ~Vtop_timer_periph__pi7();
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_soc__u_timer__2(Vtop__Syms* __restrict vlSymsp);
    static void	_initial__TOP__v__u_soc__u_timer(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_soc__u_timer__1(Vtop__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
