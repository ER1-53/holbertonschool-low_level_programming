#include "main.h"

/**
 *puts_half - return
 *@str: is come back
 *
 *Description: it want eat me
 *
 *Return: Success
 */
void puts_half(char *str)
{
	int len, i;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 1)
	{
		i = (len - 1) / 2;
		i = i + 1;
	}
	else
	{
		i = len / 2;
	}
	for (; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
