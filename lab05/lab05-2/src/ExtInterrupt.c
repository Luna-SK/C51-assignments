#include <8052.h>

void External0_Init(void)
{
    IT0 = 1;
    EX0 = 1;
    EA = 1;
}