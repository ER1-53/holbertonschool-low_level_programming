#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - prints then returns the length of element
 *
 * @h: pointer to the list
 *
 * Return: temp.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t temp = 0;

	while (h != NULL)
	{
		temp++;
		h = h->next;
	}
	return (temp);
}
