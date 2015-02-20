//-----------------------------------------------------------------
//                           AltOR32 
//                Alternative Lightweight OpenRisc 
//                            V2.0
//                     Ultra-Embedded.com
//                   Copyright 2011 - 2013
//
//               Email: admin@ultra-embedded.com
//
//                       License: LGPL
//-----------------------------------------------------------------
//
// Copyright (C) 2011 - 2013 Ultra-Embedded.com
//
// This source file may be used and distributed without         
// restriction provided that this copyright statement is not    
// removed from the file and that any derivative work contains  
// the original copyright notice and the associated disclaimer. 
//
// This source file is free software; you can redistribute it   
// and/or modify it under the terms of the GNU Lesser General   
// Public License as published by the Free Software Foundation; 
// either version 2.1 of the License, or (at your option) any   
// later version.
//
// This source is distributed in the hope that it will be       
// useful, but WITHOUT ANY WARRANTY; without even the implied   
// warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR      
// PURPOSE.  See the GNU Lesser General Public License for more 
// details.
//
// You should have received a copy of the GNU Lesser General    
// Public License along with this source; if not, write to the 
// Free Software Foundation, Inc., 59 Temple Place, Suite 330, 
// Boston, MA  02111-1307  USA
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// TOP
//-----------------------------------------------------------------
module top
(
    // 50MHz clock
    input           clk /*verilator public*/,
    input           rst_n,
    input           cclk,    

    // UART
    input           rx /*verilator public*/,
    output          tx /*verilator public*/,

    // I/O Bus
    //inout [15:0]    W1A /*verilator public*/,
    //inout [15:0]    W1B /*verilator public*/,
    //inout [15:0]    W2C /*verilator public*/,
    
    //LEDS
    output [7:0]    LED /*verilator public*/

    // SPI Flash
    //output          flash_cs /*verilator public*/,
    //output          flash_si /*verilator public*/,
    //input           flash_so /*verilator public*/,
    //output          flash_sck /*verilator public*/

    //inout [7:0]     gpio /*verilator public*/
);

//-----------------------------------------------------------------
// Params
//-----------------------------------------------------------------
parameter       OSC_KHZ             = 50000;
parameter       CLK_KHZ             = 50000;
parameter       UART_BAUD           = 500000;

//-----------------------------------------------------------------
// Ports
//-----------------------------------------------------------------

// Port C
`define W2C_UNUSED_RANGE 15:0
`define W2C_UNUSED_WIDTH 16

// Port B
`define W1B_UNUSED_RANGE 15:0
`define W1B_UNUSED_WIDTH 16

// Port A
`define W1A_UNUSED_RANGE 15:0
`define W1A_UNUSED_WIDTH 16

//-----------------------------------------------------------------
// Registers / Wires
//-----------------------------------------------------------------
// Reset
reg         reset           = 1'b1;
//reg		    rst_next        = 1'b1;

wire [31:0]         soc_addr;
wire [31:0]         soc_data_w;
wire [31:0]         soc_data_r;
wire                soc_we;
wire                soc_stb;
wire                soc_ack;
wire                soc_irq;

wire[31:0]          dmem_address;
wire[31:0]          dmem_data_w;
wire[31:0]          dmem_data_r;
wire[3:0]           dmem_sel;
wire                dmem_we;
wire                dmem_stb;
reg                 dmem_ack;

wire[31:0]          imem_addr;
wire[31:0]          imem_data;
wire[3:0]           imem_sel;
wire                imem_stb;
reg                 imem_ack;

wire [7:0]          gpio;

//-----------------------------------------------------------------
// Instantiation
//-----------------------------------------------------------------

assign LED = gpio;

wire cclk_finished, tx_gated;
assign tx = cclk_finished ? tx_gated : 1'bZ;
cclk_detector u_cclk_detector(
    .clk(clk),
    .rst(reset),
    .cclk(cclk),
    .ready(cclk_finished)
);


wire [3:0]          dmem_web = (dmem_stb & dmem_we) ? dmem_sel : 4'b0;

