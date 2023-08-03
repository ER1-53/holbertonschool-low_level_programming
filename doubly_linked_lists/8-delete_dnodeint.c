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

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)



if (*head == NULL)
	return (-1);

while (index != 0)
{
	head = head->next;
		index--;
}

