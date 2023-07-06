#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - return
 *@argc: is come back
 *@argv: the other
 *
 *Description: it want eat me
 *
 *Return: Success
 */
int main(int argc, char **argv)
{
	int num1, num2, num;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		num = num1 * num2;

		printf("%d\n", num);

		return (0);
	}

	printf("Error\n");
	return (1);
}
