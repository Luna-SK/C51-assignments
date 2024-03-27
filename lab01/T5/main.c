#include <REGX52.H>

void delay(unsigned int miliseconds)
{
	int count;
	while(miliseconds--)
	{
		count = 180;
		while(count--);
	}
}

void main()
{
	int x = 1;
	while (1)
	{
		while (x > 0x80)
		{
			x = 1;
		}
		P2 = x ^ 0xFF;
		x <<= 1;
		delay(50);
	}
}