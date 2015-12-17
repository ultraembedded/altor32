// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef _Vtop_altor32_regfile_sim_H_
#define _Vtop_altor32_regfile_sim_H_

#include "verilated.h"
#include "Vtop__Dpi.h"

class Vtop__Syms;

//----------

VL_MODULE(Vtop_altor32_regfile_sim) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_i,0,0);
    VL_IN8(wr_i,0,0);
    VL_IN8(ra_i,4,0);
    VL_IN8(rb_i,4,0);
    VL_IN8(rd_i,4,0);
    //char	__VpadToAlign6[2];
    VL_OUT(reg_ra_o,31,0);
    VL_OUT(reg_rb_o,31,0);
    VL_IN(reg_rd_i,31,0);
    
    // LOCAL SIGNALS
    VL_SIG(__PVT__reg_r1_sp,31,0);
    VL_SIG(__PVT__reg_r2_fp,31,0);
    VL_SIG(__PVT__reg_r3,31,0);
    VL_SIG(__PVT__reg_r4,31,0);
    VL_SIG(__PVT__reg_r5,31,0);
    VL_SIG(__PVT__reg_r6,31,0);
    VL_SIG(__PVT__reg_r7,31,0);
    VL_SIG(__PVT__reg_r8,31,0);
    VL_SIG(__PVT__reg_r9_lr,31,0);
    VL_SIG(__PVT__reg_r10,31,0);
    VL_SIG(__PVT__reg_r11,31,0);
    VL_SIG(__PVT__reg_r12,31,0);
    VL_SIG(__PVT__reg_r13,31,0);
    VL_SIG(__PVT__reg_r14,31,0);
    VL_SIG(__PVT__reg_r15,31,0);
    VL_SIG(__PVT__reg_r16,31,0);
    VL_SIG(__PVT__reg_r17,31,0);
    VL_SIG(__PVT__reg_r18,31,0);
    VL_SIG(__PVT__reg_r19,31,0);
    VL_SIG(__PVT__reg_r20,31,0);
    VL_SIG(__PVT__reg_r21,31,0);
    VL_SIG(__PVT__reg_r22,31,0);
    VL_SIG(__PVT__reg_r23,31,0);
    VL_SIG(__PVT__reg_r24,31,0);
    VL_SIG(__PVT__reg_r25,31,0);
    VL_SIG(__PVT__reg_r26,31,0);
    VL_SIG(__PVT__reg_r27,31,0);
    VL_SIG(__PVT__reg_r28,31,0);
    VL_SIG(__PVT__reg_r29,31,0);
    VL_SIG(__PVT__reg_r30,31,0);
    VL_SIG(__PVT__reg_r31,31,0);
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign156[4];
    Vtop__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vtop_altor32_regfile_sim& operator= (const Vtop_altor32_regfile_sim&);	///< Copying not allowed
    Vtop_altor32_regfile_sim(const Vtop_altor32_regfile_sim&);	///< Copying not allowed
  public:
    Vtop_altor32_regfile_sim(const char* name="TOP");
    ~Vtop_altor32_regfile_sim();
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
    static void	_sequent__TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank__1(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank__2(Vtop__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
