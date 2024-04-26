#if !defined(__TIMERBEEP_H__)
#define __TIMERBEEP_H__

void Timer_Beep(void);

void Timer0_ISR(void) __interrupt(1) __using(1)
{
    TH0 = 0xfc;
    TL0 = 0x8f;
    P2_5 = !P2_5;
}

#endif // __TIMERBEEP_H__
