#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	int sum = 0;
	int y, x;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (y = 1; y < argc; y++)
	{
		for (x = 0; argv[y][x] != '\0'; x++)
		{
			if (!isdigit(argv[y][x]))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[y]);

	}
	printf("%d\n", sum);
	return (0);

}
