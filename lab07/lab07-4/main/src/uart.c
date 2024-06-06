#include <8052.h>

void uart_init(void)
{
    SCON = 0x50;
    TMOD |= 0x20;
    TH1 = 0xFD;
    TR1 = 1;
    ES = 1;
    EA = 1;
}

void uart_send_char(char c)
{
    SBUF = c;
    while (!TI)
        ;
    TI = 0;
}

void uart_isr(void) __interrupt(4)
{
    if (RI)
    {
        RI = 0;
        char received_char = SBUF;
        if (received_char == '1')
        {
            P2_0 = 0;
        }
        else if (received_char == '0')
        {
            P2_0 = 1;
        }
    }
}