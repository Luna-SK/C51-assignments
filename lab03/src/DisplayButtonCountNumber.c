#include <8052.h>
#include "StaticDisplay.h"
#include "Delay.h"

void DisplayButtonCountNumber()
{
    static unsigned char Count = 0;
    StaticDisplay(1, Count);
    while (1)
    {
        if (!P3_1)
        {
            Delay(20);
            while (!P3_1)
                ;
            Delay(20);

            Count++;
        }

        if (!P3_0)
        {
            Delay(20);
            while (!P3_0)
                ;
            Delay(20);

            Count++;
        }

        if (!P3_2)
        {
            Delay(20);
            while (!P3_2)
                ;
            Delay(20);

            Count++;
        }
        if (!P3_3)
        {
            Delay(20);
            while (!P3_3)
                ;
            Delay(20);

            Count++;
        }
        if (Count == 16)
        {
            Count = 0;
        }
        StaticDisplay(1, Count);
    }
}