#include "main.h"

/**
 *_puts_recursion - Write a function that prints a string.
 *@s: is come back
 *
 *Description: en cours
 *
 *Return: Success
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
