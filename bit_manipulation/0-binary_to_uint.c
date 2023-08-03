#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print a list
 *
 * @h: pointer to the list
 *
 * Return: temp.
 */

unsigned int binary_to_unint(const char *b)
{
	int i = 0;

	if (b == NULL)
		return NULL;

	while (b[i] != '\0')
	{
		putchar(b[i]);

	}
	return i;
}
