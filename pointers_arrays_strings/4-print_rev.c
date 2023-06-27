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
	int vni = 0;

	while (*s != '\0')
	{
		s++;
		vni++;
	}
	while (vni >= 0)
	{
		vni--;
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
