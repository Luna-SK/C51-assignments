#include <8052.h>
#include "TimerBeep.h"

void main(void)
{
    Timer_Beep();
    while (1)
        ;
}
