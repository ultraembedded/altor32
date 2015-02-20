#include "serial.h"
#include <stdlib>

void bootload(void){
	long progSize;
	program();
	while(1){
		serial_read(2, &progSize);
		unsigned char* instructions = (unsigned char*) malloc(progSize*sizeof(unsigned char));
		serial_read(progSize, instructions);
		program = (void*)instructions;
		program();
		free(program);
		serial_putstr("Program Finished");
	}
}
