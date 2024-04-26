#include <8052.h>
#include "TimerDelay.h"

unsigned int i;

void main(void)
{
    Timer0_Init();
    while (1)
    {
        P2_0 = !P2_0;
        for (i = 0; i < 50; i++)
        {
            Delay10ms();
        }
    }
}
