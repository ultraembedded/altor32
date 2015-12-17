// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef _Vtop_intr_periph__E0_H_
#define _Vtop_intr_periph__E0_H_

#include "verilated.h"
#include "Vtop__Dpi.h"

class Vtop__Syms;

//----------

VL_MODULE(Vtop_intr_periph__E0) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_i,0,0);
    VL_OUT8(intr_o,0,0);
    VL_IN8(intr0_i,0,0);
    VL_IN8(intr1_i,0,0);
    VL_IN8(intr2_i,0,0);
    VL_IN8(intr3_i,0,0);
    VL_IN8(intr4_i,0,0);
    VL_IN8(intr5_i,0,0);
    VL_IN8(intr6_i,0,0);
    VL_IN8(intr7_i,0,0);
    VL_IN8(intr_ext_i,0,-1);
    VL_IN8(addr_i,7,0);
    VL_IN8(we_i,0,0);
    VL_IN8(stb_i,0,0);
    //char	__VpadToAlign15[1];
    VL_OUT(data_o,31,0);
    VL_IN(data_i,31,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__irq_status,7,0);
    VL_SIG8(__PVT__irq_mask,7,0);
    VL_SIG8(__PVT__v_irq_status,7,0);
    //char	__VpadToAlign31[1];
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__irq_status,7,0);
    VL_SIG8(__Vdly__irq_mask,7,0);
    //char	__VpadToAlign38[2];
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign44[4];
    Vtop__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vtop_intr_periph__E0& operator= (const Vtop_intr_periph__E0&);	///< Copying not allowed
    Vtop_intr_periph__E0(const Vtop_intr_periph__E0&);	///< Copying not allowed
  public:
    Vtop_intr_periph__E0(const char* name="TOP");
    ~Vtop_intr_periph__E0();
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_soc__u_intr__2(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_soc__u_intr__1(Vtop__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
