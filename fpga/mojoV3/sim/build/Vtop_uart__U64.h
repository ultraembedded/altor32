// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef _Vtop_uart__U64_H_
#define _Vtop_uart__U64_H_

#include "verilated.h"
#include "Vtop__Dpi.h"

class Vtop__Syms;

//----------

VL_MODULE(Vtop_uart__U64) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_i,0,0);
    VL_IN8(data_i,7,0);
    VL_OUT8(data_o,7,0);
    VL_IN8(wr_i,0,0);
    VL_IN8(rd_i,0,0);
    VL_OUT8(tx_busy_o,0,0);
    VL_OUT8(rx_ready_o,0,0);
    VL_OUT8(break_o,0,0);
    VL_IN8(rxd_i,0,0);
    VL_OUT8(txd_o,0,0);
    //char	__VpadToAlign11[1];
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__tx_buf,7,0);
    VL_SIG8(__PVT__tx_buf_full,0,0);
    VL_SIG8(__PVT__tx_busy,0,0);
    VL_SIG8(__PVT__tx_bits,3,0);
    VL_SIG8(__PVT__tx_shift_reg,7,0);
    VL_SIG8(__PVT__i_rxd,0,0);
    VL_SIG8(__PVT__rx_bits,3,0);
    VL_SIG8(__PVT__rx_shift_reg,7,0);
    VL_SIG(__PVT__tx_count,31,0);
    VL_SIG(__PVT__rx_count,31,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__rx_bits,3,0);
    VL_SIG8(__Vdly__rx_shift_reg,7,0);
    VL_SIG8(__Vdly__tx_bits,3,0);
    VL_SIG8(__Vdly__tx_shift_reg,7,0);
    VL_SIG8(__Vdly__tx_buf,7,0);
    VL_SIG8(__Vdly__tx_buf_full,0,0);
    //char	__VpadToAlign42[2];
    VL_SIG(__Vdly__rx_count,31,0);
    VL_SIG(__Vdly__tx_count,31,0);
    
    // INTERNAL VARIABLES
  private:
    Vtop__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vtop_uart__U64& operator= (const Vtop_uart__U64&);	///< Copying not allowed
    Vtop_uart__U64(const Vtop_uart__U64&);	///< Copying not allowed
  public:
    Vtop_uart__U64(const char* name="TOP");
    ~Vtop_uart__U64();
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_soc__u_uart__u1_uart__2(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_soc__u_uart__u1_uart__1(Vtop__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
