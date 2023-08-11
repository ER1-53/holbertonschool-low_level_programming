#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *
 *Description: afficher l'alphabet
 *
 *Return: Success
 */

int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
