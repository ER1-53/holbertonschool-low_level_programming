#include "main.h"

/**
 *print_most_numbers - return
 *
 *Description: it want eat me
 *
 *Return: Success
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9 ; num++)
	{
		if (num == 4 || num == 2)
		{
			continue;
		}
		else
		{
			_putchar(num + '0');
		}
		_putchar('\n');
	}
}
