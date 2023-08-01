#include <stdio.h>
#include "lists.h"

/**
 * print_list - singly linked list
 *
 * @h: length of the string
 *
 * Return: size
 * Description: singly linked list node structure
 */

size_t print_list(const list_t *h)
{
	int size = 0;

	if (h == NULL)
		return (0);




	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		++size;
		h = h->next;
	}

	return (size);

}
