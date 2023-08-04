#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * print_binary - print a list
 *
 * @n: pointer to the list
 *
 * Return: temp.
 */

#include <stdio.h>

void print_binary(unsigned long int n)
{
	unsigned long int binary[32];
	int i = 0;
	int j;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (n > 0)
	{
		binary[i] = n & 1;
		n = n >> 1;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
		_putchar(binary[j] + '0');
}
