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
 * description : line 39 temp prend l'adresse du 1er element de la list
 * line 41 temp next se déplace d'adresse en adresse pour trouver le
 * dernier node
 * Line 42 on envoie l'adresse du dernier node dans temp
 * Line 44 puis temp envoie sur ladresse d'element pour qu'il devienne le
 * dernier
 * line 45 et element envoie sur temp qui est l'avant dernier
 * Return: temp.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *element;

	dlistint_t *temp;

	element = (dlistint_t *) malloc(sizeof(element));

	if (!element)
		return (NULL);

	element->n = n;
	element->next = NULL;

	if (*head == NULL)
	{
		*head = element;
	}
	else
	{
		temp = *head; 
		while (temp->next != NULL)
			temp = temp->next;
		/* a se stade head est le 1er node et temp le dernier*/
		temp->next = element; /**/
		element->prev = temp; /**/
	}


	return (*head);
}
