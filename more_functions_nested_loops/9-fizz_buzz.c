#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 *main - Entry point
 *
 *Descrition:
 *
 *Return: success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0)
		{
			printf("Buzz");
			if (i < 100)
				printf(" ");
			else
				printf("\n");
		}
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
	}
	return (0);
}
