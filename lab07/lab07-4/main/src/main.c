#include <8052.h>
#include "uart.h"
#include "delay.h"

void main(void)
{
    uart_init();
    P2_0 = 1;
    while (1)
    {
        if (!P3_1)
        {
            delay_ten_us(1000);
            while (!P3_1)
                ;
            delay_ten_us(1000);
            uart_send_char('C');
        }
    }
}
