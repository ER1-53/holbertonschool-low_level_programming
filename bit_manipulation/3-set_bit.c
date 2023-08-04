#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * set_bit - print a list
 *
 * @n: pointer to the list
 * @index: pointer to the list
 *
 * Return: temp.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 63) /**/
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
