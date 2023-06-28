#include "main.h"

/**
 *puts2 - saute les caracteres de 2 en 2
 *@str: is come back
 *
 *Description: it want eat me
 *
 *Return: Success
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
