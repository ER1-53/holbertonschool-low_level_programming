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
	dlistint_t *element;

	element = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (element == NULL)
		return (NULL);

	element->n = n;
	element->prev = NULL;

	if (*head == NULL) /*verifie qu'il n'y a pas d'élément */
	{	/*champ next de élément*/
		element->next = NULL; /*on attribue à element la premiere et derniere*/
		/* place*/
		*head = element; /*head point vers l'adresse vers laquel point element*/
	}
	else
	{
		element->next = *head; /*pointe vers le 1er element de la list*/
		(*head)->prev = element;
		*head = element;
	}

	return (element);
}
