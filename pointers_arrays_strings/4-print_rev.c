#include "main.h"

/**
 *print_rev - affiche un string à l'envers
 *@s: est le pointeur de la variable de texte
 *
 *Description: it want eat me
 *
 *Return: Success
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
