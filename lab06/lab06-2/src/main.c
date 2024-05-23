#include <8052.h>
#include "Interrupt.h"

void main(void)
{
    interrupt_init();
    while (1)
    {
        
    }
    
}

void timer0_isr(void) __interrupt(1)
{
    TH0 = 0x9E;
    TL0 = 0x58;
    P1_3 = !P1_3;
}

void timer1_isr(void) __interrupt(3)
{
    P2_0 = !P2_0;
}
