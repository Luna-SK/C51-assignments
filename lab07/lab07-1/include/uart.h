#if !defined(__UART_H)
#define __UART_H

void uart_init(void);
void uart_send_string(char *str);

#endif // __UART_H