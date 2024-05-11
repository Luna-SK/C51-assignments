#if !defined(__TIMERDELAY_H__)
#define __TIMERDELAY_H__
#include <8052.h>

void Timer0_Init(void);
void Delay10ms(void);

void Timer0_ISR(void) __interrupt(1) __using(1)
{
    // 65536 - 11059200 / 12 * 0.01 = 56320 = 0xdc00
    TH0 = 0xdc;
    TL0 = 0x00;
}

#endif // __TIMERDELAY_H__
