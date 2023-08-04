#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * get_bit - print a list
 *
 * @n: pointer to the list
 * @index: pointer to the list
 *
 * Return: temp.
 */

int get_bit(unsigned long int n, unsigned int index)
{
		unsigned long int mask = 1 << index;

	if ((n & mask) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
