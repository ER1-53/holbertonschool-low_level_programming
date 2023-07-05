#include "main.h"

/**
 *_puts - display string
 *@str: for string
 *
 *Description: it want eat me
 *
 *Return: Success
 */
void _puts(char *str);

void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
