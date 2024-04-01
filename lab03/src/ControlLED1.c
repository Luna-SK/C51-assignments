#include <8052.h>
#include "Delay.h"

void ControlLED1()
{
    while (1)
    {
        if (!P3_1)
        {
            Delay(20);
            while (!P3_1)
                ;
            Delay(20);
            P2_0 = !P2_0;
        }
    }
}