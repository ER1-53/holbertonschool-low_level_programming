#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * flip_bits - print a list
 *
 * @n: pointer to the list
 * @m: pointer to the list
 *
 * description : while (xor > 0)
 *
 *if (xor & 1)
 *count++;
 *xor >>= 1
 *}
 *return count;
 * Return: temp.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		count++;
		xor_result = xor_result & (xor_result - 1);
	}

	return (count);
}
