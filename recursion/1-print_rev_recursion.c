#include "main.h"

/**
 *_print_rev_recursion - La recursion rempli une pile qui incremente
 *l'index de la chaine de caratère de la 1ere valeur à la dernière puis
 *la redistribue à l'endroit si le putchar est avant l'appel de la fonction
 *à l'envers si le putchar est après l'appel de la fonction.
 *
 *@s: is come back
 *
 *Description: it want eat me
 *
 *Return: Success
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
