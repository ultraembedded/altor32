// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef _Vtop_soc__pi2_H_
#define _Vtop_soc__pi2_H_

#include "verilated.h"
#include "Vtop__Dpi.h"

class Vtop__Syms;
class Vtop_uart_periph__U64;
class Vtop_timer_periph__pi7;
class Vtop_intr_periph__E0;

//----------

VL_MODULE(Vtop_soc__pi2) {
  public:
    // CELLS
    Vtop_uart_periph__U64*	u_uart;
    Vtop_timer_periph__pi7*	u_timer;
    Vtop_intr_periph__E0*	u_intr;
    
    // PORTS
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_i,0,0);
    VL_IN8(ext_intr_i,0,-1);
    VL_OUT8(intr_o,0,0);
    VL_OUT8(uart_tx_o,0,0);
    VL_IN8(uart_rx_i,0,0);
    VL_IN8(io_we_i,0,0);
    VL_IN8(io_stb_i,0,0);
    VL_OUT8(io_ack_o,0,0);
    VL_OUT8(__PVT__gpio,7,0);
    //char	__VpadToAlign10[2];
    VL_IN(io_addr_i,31,0);
    VL_IN(io_data_i,31,0);
    VL_OUT(io_data_o,31,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__uart0_we,0,0);
    VL_SIG8(__PVT__uart0_stb,0,0);
    VL_SIG8(__PVT__timer_we,0,0);
    VL_SIG8(__PVT__timer_stb,0,0);
    VL_SIG8(__PVT__intr_we,0,0);
    VL_SIG8(__PVT__intr_stb,0,0);
    VL_SIG8(__PVT__gpio0_we,0,0);
    VL_SIG8(__PVT__gpio0_stb,0,0);
    VL_SIG8(__PVT__u_gpio0__DOT__ctrl,7,0);
    VL_SIG8(__PVT__u_gpio0__DOT__line,7,0);
    VL_SIG8(__PVT__u_gpio0__DOT__llgpio,7,0);
    //char	__VpadToAlign39[1];
    VL_SIG(__PVT__gpio0_data_r,31,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vcellout__u_gpio0__dat_o,7,0);
    //char	__VpadToAlign49[3];
    
    // INTERNAL VARIABLES
  private:
    Vtop__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vtop_soc__pi2& operator= (const Vtop_soc__pi2&);	///< Copying not allowed
    Vtop_soc__pi2(const Vtop_soc__pi2&);	///< Copying not allowed
  public:
    Vtop_soc__pi2(const char* name="TOP");
    ~Vtop_soc__pi2();
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_soc__10(Vtop__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u_soc__15(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_soc__5(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_soc__6(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_soc__8(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_soc__1(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_soc__11(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_soc__12(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_soc__14(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_soc__16(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_soc__3(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_soc__7(Vtop__Syms* __restrict vlSymsp);
    uint32_t	get_uart_data();
    bool	get_uart_wr();
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
