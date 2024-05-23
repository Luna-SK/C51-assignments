#include <8052.h>

void interrupt_init(void)
{
    P2_0 = 0;
    P1_3 = 1;
    TMOD = 0x61;
    
    TH1 = 0xF6;
    TL1 = 0xF6;

    TH0 = 0x9E;
    TL0 = 0x58;
    TR0 = 1;
    TR1 = 1;
    PT0 = 1;
    PT1 = 0;
    ET0 = 1;
    ET1 = 1;
    EA = 1;
}