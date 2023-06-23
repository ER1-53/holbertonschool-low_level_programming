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
	int u;
	int ten;

	for (ten = 0; ten < 10; ten++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			{

				int v = y / 10;

				_putchar(v + '0');

			}

			u = y % 10;

			_putchar(u + '0');

		}
		_putchar('\n');
	}
}
