
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

	for (len = 0; str[len] != '\0'; len++)
	{
		if (len % 2 == 1)
		{
			continue;
		}
	}
	for (i = (len + 1) / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
