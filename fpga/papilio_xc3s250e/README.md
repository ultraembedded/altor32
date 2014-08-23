FPGA - Papilio One 250k
=======================

##### Board
http://store.gadgetfactory.net/papilio-one-250k

##### Building
`make TOOL_PATH=/opt/Xilinx/14.5/ISE_DS/ISE/bin/lin64`

##### Running Firmware

The project has a x-modem bootloader located between 0x10000000 and 0x10002000.
To run some firmware on the project, build a binary which is linked to use 0x10002000 - 0x10004000, and then load using your favourite x-modem compatible terminal program.
The bootloader will jump to 0x10002100 upon successfull firmware download.
