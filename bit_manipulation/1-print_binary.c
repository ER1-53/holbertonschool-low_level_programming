#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * print_binary - print a list
 *
 * @n: pointer to the list
 *
 *
 */

#include <stdio.h>

void print_binary(unsigned long int n)
{
	int i = 63;
	int leading_zeros = 1;
	unsigned long int mask;

	while (i >= 0)
	{
		mask = 1UL << i;

		if (n & mask)
		{
			putchar('1');
			leading_zeros = 0;
		}
		else
		{
			if (!leading_zeros)
			{
				putchar('0');
			}
		}
		i--;
	}

	if (leading_zeros)
	{
		putchar('0');
	}
}
