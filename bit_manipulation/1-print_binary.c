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
	int i = 63;
	int leading_zeros = 1;

	while (i >= 0) {
		unsigned long int mask = 1UL << i;
		if (n & mask) {
			putchar('1');
			leading_zeros = 0;
		} else {
			if (!leading_zeros) {
				putchar('0');
			}
		}
		i--;
	}

	if (leading_zeros) {
		putchar('0');
	}
	return;
}
