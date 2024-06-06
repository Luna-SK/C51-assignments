#include <8052.h>

void uart_init()
{
    SCON = 0x50;
    TMOD |= 0x20;
    // TH1 = 256 - 11059200 / (9600 * 32 * 12) = 0xFD
    TH1 = 0xFD;
    TR1 = 1;
}

void uart_send_char(char c)
{
    SBUF = c;
    while (!TI)
        ;
    TI = 0;
}

void uart_send_string(char *str)
{
    while (*str)
    {
        uart_send_char(*str);
        str++;
    }
}