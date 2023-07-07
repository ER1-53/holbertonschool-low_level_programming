#include "main.h"

/**
 *puts2 - Write a function that prints every other
 *character of a string, starting with the first character,
 *followed by a new line.
 *@str: is come back
 *
 *Description: Pour faire apparaitre un caractaire sur 2
 *( les nombres pairs) il faut conditionner notre boucle avec
 *un modulo pour que tous les chiffres ou nombres divisible par 2
 * soit affichés
 *
 *Return: Success
 */
void puts2(char *str)
{
	int i;


	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
		_putchar('\n');
}
