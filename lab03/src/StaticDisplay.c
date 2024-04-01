#include <8052.h>
#include "DisplayNumber.h"

void StaticDisplay(unsigned char location, unsigned char number)
{
    switch (location)
    {
    case 1:
        P2_4 = 1;
        P2_3 = 1;
        P2_2 = 1;
        break;
    case 2:
        P2_4 = 1;
        P2_3 = 1;
        P2_2 = 0;
        break;
    case 3:
        P2_4 = 1;
        P2_3 = 0;
        P2_2 = 1;
        break;
    case 4:
        P2_4 = 1;
        P2_3 = 0;
        P2_2 = 0;
        break;
    case 5:
        P2_4 = 0;
        P2_3 = 1;
        P2_2 = 1;
        break;
    case 6:
        P2_4 = 0;
        P2_3 = 1;
        P2_2 = 0;
        break;
    case 7:
        P2_4 = 0;
        P2_3 = 0;
        P2_2 = 1;
        break;
    case 8:
        P2_4 = 0;
        P2_3 = 0;
        P2_2 = 0;
        break;
    }
    P0 = Display_number[number];
}