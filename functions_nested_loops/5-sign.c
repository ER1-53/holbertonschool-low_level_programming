#include "main.h"

/**
 *print_sign - return
 *@n: is come back
 *
 *Description: it want eat me
 *
 *Return: Success
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
