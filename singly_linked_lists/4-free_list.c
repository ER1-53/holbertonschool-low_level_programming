#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - singly linked list
 *
 * @head: length of the string
 *
 * Description: singly linked list node structure
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		if (head->str != NULL)
		{
			free(head->str);
			head->str = NULL;
		}
		temp = head;
		head = head->next;
		free(temp);
	}
}
