#include "main.h"
#include <stdio.h>
/**
 *print_array - return
 *@a: is come back
 *@n: is come back
 *
 *Description: it want eat me
 *
 *Return: Success
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}


	printf("\n");
}
