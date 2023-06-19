#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Entry point
 *
 *Descritpion: 'Random un nombre positif, negatif ou null'
 *
 *Return: Always o (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n\n", n);
	} else
	{
		printf("%d is negative\n\n", n);
	}
	return (0);
}
