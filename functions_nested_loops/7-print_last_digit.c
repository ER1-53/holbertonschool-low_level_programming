#include "main.h"

/**
 *print_last_digit - return
 *@l: is come back
 *
 *Description: it want eat me
 *
 *Return: Success
 */
int print_last_digit(int l)
{
	int lastdigit;

	lastdigit = l % 10;
	if (lastdigit < 0)
	{
		_putchar(-lastdigit + '0');
		return (-lastdigit);
	}
	else
	{
		_putchar(lastdigit + '0');
		return (lastdigit);
	}
}
