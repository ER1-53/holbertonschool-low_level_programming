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
	dlistint_t *pop_node;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	pop_node = *head;

	while (i < index && pop_node != NULL)
	{
		pop_node = pop_node->next;
		i++;
	}

	if (pop_node == NULL)
		return (-1);

	if (pop_node->prev != NULL)
		pop_node->prev->next = pop_node->next;
	else
		*head = pop_node->next;

	if (pop_node->next != NULL)
		pop_node->next->prev = pop_node->prev;

	free(pop_node);
	return (1);
}







