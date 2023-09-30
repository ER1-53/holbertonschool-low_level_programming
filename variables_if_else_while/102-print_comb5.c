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
    char thous, hund, dozen, unit;

    for (thous = '0'; thous <= '9'; thous++)
    {
        for (hund = '0'; hund <= '9'; hund++)
        {
            for (dozen = '0'; dozen <= '9'; dozen++)
            {
                for (unit = '0'; unit <= '9'; unit++)
                {
                    if (hund >= unit)
                        continue;
                    putchar(thous);
                    putchar(hund);
                    putchar(' ');
                    putchar(dozen);
                    putchar(unit);
                    putchar(',');
                    putchar(' ');
                 
                }
            }
        }
    }
    return (0);
}