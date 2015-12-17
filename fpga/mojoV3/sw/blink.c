#include "mem_map.h"
#include "serial.h"

void stall(int count){
    for( ; count>0; count--){
        asm("l.nop");
    }
}

int main(){
    unsigned char LED = 0xFF;
    GPIO_CTRL = 0xFF;
    serial_putchar(LED);
    serial_putchar("A");
       // while(1){
       //     stall(50000);      
       // }
}
