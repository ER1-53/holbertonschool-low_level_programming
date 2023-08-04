#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - prints then returns the length of element
 *
 * @n: pointer to the list
 * @head: pointer to the list
 *
 * Return: temp.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t = *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;

	if (!head)
	{
		*head = new_node;
		new_node->next = NULL;
	}
	else
	{
		(*head)->prev = new_node;
		new_node->next = *head;
		*head = new_node;
	}

	return (new_node);
}
