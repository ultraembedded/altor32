// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vtop_H_
#define _Vtop_H_

#include "verilated.h"
#include "Vtop__Dpi.h"

class Vtop__Syms;
class Vtop_top;

//----------

VL_MODULE(Vtop) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Vtop_top*          	v;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(cclk,0,0);
    VL_IN8(rx,0,0);
    VL_OUT8(tx,0,0);
    VL_OUT8(LED,7,0);
    VL_OUT8(flash_cs,0,0);
    VL_OUT8(flash_si,0,0);
    VL_IN8(flash_so,0,0);
    VL_OUT8(flash_sck,0,0);
    VL_INOUT16(W1A,15,0);
    VL_INOUT16(W1B,15,0);
    VL_INOUT16(W2C,15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__VinpClk__TOP__v____PVT__reset,0,0);
    VL_SIG8(__VinpClk__TOP__v__u_soc__rst_i,0,0);
    VL_SIG8(__VinpClk__TOP__v__u_soc__u_intr__rst_i,0,0);
    VL_SIG8(__VinpClk__TOP__v__u_soc__u_uart__rst_i,0,0);
    VL_SIG8(__VinpClk__TOP__v__u_cpu__u1_cpu__u_exec__rst_i,0,0);
    VL_SIG8(__VinpClk__TOP__v__u_soc__u_uart__u1_uart__rst_i,0,0);
    VL_SIG8(__VinpClk__TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank__rst_i,0,0);
    VL_SIG8(__Vclklast__TOP__v__clk,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__v____PVT__reset,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_soc__clk_i,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__v__u_soc__rst_i,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_soc__u_timer__clk_i,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_soc__u_timer__rst_i,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_soc__u_intr__clk_i,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__v__u_soc__u_intr__rst_i,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_soc__u_uart__clk_i,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__v__u_soc__u_uart__rst_i,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_cpu__u1_cpu__u_exec__clk_i,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__v__u_cpu__u1_cpu__u_exec__rst_i,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_soc__u_uart__u1_uart__clk_i,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__v__u_soc__u_uart__u1_uart__rst_i,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank__clk_i,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank__rst_i,0,0);
    VL_SIG8(__Vchglast__TOP__v__reset,0,0);
    VL_SIG8(__Vchglast__TOP__v__u_soc__rst_i,0,0);
    VL_SIG8(__Vchglast__TOP__v__u_soc__u_uart__rst_i,0,0);
    VL_SIG8(__Vchglast__TOP__v__u_soc__u_intr__rst_i,0,0);
    VL_SIG8(__Vchglast__TOP__v__u_cpu__u1_cpu__u_exec__rst_i,0,0);
    VL_SIG8(__Vchglast__TOP__v__u_soc__u_uart__u1_uart__rst_i,0,0);
    VL_SIG8(__Vchglast__TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank__rst_i,0,0);
    //char	__VpadToAlign54[2];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign60[4];
    Vtop__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vtop& operator= (const Vtop&);	///< Copying not allowed
    Vtop(const Vtop&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vtop(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vtop();
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vtop__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    static IData	_change_request(Vtop__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__2(Vtop__Syms* __restrict vlSymsp);
    static void	_eval(Vtop__Syms* __restrict vlSymsp);
    static void	_eval_initial(Vtop__Syms* __restrict vlSymsp);
    static void	_eval_settle(Vtop__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__6(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__3(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__1(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__5(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__7(Vtop__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
