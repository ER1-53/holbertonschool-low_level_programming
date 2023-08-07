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
	dlistint_t *element =(dlistint_t *)malloc(sizeof(element));
	dlistint_t *temp = NULL;
	unsigned int i;


	if (!*h)
		return (NULL);

	if (!element)
		return (NULL);

	element->n = n;
	element->next = NULL;
	element->prev = NULL;

	temp = *h;
	while (i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	temp->next->prev = element;
	element->next = temp->next;
	temp->next = element;
	element->prev = temp;
	element->next = temp->next;

	return (element);
}