// BlockRAM
ram  
#(
    .SIZE(6000) // 24KB
) 
u_ram
(
    .clka_i(clk), 
    .ena_i(1'b1),
    .wea_i(4'b0), 
    .addra_i(imem_addr[31:2]), 
    .dataa_i(32'b0),
    .dataa_o(imem_data),

    .clkb_i(clk), 
    .enb_i(1'b1),
    .web_i(dmem_web), 
    .addrb_i(dmem_address[31:2]), 
    .datab_i(dmem_data_w),
    .datab_o(dmem_data_r)
);

// CPU
cpu_if
#(
    .CLK_KHZ(CLK_KHZ),
    .BOOT_VECTOR(32'h0000000),
    .ISR_VECTOR(32'h10000000),
    .ENABLE_ICACHE("DISABLED"),
    .ENABLE_DCACHE("DISABLED"),

    `ifdef SIMULATION
    .REGISTER_FILE_TYPE("SIMULATION")
    `else
    .REGISTER_FILE_TYPE("XILINX")
    `endif
)
u_cpu
(
    // General - clocking & reset
    .clk_i(clk),
    .rst_i(reset),
    .fault_o(),
    .break_o(),
    .nmi_i(1'b0),
    .intr_i(soc_irq),

    // Instruction Memory 0 (0x10000000 - 0x10FFFFFF)
    .imem0_addr_o(imem_addr),
    .imem0_data_i(imem_data),
    .imem0_sel_o(imem_sel),
    .imem0_cti_o(),
    .imem0_cyc_o(),
    .imem0_stb_o(imem_stb),
    .imem0_stall_i(1'b0),
    .imem0_ack_i(imem_ack),

    // Data Memory 0 (0x10000000 - 0x10FFFFFF)
    .dmem0_addr_o(dmem_address),
    .dmem0_data_o(dmem_data_w),
    .dmem0_data_i(dmem_data_r),
    .dmem0_sel_o(dmem_sel),
    .dmem0_cti_o(),
    .dmem0_cyc_o(),
    .dmem0_we_o(dmem_we),
    .dmem0_stb_o(dmem_stb),
    .dmem0_stall_i(1'b0),
    .dmem0_ack_i(dmem_ack),
       
    // Data Memory 1 (0x11000000 - 0x11FFFFFF)
    .dmem1_addr_o(/*open*/),
    .dmem1_data_o(/*open*/),
    .dmem1_data_i(32'b0),
    .dmem1_sel_o(/*open*/),
    .dmem1_we_o(/*open*/),
    .dmem1_stb_o(/*open*/),
    .dmem1_cyc_o(/*open*/),
    .dmem1_cti_o(/*open*/),
    .dmem1_stall_i(1'b0),
    .dmem1_ack_i(1'b1),

    // Data Memory 2 (0x12000000 - 0x12FFFFFF)
    .dmem2_addr_o(soc_addr),
    .dmem2_data_o(soc_data_w),
    .dmem2_data_i(soc_data_r),
    .dmem2_sel_o(/*open*/),
    .dmem2_we_o(soc_we),
    .dmem2_stb_o(soc_stb),
    .dmem2_cyc_o(/*open*/),
    .dmem2_cti_o(/*open*/),
    .dmem2_stall_i(1'b0),
    .dmem2_ack_i(soc_ack)
);

// CPU SOC
soc
#(
    .CLK_KHZ(CLK_KHZ),
    .ENABLE_SYSTICK_TIMER("DISABLED"),
    .ENABLE_HIGHRES_TIMER("DISABLED"),
    .UART_BAUD(UART_BAUD),
    .EXTERNAL_INTERRUPTS(1)
)
u_soc
(
    // General - clocking & reset
    .clk_i(clk),
    .rst_i(reset),
    .ext_intr_i(1'b0),
    .intr_o(soc_irq),

    .uart_tx_o(tx_gated),
    .uart_rx_i(rx),

    // Memory Port
    .io_addr_i(soc_addr),    
    .io_data_i(soc_data_w),
    .io_data_o(soc_data_r),    
    .io_we_i(soc_we),
    .io_stb_i(soc_stb),
    .io_ack_o(soc_ack),

    .gpio(gpio)
);

//-----------------------------------------------------------------
// Implementation
//-----------------------------------------------------------------

// Reset Generator
always @(posedge clk) 
if (rst_n == 1'b0)
    reset       <= 1'b1;
else 
    reset    <= 1'b0;

// Ack
always @(posedge clk or posedge reset)
    if (reset == 1'b1)
        dmem_ack  <= 1'b0;
    else
        dmem_ack  <= dmem_stb;

// Ack
always @(posedge clk or posedge reset)
    if (reset == 1'b1)
        imem_ack  <= 1'b0;
    else
        imem_ack  <= imem_stb;


//-----------------------------------------------------------------
// Unused pins
//-----------------------------------------------------------------
//assign W1A[`W1A_UNUSED_RANGE] = {`W1A_UNUSED_WIDTH{1'bz}};
//assign W1B[`W1B_UNUSED_RANGE] = {`W1B_UNUSED_WIDTH{1'bz}};
//assign W2C[`W2C_UNUSED_RANGE] = {`W2C_UNUSED_WIDTH{1'bz}};

assign flash_cs     = 1'b0;
assign flash_sck    = 1'b0;
assign flash_si     = 1'b0;

endmodule
