#include <stdio.h>

/**
 *main - return
 *
 *Description: it want eat me
 *
 *Return: Success
 */
int main(void)
{
	int turn;

	for (turn = 1; turn <= 100; turn++)
	{
		if (turn % 3 == 0 && turn % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (turn % 5 == 0)
		{
			printf("Buzz");
		}
		else if (turn % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", turn);
		}
		if (turn <= 99)
		{
			printf(" ");
		}
       	}
	printf("\n");
	return (0);
}
