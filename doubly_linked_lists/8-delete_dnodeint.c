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

	if (pop_node == NULL) /*si l'index que l'on veut n'existe pas*/
		return (-1);

	/* idée general
			si prev ou next sont NULL pas besoin de leurs envoyer
			d'adresse
			MAIS si on supprime le 1er node alors le 2nd devient HEAD*/
	if (pop_node->prev != NULL)
		pop_node->prev->next = pop_node->next;
	else
		*head = pop_node->next;/*le 2nd devient HEAD*/

	if (pop_node->next != NULL)
		pop_node->next->prev = pop_node->prev;

	free(pop_node);
	return (1);
}







