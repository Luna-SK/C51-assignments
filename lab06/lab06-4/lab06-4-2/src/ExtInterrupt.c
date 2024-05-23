#include <8052.h>

void External1_Init(void)
{
    IT0 = 1;
    EX0 = 1;
    PX0 = 1;
}

void External2_Init(void)
{
    IT1 = 1;
    EX1 = 1;
    PX1 = 0;
}