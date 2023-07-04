#include "main.h"

/**
 *_puts_recursion - Write a function that prints a string.
 *@s: is come back
 *
 *Description: putchar affiche le 1er caractère de la string
 *en appellant la fonction _puts-recursion(index + 1)
 *la fonction se répéte indefiniment
 *On utilise alors la condition if
 *pour arreter la fonction sur le caractère NULL et
 *retourner un saut de ligne.
 *La 1ere lettre appelé est 'P' est afficher dès le 1er tour
 *_puts_recursion(s+1) appel de nouveau la fonction avec cette fois
 *le caractère à l'adresse suivante (s+1) qui affiche 'u' avant que la
 *fonction ne soit appelé à nouveau.
 *puis appel de la fonction et ainsi de suite juqu'au caractère NULL
 *
 *Return: Success
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);

	_puts_recursion(s + 1);
}
