#include <8052.h>

void Timer0_Init(void)
{
    TMOD = 0x01;
    EA = 1;
    ET0 = 1;
}

void Delay10ms(void)
{
    TR0 = 1;
    while (!TF0)
        ;
}
