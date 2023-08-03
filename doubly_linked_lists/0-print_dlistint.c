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

size_t print_dlistint(const dlistint_t *h)
{
	size_t temp = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		temp++;
		h = h->next;
	}
	return (temp);
}

