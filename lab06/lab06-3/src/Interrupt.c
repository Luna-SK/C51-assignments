#include <8052.h>

// 65536 - 11059200 / 12 * 0.01 = 56320 = 0xdc00
unsigned int timer = 0xdc00;

void interrupt_init(void)
{
    TMOD = 0x01;
    TH0 = timer >> 8;
    TL0 = timer & 0xFF;
    ET0 = 1;
    TR0 = 1;
    EA = 1;

    IT0 = 1;
    IT1 = 1;
    EX0 = 1;
    EX1 = 1;
}
