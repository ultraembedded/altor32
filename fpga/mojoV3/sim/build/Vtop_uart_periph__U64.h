// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef _Vtop_uart_periph__U64_H_
#define _Vtop_uart_periph__U64_H_

#include "verilated.h"
#include "Vtop__Dpi.h"

class Vtop__Syms;
class Vtop_uart__U64;

//----------

VL_MODULE(Vtop_uart_periph__U64) {
  public:
    // CELLS
    Vtop_uart__U64*    	u1_uart;
    
    // PORTS
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_i,0,0);
    VL_OUT8(intr_o,0,0);
    VL_OUT8(tx_o,0,0);
    VL_IN8(rx_i,0,0);
    VL_IN8(addr_i,7,0);
    VL_IN8(we_i,0,0);
    VL_IN8(stb_i,0,0);
    VL_OUT(data_o,31,0);
    VL_IN(data_i,31,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__uart_tx_data_q,7,0);
    VL_SIG8(__PVT__uart_wr_q,0,0);
    VL_SIG8(__PVT__uart_rd_q,0,0);
    //char	__VpadToAlign23[1];
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vtop__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vtop_uart_periph__U64& operator= (const Vtop_uart_periph__U64&);	///< Copying not allowed
    Vtop_uart_periph__U64(const Vtop_uart_periph__U64&);	///< Copying not allowed
  public:
    Vtop_uart_periph__U64(const char* name="TOP");
    ~Vtop_uart_periph__U64();
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_soc__u_uart__1(Vtop__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u_soc__u_uart__7(Vtop__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u_soc__u_uart__8(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_soc__u_uart__3(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_soc__u_uart__4(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_soc__u_uart__6(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_soc__u_uart__5(Vtop__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
