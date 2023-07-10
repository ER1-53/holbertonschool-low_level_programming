#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - Write a function that creates an array of chars,
 *and initializes it with a specific char.
 *@size: is come back
 *@c: the other
 *
 *Description: On cherche à allouer un espace 'size' pour le caractère 'c'
 *on crée deux variables:
 * 				unsigned int i : pour exploiter la totalité de l'espace alloué.
 * 				char *arr : pointeur qui contient l'espace créé.
 *Si 'size' == 0 la taille du tableeau n'est pas valide
 *on alloue la mémoire pour le tableau arr = malloc(sizeof(char) * size)
 *on vérifie si la mémoire est bien alloué su arr == null echec
 *la boucle for attribue la valeur de c aux éléments du tableau.
 *puis est returné le pointeur vers le bloc mémoire 'arr'
 *
 *
 *Return: Success
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
	return (NULL);
	}
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}


