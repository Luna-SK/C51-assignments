#include <8052.h>
#include "uart.h"

void main()
{
    uart_init();
    uart_send_string("Hello World!\n");
    while (1)
    {
    }
}
