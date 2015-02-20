###############################################################################
# Configuration
###############################################################################
# Target
TARGET ?= blink

# Memory Layout
MEMBASE ?= 0x0000000
MEMSIZE ?= 12384
MEMNAME ?= sram

###############################################################################
# Files
###############################################################################
INCLUDE_DIRS ?= -I../../../sw/common 
OBJ = boot.o
OBJS = $(patsubst %.c,%.o,$(wildcard *.c))
OBJ+= $(OBJS)

###############################################################################
## Makefile
###############################################################################

# Tools
OR1K_TCHAIN ?= /opt/or1k-toolchain/bin/or1knd-elf
CC          = $(OR1K_TCHAIN)-gcc $(CFLAGS)
AS          = $(OR1K_TCHAIN)-as
LD          = $(OR1K_TCHAIN)-ld
OBJDUMP     = $(OR1K_TCHAIN)-objdump
OBJCOPY     = $(OR1K_TCHAIN)-objcopy

# Options
CFLAGS 	   ?= "-I/opt/or1k-toolchain/include -I../../../sw/common"
CFLAGS	   += -Ttext=$(MEMBASE) -Os -g -Wall
CFLAGS     += -msoft-div -msoft-float -msoft-mul -mno-ror -mno-cmov -mno-sext
CFLAGS	   += -nostartfiles -nodefaultlibs -nostdlib -lgcc -L .
ASFLAGS     =
LDFLAGS     = "-L/opt/or1k-toolchain/lib"

LDSCRIPT= linker_script
CFLAGS += -mno-delay -D__OR1K_NODELAY__ -D__OR1K__
ASFLAGS+= -mno-delay -Wa,--defsym,__OR1K_NODELAY__=1
CFLAGS += -T$(LDSCRIPT)
SIMARGS += -n

CFLAGS += -I. $(INCLUDE_DIRS)

###############################################################################
# Rules
###############################################################################
all: $(TARGET).elf lst bin hex
	
clean:
	-rm $(OBJ) *.map *.lst *.hex *.txt *.elf $(TARGET).bin

%.o : %.s
	$(CC) -c $(ASFLAGS) $< -o $@

%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@

$(TARGET).elf: $(OBJ) $(LDSCRIPT) makefile
	$(CC) $(LDFLAGS) $(LIBS) $(OBJ) -o $@
	
lst:  $(TARGET).lst

%.lst: $(TARGET).elf
	$(OBJDUMP) -h -d -S $< > $@

bin: $(TARGET).bin

%.bin: %.elf
	$(OBJCOPY) -O binary $< $@

hex: $(TARGET).bin
	readmem/readmem -o 0 -f $(TARGET).bin > mem_0.hex
	readmem/readmem -o 1 -f $(TARGET).bin > mem_1.hex
	readmem/readmem -o 2 -f $(TARGET).bin > mem_2.hex
	readmem/readmem -o 3 -f $(TARGET).bin > mem_3.hex
