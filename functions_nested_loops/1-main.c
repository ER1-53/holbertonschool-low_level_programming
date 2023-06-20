#include "main.h"

/**
 *print_alphabet - vide
 *
 *Description: do loops for alpha
 *
 *Return: On success 1.
 */
void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
		_putchar('\n');
	}
}
