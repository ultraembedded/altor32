// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef _Vtop_cpu__I10000000_H_
#define _Vtop_cpu__I10000000_H_

#include "verilated.h"
#include "Vtop__Dpi.h"

class Vtop__Syms;
class Vtop_altor32_lite__I10000000;

//----------

VL_MODULE(Vtop_cpu__I10000000) {
  public:
    // CELLS
    Vtop_altor32_lite__I10000000*	u_exec;
    
    // PORTS
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_i,0,0);
    VL_IN8(intr_i,0,0);
    VL_IN8(nmi_i,0,0);
    VL_OUT8(fault_o,0,0);
    VL_OUT8(break_o,0,0);
    VL_OUT8(imem_cti_o,2,0);
    VL_OUT8(imem_cyc_o,0,0);
    VL_OUT8(imem_stb_o,0,0);
    VL_IN8(imem_stall_i,0,0);
    VL_IN8(imem_ack_i,0,0);
    VL_OUT8(dmem_cti_o,2,0);
    VL_OUT8(dmem_cyc_o,0,0);
    VL_OUT8(dmem_stb_o,0,0);
    VL_OUT8(dmem_we_o,0,0);
    VL_OUT8(dmem_sel_o,3,0);
    VL_IN8(dmem_stall_i,0,0);
    VL_IN8(dmem_ack_i,0,0);
    //char	__VpadToAlign18[2];
    VL_OUT(imem_addr_o,31,0);
    VL_IN(imem_dat_i,31,0);
    VL_OUT(dmem_addr_o,31,0);
    VL_IN(dmem_dat_i,31,0);
    VL_OUT(dmem_dat_o,31,0);
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign52[4];
    Vtop__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vtop_cpu__I10000000& operator= (const Vtop_cpu__I10000000&);	///< Copying not allowed
    Vtop_cpu__I10000000(const Vtop_cpu__I10000000&);	///< Copying not allowed
  public:
    Vtop_cpu__I10000000(const char* name="TOP");
    ~Vtop_cpu__I10000000();
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_cpu__u1_cpu__5(Vtop__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u_cpu__u1_cpu__9(Vtop__Syms* __restrict vlSymsp);
    static void	_initial__TOP__v__u_cpu__u1_cpu(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_cpu__u1_cpu__4(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_cpu__u1_cpu__1(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_cpu__u1_cpu__2(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_cpu__u1_cpu__6(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_cpu__u1_cpu__7(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_cpu__u1_cpu__8(Vtop__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
