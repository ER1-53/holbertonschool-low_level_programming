#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_len - singly linked list
 *
 * @h: length of the string
 *
 * Description: singly linked list node structure
 *
 * Return: size of the string
 */

size_t list_len(const list_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		++size;
		h = h->next;
	}

	return (size);
}
