#if !defined(__UART_H)
#define __UART_H

extern char rx_buffer[]; // 接收缓冲区
extern unsigned char rx_cnt; // 接收计数器

void uart_init(void);
void uart_isr(void) __interrupt(4);

#endif // __UART_H
