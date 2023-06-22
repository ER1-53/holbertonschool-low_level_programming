#include "main.h"

/**
 *_function - return
 *@c: is come back
 *
 *Description: it want eat me
 *
 *Return: Success
 */

void times_table(void)
{
	int x;
	int y;
	int z;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			z=x*y;
			putchar(z +'0');

			if (x > 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
