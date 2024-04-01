#include <8052.h>
#include "StaticDisplay.h"
#include "Delay.h"

void DisplayButtonNumber()
{
    P0 = 0x00;
    while (1)
    {
        if (!P3_1)
        {
            Delay(20);
            while (!P3_1)
                ;
            Delay(20);

            StaticDisplay(1, 1);
        }

        if (!P3_0)
        {
            Delay(20);
            while (!P3_0)
                ;
            Delay(20);

            StaticDisplay(1, 2);
        }

        if (!P3_2)
        {
            Delay(20);
            while (!P3_2)
                ;
            Delay(20);

            StaticDisplay(1, 3);
        }
        if (!P3_3)
        {
            Delay(20);
            while (!P3_3)
                ;
            Delay(20);

            StaticDisplay(1, 4);
        }
    }
}