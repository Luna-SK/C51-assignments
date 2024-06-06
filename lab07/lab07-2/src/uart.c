#include <8052.h>

char rx_buffer[16];
unsigned char rx_cnt = 0;

void uart_init(void)
{
    SCON = 0x50;
    TMOD |= 0x20;
    TH1 = 0xFD;
    TR1 = 1;
    ES = 1;
    EA = 1;
    TI = 1;
}

void uart_isr(void) __interrupt(4)
{
    if (RI)
    {
        RI = 0;
        rx_buffer[rx_cnt++] = SBUF;
        if (rx_cnt >= sizeof(rx_buffer))
        {
            rx_cnt = 0;
        }
    }
}