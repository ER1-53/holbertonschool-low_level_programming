#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - prints then returns the length of element
 *
 * @head: pointer to the list
 * @index: pointer to the list
 *
 * Return: temp.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *delete_element;

	if (!*head)
		return (NULL);

	delete_element = *head;

	while (i < index)
	{
		delete_element = delete_element->next;
		i++;
	}


	delete_element->next->prev = delete_element->prev;
	delete_element->prev->next = delete_element->next;

	free(delete_element);
	return (1);
}
