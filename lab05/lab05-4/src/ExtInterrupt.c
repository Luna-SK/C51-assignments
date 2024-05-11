#include <8052.h>

void External1_Init(void)
{
    IT1 = 1;
    EX1 = 1;
    EA = 1;
}