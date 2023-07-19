#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *main - Write a program do operation
 *@argc: is come back
 *@argv: the other
 *
 *
 *Description:
 *
 *
 *Return: Success
 */

int main(int argc, char **argv)
{
	int num1, num2, result;
	char *operator;

	if (argc != 4)
	{

		printf("Error\n");
		exit (98);
	}

		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		operator = argv[2];

	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit (99);
	}
	if ((operator[0] == '/' || operator[0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit (100);
	}

	result = get_op_func(operator)(num1, num2);

	printf("%d\n", result);

	return (0);
}
