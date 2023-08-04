#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - print a list
 *
 * @b: pointer to the list
 *
 * Return: temp.
 */

unsigned int binary_to_uint(const char *b)
{
	int decimal = 0;
	int base = 1;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i + 1] != '\0')
		i++;

	while (i >= 0)
	{
		if (b[i] == '1')
			decimal = decimal + base;
		else if (b[i] != '0')
			return (0);

		base = base * 2;
		i--;
	}

	return (decimal);
}
