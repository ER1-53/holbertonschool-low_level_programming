#include "main.h"

/**
 *print_alphabet - Write a function that prints the alphabet, in lowercase,
 *followed by a new line.
 *
 *Description: Cree une boucle qui commence sur le caractère 'a' et
 *l'afficher jusqu'au caractère 'z'.
 *
 *Return: On success 1.
 */
void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
