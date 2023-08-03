#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - prints then returns the length of element
 *
 * @head: pointer to the list
 *
 * Return: temp.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *cp_head = NULL;
	dlistint_t *cp_tail = NULL;
	int i = 0;

	if (h == NULL)
		return (NULL);

	element = (dlistint_t *) malloc(sizeof(dlistint_t));
	cp_head = (dlistint_t *) malloc(sizeof(dlistint_t));
	cp_tail = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (element == NULL)
		return (NULL);

	while ( i < idx)
	{
		cp_head = *h;
		cp_head = cp_head->next;
	}




}
