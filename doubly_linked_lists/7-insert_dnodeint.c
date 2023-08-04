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
	dlistint_t *cp_head = NULL, *new_node = NULL;

	if (h == NULL)
		return (NULL);

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		if (*h != NULL)
			(*h)->prev = new_node;

		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}
	cp_head = *h;
	while (i < idx - 1 && cp_head != NULL)
	{ cp_head = cp_head->next;
	i++; }

	if (cp_head == NULL) /*si on arrive à la fin de list sans trouver l'index*/
	{ free(new_node);/*on libere la mémoire du nouveau noeud*/
		return (NULL); }

	new_node->next = cp_head->next;
	if (cp_head->next != NULL) /*si le node suivant est nul*/
		cp_head->next->prev = new_node;/*pas besoin de lui transmettre l'adresse
		 du nouveau noeud*/

	cp_head->next = new_node;
	new_node->prev = cp_head;
	return (new_node);
}
