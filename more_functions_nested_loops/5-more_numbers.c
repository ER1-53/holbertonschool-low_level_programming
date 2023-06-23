#include "main.h"

/**
 *more_numbers - return
 *
 *Description: it want eat me
 *
 *Return: Success
 */
void more_numbers(void)
{
	int y;

	for (y = 0; y <= 14; y++)
	{
		if (y > 9)
		{
			int u = y % 10;
			int v = y / 10;

			_putchar(v + '0');
			_putchar(u + '0');
		}
		else
		{
			_putchar(y + '0');
		}

	}
	_putchar('\n');
}
