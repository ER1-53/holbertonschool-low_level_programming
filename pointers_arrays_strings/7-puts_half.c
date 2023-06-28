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
	int length, i;

	for (length = 0; str[length] != '\0'; length++)

		if (length % 2 == 1)
		{
			length++;
		}


	for (i = 0; str[i] != '\0'; i++)
	{
		if (i >= length / 2)
		{
			_putchar(str[i]);
		}
	}

}
