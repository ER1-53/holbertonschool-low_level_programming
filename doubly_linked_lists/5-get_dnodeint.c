#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - prints then returns the length of element
 *
 * @index: pointer to the list
 * @head: pointer to the list
 *
 * Return: temp.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);


	while (index != 0)
	{
		if (head->next == NULL)
			return (NULL);

		head = head->next;
		index--;
	}

	return (head);
}
