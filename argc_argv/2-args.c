#include "main.h"
#include <stdio.h>

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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
