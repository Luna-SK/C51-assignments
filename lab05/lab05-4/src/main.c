#include <8052.h>
#include "DynamicDisplay.h"
#include "ExtInterrupt.h"
#include "Delay.h"

unsigned char count, number;

void main(void)
{
    External1_Init();
    while (1)
    {
        DynamicDisplay(count + 1, number, 150);
        count++;
        if (count == 8)
        {
            count = 0;
        }
    }
}

void External0_ISR(void) __interrupt(2)
{
    if (!P3_3)
    {
        Delay(20);
        while (!P3_3)
            ;
        Delay(20);
        number++;
        if (number > 0xF)
        {
            number = 0;
        }
    }
}