AltOr32 - Alternative Lightweight OpenRisc CPU
==============================================

AltOR32 is an OpenRISC 1000 architecture derived RISC CPU targeted at small FPGAs and contains only the most basic ISA features from the OpenRisc project. 
Instructions & registers relating to Vector, floating-point, 64-bit extensions, MMU & Cache have been omitted. 
The aim of AltOR32 is to provide a simple 32-bit soft CPU architecture aimed at control applications that can fit in low-end FPGA technology. 

This design implements all instructions that cannot be disabled. Anything else is viewed as beyond the scope of this cut-down soft-CPU implementation. 

AltOR32 does not make use of delay slots, unlike the original OpenRisc implementation. 
Due to this, the or1knd toolchain is required.

##### Toolchain

The 'or1knd' toolchain is required for this target. 

To build from source: 

`git clone git://github.com/openrisc/or1k-src.git`
`git clone git://github.com/openrisc/or1k-gcc.git`

Build the first set of tools, binutils etc:

`../or1k-src/configure --target=or1knd-elf --prefix=/opt/or1k-toolchain --enable-shared --disable-itcl --disable-tk --disable-tcl --disable-winsup --disable-libgui --disable-rda --disable-sid --disable-sim --disable-gdb --with-sysroot --disable-newlib --disable-libgloss --disable-werror` 
`make`
`make install`

Build gcc:

`../or1k-gcc/configure --target=or1knd-elf --prefix=/opt/or1k-toolchain --enable-languages=c --disable-shared --disable-libssp --disable-werror`
`make`
`make install`

##### Verilator

The project contains a Verilator cycle accurate model of the CPU which can execute the same code as the simulator. Waveforms can be outputted and viewed in GTKWave. 

##### Current Status

- Pipelined Verilog core with optional instruction & data cache. 
- Synthesizes to ~100MHz on a Xilinx Spartan 6 LX9 -3 
- Harvard architecture (separate instruction & data cache / memory interfaces). 
- Support for interrupts & tick timer. 
- Also contains a smaller non-pipelined 'lite' version.

##### Instruction Set Simulator

- A simple simulator for OpenRisc instructions. 
- Able to execute OpenRisc 1000 (ORBIS32) code compiled with the following options: 
-msoft-div -msoft-float -msoft-mul -mno-ror -mno-cmov -mno-sext 
- Extensible
