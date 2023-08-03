#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - prints then returns the length of element
 *
 * @n: pointer to the list
 * @head: pointer to the list
 *
 * Return: temp.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	dlistint_t *move_for_supp;

	if (head == NULL)
		return;

	/*while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	return;*/

	if (head->prev != NULL)
	{
		while (head != NULL)
		{
			move_for_supp = head;
			head = head->prev;
			free(move_for_supp);
		}
	}
	else
	{
		temp = head;
		while (temp->next != NULL)
			temp = temp->next;

		while (temp != NULL)
		{
			move_for_supp = temp;
			temp = temp->prev;
			free(move_for_supp);
		}
	}
	return;

}
