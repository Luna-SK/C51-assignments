#include <8052.h>
#include "Interrupt.h"

unsigned int count = 0;
unsigned int threshold = 100;

void crol(unsigned char *value, unsigned char shift)
{
    unsigned char carry = *value >> (8 - shift);
    *value <<= shift;
    *value |= carry;
}

void main(void)
{
    interrupt_init();
    while (1)
    {
    }
}

void timer0_isr(void) __interrupt(1)
{
    static unsigned char led_state = 0x01;

    TH0 = timer >> 8;
    TL0 = timer & 0xFF;

    count++;
    if (count > threshold) {
        P2 = ~led_state;
        crol(&led_state, 1);
        count = 0;
    }
}

void int0_isr(void) __interrupt(0)
{
    if (threshold > 20)
    {
        threshold -= 20;
    }
}

void int1_isr(void) __interrupt(2)
{
    if (threshold < 400)
    {
        threshold += 20;
    }
}
