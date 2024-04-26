#include <8052.h>

void Timer_Beep(void)
{
    TMOD = 0x01;
    TH0 = 0xdc;
    TL0 = 0x00;
    EA = 1;
    ET0 = 1;
    TR0 = 1;
}
