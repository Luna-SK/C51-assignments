#include "DynamicDisplay.h"

void DisplayLoop()
{
    char count = 0;
    while (1)
    {
        DynamicDisplay(count + 1, count, 150);
        count++;
        if (count == 8)
        {
            count = 0;
        }
    }
}