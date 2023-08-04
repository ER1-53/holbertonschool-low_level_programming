#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - prints then returns the length of element
 *
 * @h: pointer to the list
 * @idx: pointer to the list
 * @n: pointer to the list
 *
 * Return: temp.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t * temp;
	dlistint_t *element = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (!element)
		return (NULL);

	element->n = n;
	element->next = NULL;
	element->prev = NULL;


	if (idx == 0)
	{
		element->next = *h;
		(*h)->prev = element;
		*h = element;
		return (element);
	}

	temp = *h;
	while (i < idx && idx != NULL)
	{
		temp = temp->next;
		i++;
	}

	element->next = temp->next;
	element->prev = temp->prev;
	temp->next->prev = element;
	element = temp;
	return (element);
}
