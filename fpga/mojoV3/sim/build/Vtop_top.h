// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef _Vtop_top_H_
#define _Vtop_top_H_

#include "verilated.h"
#include "Vtop__Dpi.h"

class Vtop__Syms;
class Vtop_cpu_if__pi1;
class Vtop_soc__pi2;

//----------

VL_MODULE(Vtop_top) {
  public:
    // CELLS
    Vtop_cpu_if__pi1*  	u_cpu;
    Vtop_soc__pi2*     	u_soc;
    
    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(cclk,0,0);
    VL_IN8(rx,0,0);
    VL_IN8(tx,0,0);
    VL_OUT8(LED,7,0);
    VL_OUT8(flash_cs,0,0);
    VL_OUT8(flash_si,0,0);
    VL_IN8(flash_so,0,0);
    VL_OUT8(flash_sck,0,0);
    VL_OUT8(tx__out,0,0);
    VL_OUT8(tx__en,0,0);
    VL_IN16(W1A,15,0);
    VL_IN16(W1B,15,0);
    VL_IN16(W2C,15,0);
    VL_OUT16(W1A__out,15,0);
    VL_OUT16(W1A__en,15,0);
    VL_OUT16(W1B__out,15,0);
    VL_OUT16(W1B__en,15,0);
    VL_OUT16(W2C__out,15,0);
    VL_OUT16(W2C__en,15,0);
    //char	__VpadToAlign30[2];
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__reset,0,0);
    VL_SIG8(__PVT__dmem_ack,0,0);
    VL_SIG8(__PVT__imem_ack,0,0);
    VL_SIG8(__PVT__dmem_web,3,0);
    VL_SIG8(__PVT__u_cclk_detector__DOT__ready_d,0,0);
    VL_SIG8(__PVT__u_cclk_detector__DOT__ready_q,0,0);
    VL_SIG16(__PVT__u_cclk_detector__DOT__ctr_d,9,0);
    VL_SIG16(__PVT__u_cclk_detector__DOT__ctr_q,9,0);
    //char	__VpadToAlign46[2];
    VL_SIG(__PVT__dmem_data_r,31,0);
    VL_SIG(__PVT__imem_data,31,0);
    VL_SIG8(__PVT__u_ram__DOT__dp8_0__DOT__mem[6000],7,0);
    VL_SIG8(__PVT__u_ram__DOT__dp8_1__DOT__mem[6000],7,0);
    VL_SIG8(__PVT__u_ram__DOT__dp8_2__DOT__mem[6000],7,0);
    VL_SIG8(__PVT__u_ram__DOT__dp8_3__DOT__mem[6000],7,0);
    
    // LOCAL VARIABLES
    VL_SIG8(u_ram__DOT____Vcellout__dp8_0__datab_o,7,0);
    VL_SIG8(u_ram__DOT____Vcellout__dp8_0__dataa_o,7,0);
    VL_SIG8(u_ram__DOT____Vcellout__dp8_1__datab_o,7,0);
    VL_SIG8(u_ram__DOT____Vcellout__dp8_1__dataa_o,7,0);
    VL_SIG8(u_ram__DOT____Vcellout__dp8_2__datab_o,7,0);
    VL_SIG8(u_ram__DOT____Vcellout__dp8_2__dataa_o,7,0);
    VL_SIG8(u_ram__DOT____Vcellout__dp8_3__datab_o,7,0);
    VL_SIG8(u_ram__DOT____Vcellout__dp8_3__dataa_o,7,0);
    VL_SIG8(u_ram__DOT__dp8_0__DOT____Vlvbound2,7,0);
    VL_SIG8(u_ram__DOT__dp8_1__DOT____Vlvbound2,7,0);
    VL_SIG8(u_ram__DOT__dp8_2__DOT____Vlvbound2,7,0);
    VL_SIG8(u_ram__DOT__dp8_3__DOT____Vlvbound2,7,0);
    VL_SIG8(__Vdlyvval__u_ram__DOT__dp8_0__DOT__mem__v0,7,0);
    VL_SIG8(__Vdlyvset__u_ram__DOT__dp8_0__DOT__mem__v0,0,0);
    VL_SIG8(__Vdlyvval__u_ram__DOT__dp8_1__DOT__mem__v0,7,0);
    VL_SIG8(__Vdlyvset__u_ram__DOT__dp8_1__DOT__mem__v0,0,0);
    VL_SIG8(__Vdlyvval__u_ram__DOT__dp8_2__DOT__mem__v0,7,0);
    VL_SIG8(__Vdlyvset__u_ram__DOT__dp8_2__DOT__mem__v0,0,0);
    VL_SIG8(__Vdlyvval__u_ram__DOT__dp8_3__DOT__mem__v0,7,0);
    VL_SIG8(__Vdlyvset__u_ram__DOT__dp8_3__DOT__mem__v0,0,0);
    VL_SIG16(__Vdlyvdim0__u_ram__DOT__dp8_0__DOT__mem__v0,12,0);
    VL_SIG16(__Vdlyvdim0__u_ram__DOT__dp8_1__DOT__mem__v0,12,0);
    VL_SIG16(__Vdlyvdim0__u_ram__DOT__dp8_2__DOT__mem__v0,12,0);
    VL_SIG16(__Vdlyvdim0__u_ram__DOT__dp8_3__DOT__mem__v0,12,0);
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign24092[4];
    Vtop__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vtop_top& operator= (const Vtop_top&);	///< Copying not allowed
    Vtop_top(const Vtop_top&);	///< Copying not allowed
  public:
    Vtop_top(const char* name="TOP");
    ~Vtop_top();
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
    static void	_combo__TOP__v__2(Vtop__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__6(Vtop__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__9(Vtop__Syms* __restrict vlSymsp);
    static void	_initial__TOP__v(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__10(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__4(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__5(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__8(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__1(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__7(Vtop__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
