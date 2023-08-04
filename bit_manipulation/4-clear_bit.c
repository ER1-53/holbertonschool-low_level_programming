#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * clear_bit - print a list
 *
 * @n: pointer to the list
 * @index: pointer to the list
 *
 * Return: temp.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & ~(1 << index); /*0101 0011 ~ 1010 1100 */
	return (1);
}
