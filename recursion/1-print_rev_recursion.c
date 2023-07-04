#include "main.h"

/**
 *_print_rev_recursion - la fonction est appelé par le main;
 *elle rencontre la condition if qui n'est pour le moment pas
 *rempli (*s == '\0')
 *la 1ere lettre est 'p' que la fonction stocke dans le font de la pile
 *puis la fonction est de nouvea solicité avec cette fois (s+1)
 *donc caractère suivant.
 *le caractere qui suit est à son tour stocker sur la pile
 *puis ainsi de suite jusqu'au caractere nul
 * alors la pile est retourné puis affiché dans le putchar
 *en commencant par le haut de la pile jusqu'au font
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
