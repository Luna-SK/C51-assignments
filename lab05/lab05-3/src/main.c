#include <8052.h>
#include "ExtInterrupt.h"
#include "Delay.h"

unsigned char number;

void main(void)
{
    External0_Init();
    while (1)
    {

    }
}

void External0_ISR(void) __interrupt(0)
{
    if (!P3_2)
    {
        Delay(20);
        while (!P3_2)
            ;
        Delay(20);
        P2_0 = !P2_0;
    }
}