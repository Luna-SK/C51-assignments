#include <8052.h>
#include "uart.h"

void main(void)
{
    uart_init();
    P2_0 = 1;
    uart_send_char('S');
    while (1)
    {
    }
}
