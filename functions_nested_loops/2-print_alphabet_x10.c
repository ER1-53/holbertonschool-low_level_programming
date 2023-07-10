#include "main.h"
/**
 *print_alphabet_x10 - Write a function that prints 10 times the alphabet,
 *in lowercase, followed by a new line.
 *
 *Description: Crée une boucle  qui affiche 10x les caractères de 'a' à 'z'
 *
 */
void print_alphabet_x10(void)
{
	int alpha;
	int ten;

	for (ten = 0; ten < 10; ten++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);

		}
		_putchar('\n');
	}
}
