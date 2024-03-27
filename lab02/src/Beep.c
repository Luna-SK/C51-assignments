#include <8052.h>
#include "Delay.h"

void Beep()
{
    while (1)
    {
        P2_5 = 0;
        Delay(1);
        P2_5 = 1;
        Delay(1);
    }
}