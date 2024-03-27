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
	while (1)
	{
		P2_0 = ~P2_0;
		delay(500);
	}
}