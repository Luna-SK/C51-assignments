#include <8052.h>
#include "DynamicDisplay.h"
#include "ExtInterrupt.h"
#include "Delay.h"

unsigned char count;
int number;

void main(void)
{
    External1_Init();
    External2_Init();
    EA = 1;
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

void External1_ISR(void) __interrupt(0)
{
    if (!P3_2)
    {
        Delay(20);
        while (!P3_2)
            ;
        Delay(20);
        number++;
        if (number > 0xF)
        {
            number = 0;
        }
    }
}

void External2_ISR(void) __interrupt(2)
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
