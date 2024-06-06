#include <8052.h>
#include <string.h>
#include "uart.h"

void main(void)
{
    uart_init();
    char *command = "switch";
    while (1)
    {
        if (rx_cnt)
        {
            if (strncmp(rx_buffer, command, strlen(command)) == 0)
            {
                P2_0 = !P2_0;
            }
            rx_cnt = 0;
        }
    }
}
