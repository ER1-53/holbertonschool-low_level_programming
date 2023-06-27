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
	char servni = 0;

	while (*s != '\0')
	{
		s++;
		servni++;
	}
	while (servni >= 0)
	{
		_putchar(*s);
		s--;
		servni--;
	}
}
