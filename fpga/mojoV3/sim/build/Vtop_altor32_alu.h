// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef _Vtop_altor32_alu_H_
#define _Vtop_altor32_alu_H_

#include "verilated.h"
#include "Vtop__Dpi.h"

class Vtop__Syms;

//----------

VL_MODULE(Vtop_altor32_alu) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(op_i,3,0);
    VL_IN8(c_i,0,0);
    VL_OUT8(c_o,0,0);
    VL_OUT8(c_update_o,0,0);
    VL_OUT8(equal_o,0,0);
    VL_OUT8(greater_than_signed_o,0,0);
    VL_OUT8(greater_than_o,0,0);
    VL_OUT8(less_than_signed_o,0,0);
    VL_OUT8(less_than_o,0,0);
    VL_OUT8(flag_update_o,0,0);
    //char	__VpadToAlign10[2];
    VL_IN(a_i,31,0);
    VL_IN(b_i,31,0);
    VL_OUT(p_o,31,0);
    
    // LOCAL SIGNALS
    VL_SIG16(__PVT__shift_right_fill_r,31,16);
    //char	__VpadToAlign30[2];
    VL_SIG(__PVT__result_r,31,0);
    VL_SIG(__PVT__shift_right_1_r,31,0);
    VL_SIG(__PVT__shift_right_2_r,31,0);
    VL_SIG(__PVT__shift_right_4_r,31,0);
    VL_SIG(__PVT__shift_right_8_r,31,0);
    VL_SIG(__PVT__shift_left_1_r,31,0);
    VL_SIG(__PVT__shift_left_2_r,31,0);
    VL_SIG(__PVT__shift_left_4_r,31,0);
    VL_SIG(__PVT__shift_left_8_r,31,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vfunc_less_than_signed__0__Vfuncout,0,0);
    //char	__VpadToAlign73[3];
    VL_SIG(__Vfunc_less_than_signed__0__x,31,0);
    VL_SIG(__Vfunc_less_than_signed__0__y,31,0);
    VL_SIG(__Vfunc_less_than_signed__0__v,31,0);
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign92[4];
    Vtop__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vtop_altor32_alu& operator= (const Vtop_altor32_alu&);	///< Copying not allowed
    Vtop_altor32_alu(const Vtop_altor32_alu&);	///< Copying not allowed
  public:
    Vtop_altor32_alu(const char* name="TOP");
    ~Vtop_altor32_alu();
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_cpu__u1_cpu__u_exec__alu__2(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_cpu__u1_cpu__u_exec__alu__1(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_cpu__u1_cpu__u_exec__alu__3(Vtop__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
