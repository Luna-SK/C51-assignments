#if !defined(__UART_H)
#define __UART_H

void uart_init(void);
void uart_isr(void) __interrupt(4);

#endif // __UART_H
