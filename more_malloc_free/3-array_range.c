#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *array_range - Write a function that creates an array of integers.
 *@min: is come back
 *@max: is come back
 *
 *Description: il faut connaitre le nombre de caractère à copier
 *on vérifie si str n'est pas vide sinon return NULL
 *grace on nombre de caratère on connait l'espace qu'il faut allouer dans
 *malloc pour copier le même mot.
 *la 1ere boucle permet de comptabiliser le nombre de caractère
 *dans le mot
 *dans pt_memory on multiplit la valeur par 'i' + 1 (sans la valeur NULL)
 *Puis avec la 2nd boucle on copie la string de str[i] dans pt_memory[i].
 *
 *Return: Success
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;
	int size = max - min + 1;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size ; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}
