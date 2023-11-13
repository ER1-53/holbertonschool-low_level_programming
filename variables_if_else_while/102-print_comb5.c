#include <stdio.h>

/**
 *main - full time
 *
 *Description: What you want !
 *
 *Return: peggy
 *
 */

int main(void)
{
    int thous = 0, hund = 0, dozen = 0, unit = 0;

    for (thous = 0; thous <= 9; thous++)
    {
        for (hund = 0; hund <= 9; hund++)
        {
            for (dozen = 0; dozen <= 9; dozen++)
            {
                for (unit = 0; unit <= 9; unit++)
                {
                    if (hund > unit || hund > thous || hund > dozen ||
                    thous > dozen || thous > unit ||
                    dozen > unit)
                        continue;
                    putchar(thous + '0');
                    putchar(hund + '0');
                    putchar(' ');
                    putchar(dozen + '0');
                    putchar(unit + '0');

                    if (thous == 9 && hund == 8 && dozen == 9 && unit == 9)
                    {
                        putchar('\n'); 
                        break;
                        
                    }
                    else
                    {
                        putchar(',');
                        putchar(' ');
                    }                
                }
                if (thous == 9 && hund == 8 && dozen == 9 && unit == 9)
                    break;
            }
            if (thous == 9 && hund == 8 && dozen == 9 && unit == 9)
                break;
        }
        if (thous == 9 && hund == 8 && dozen == 9 && unit == 9)
                break;
    }
    return (0);
}