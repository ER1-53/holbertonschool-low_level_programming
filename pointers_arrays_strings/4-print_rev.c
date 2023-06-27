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
	char eservni = 0;

	while (*s != '\0')
	{
		s++;
		eservni++;
	}
	while (eservni >= 0)
	{
		_putchar(*s + 1);
		s--;
		eservni--;
	}
	_putchar('\n');
}
