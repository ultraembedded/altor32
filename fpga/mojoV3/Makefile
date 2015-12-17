PROJECT=fpga
PART=xc6slx9-tqg144
CABLE ?= papilio

TOOL_PATH ?= /opt/Xilinx/14.7/ISE_DS/ISE/bin/lin64

RTL_ROOT   = ../../rtl

CPU_DIR    = $(RTL_ROOT)/cpu_lite
SOC_DIR    = $(RTL_ROOT)/soc
MEM_DIR    = $(RTL_ROOT)/memory
PERIPH_DIR = $(RTL_ROOT)/peripheral

CPU_FILES    = altor32_regfile_xil.v altor32_lite.v altor32_alu.v altor32.v altor32_regfile_sim.v
PERIPH_FILES = uart_periph.v uart.v timer_periph.v intr_periph.v gpio.v 
SOC_FILES    = soc_pif8.v dmem_mux3.v cpu_if.v soc.v
 
all: ${PROJECT}_routed.bin

project/${PROJECT}.prj: 
	mkdir -p project
	echo "verilog work \"../top.v\"" > project/${PROJECT}.prj
	echo "verilog work \"../cclk_detector.v\"" >> project/${PROJECT}.prj
	echo "verilog work \"../ram.v\"" >> project/${PROJECT}.prj
	#echo "vhdl work \"../program.vhd\"" >> project/${PROJECT}.prj
	@$(foreach SRC_FILE,$(SOC_FILES),echo "verilog work \"../$(SOC_DIR)/$(SRC_FILE)\"" >> project/${PROJECT}.prj;)
	@$(foreach SRC_FILE,$(CPU_FILES),echo "verilog work \"../$(CPU_DIR)/$(SRC_FILE)\"" >> project/${PROJECT}.prj;)
	@$(foreach SRC_FILE,$(PERIPH_FILES),echo "verilog work \"../$(PERIPH_DIR)/$(SRC_FILE)\"" >> project/${PROJECT}.prj;)

${PROJECT}.ngc: project/${PROJECT}.prj	
	cp ${PROJECT}.* project/
	mkdir -p project/xst/projnav.tmp/
	cd project; ${TOOL_PATH}/xst -intstyle ise -ifn ${PROJECT}.xst -ofn ${PROJECT}.syr
        
${PROJECT}.ngd: ${PROJECT}.ngc
	cd project; ${TOOL_PATH}/ngdbuild -intstyle ise -dd _ngo -nt timestamp \
	-uc ${PROJECT}.ucf -p ${PART} ${PROJECT}.ngc ${PROJECT}.ngd

${PROJECT}.ncd: ${PROJECT}.ngd
	cd project; ${TOOL_PATH}/map -intstyle ise -p ${PART} \
	 -w -detail -ir off -ignore_keep_hierarchy -pr b -timing -ol high -logic_opt on  \
	-o ${PROJECT}.ncd ${PROJECT}.ngd ${PROJECT}.pcf 

${PROJECT}_routed.ncd: ${PROJECT}.ncd
	cd project; ${TOOL_PATH}/par -w -intstyle ise -ol high ${PROJECT}.ncd ${PROJECT}_routed.ncd ${PROJECT}.pcf

${PROJECT}_routed.bin: ${PROJECT}_routed.ncd
	cd project; ${TOOL_PATH}/bitgen -f ${PROJECT}.ut -g Binary:Yes ${PROJECT}_routed.ncd

clean:
	@rm -rf project
	@rm sim.out
	@rm waveform.vcd
	

sim: sw/blink.c
	make -C sw
	iverilog -Wall -Wno-timescale -o sim.out -I. -I${CPU_DIR} -I${SOC_DIR} -I${PERIPH_DIR} -I${MEM_DIR} -DSIMULATION top_tb.v top.v cclk_detector.v ram.v $(addprefix ${CPU_DIR}/, ${CPU_FILES}) $(addprefix ${SOC_DIR}/, ${SOC_FILES}) $(addprefix ${PERIPH_DIR}/, ${PERIPH_FILES}) 
	vvp sim.out -vcd

