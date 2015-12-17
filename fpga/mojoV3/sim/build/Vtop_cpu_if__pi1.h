// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef _Vtop_cpu_if__pi1_H_
#define _Vtop_cpu_if__pi1_H_

#include "verilated.h"
#include "Vtop__Dpi.h"

class Vtop__Syms;
class Vtop_cpu__I10000000;

//----------

VL_MODULE(Vtop_cpu_if__pi1) {
  public:
    // CELLS
    Vtop_cpu__I10000000*	u1_cpu;
    
    // PORTS
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_OUT8(__PVT__imem0_sel_o,3,0);
    VL_OUT8(__PVT__imem0_stb_o,0,0);
    VL_OUT8(__PVT__imem0_cyc_o,0,0);
    VL_OUT8(__PVT__imem0_cti_o,2,0);
    VL_IN8(__PVT__imem0_ack_i,0,0);
    VL_IN8(__PVT__imem0_stall_i,0,0);
    VL_OUT8(__PVT__dmem0_sel_o,3,0);
    VL_OUT8(__PVT__dmem0_we_o,0,0);
    VL_OUT8(__PVT__dmem0_stb_o,0,0);
    VL_OUT8(__PVT__dmem0_cyc_o,0,0);
    VL_OUT8(__PVT__dmem0_cti_o,2,0);
    VL_IN8(__PVT__dmem0_ack_i,0,0);
    VL_IN8(__PVT__dmem0_stall_i,0,0);
    VL_OUT8(__PVT__dmem1_sel_o,3,0);
    VL_OUT8(__PVT__dmem1_we_o,0,0);
    VL_OUT8(__PVT__dmem1_stb_o,0,0);
    VL_OUT8(__PVT__dmem1_cyc_o,0,0);
    VL_OUT8(__PVT__dmem1_cti_o,2,0);
    VL_IN8(__PVT__dmem1_ack_i,0,0);
    VL_IN8(__PVT__dmem1_stall_i,0,0);
    VL_OUT8(__PVT__dmem2_sel_o,3,0);
    VL_OUT8(__PVT__dmem2_we_o,0,0);
    VL_OUT8(__PVT__dmem2_stb_o,0,0);
    VL_OUT8(__PVT__dmem2_cyc_o,0,0);
    VL_OUT8(__PVT__dmem2_cti_o,2,0);
    VL_IN8(__PVT__dmem2_ack_i,0,0);
    VL_IN8(__PVT__dmem2_stall_i,0,0);
    VL_OUT8(__PVT__fault_o,0,0);
    VL_OUT8(__PVT__break_o,0,0);
    VL_IN8(__PVT__intr_i,0,0);
    VL_IN8(__PVT__nmi_i,0,0);
    //char	__VpadToAlign33[3];
    VL_OUT(__PVT__imem0_addr_o,31,0);
    VL_IN(__PVT__imem0_data_i,31,0);
    VL_OUT(__PVT__dmem0_addr_o,31,0);
    VL_OUT(__PVT__dmem0_data_o,31,0);
    VL_IN(__PVT__dmem0_data_i,31,0);
    VL_OUT(__PVT__dmem1_addr_o,31,0);
    VL_OUT(__PVT__dmem1_data_o,31,0);
    VL_IN(__PVT__dmem1_data_i,31,0);
    VL_OUT(__PVT__dmem2_addr_o,31,0);
    VL_OUT(__PVT__dmem2_data_o,31,0);
    VL_IN(__PVT__dmem2_data_i,31,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__dmem_stall,0,0);
    VL_SIG8(__PVT__dmem_ack,0,0);
    //char	__VpadToAlign86[2];
    VL_SIG(__PVT__dmem_data_r,31,0);
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign100[4];
    Vtop__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vtop_cpu_if__pi1& operator= (const Vtop_cpu_if__pi1&);	///< Copying not allowed
    Vtop_cpu_if__pi1(const Vtop_cpu_if__pi1&);	///< Copying not allowed
  public:
    Vtop_cpu_if__pi1(const char* name="TOP");
    ~Vtop_cpu_if__pi1();
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_cpu__2(Vtop__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u_cpu__3(Vtop__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__v__u_cpu__11(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_cpu__10(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_cpu__5(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_cpu__7(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_cpu__9(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_cpu__1(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_cpu__12(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_cpu__6(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_cpu__8(Vtop__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
