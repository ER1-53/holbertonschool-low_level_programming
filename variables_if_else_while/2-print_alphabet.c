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
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
