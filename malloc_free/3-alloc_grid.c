#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - Write a program that multiplies two numbers.
 *
 *@width: is come back
 *@height: is come back
 *
 *Description: en cours
 *
 *
 *
 *
 *
 *
 *Return: Success
 */
int **alloc_grid(int width, int height)
{
	int **tab; /* déclaration d'un pointeur vers un pointeur (tableau2D)*/
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	tab = (int **)malloc(sizeof(int *) * height);
	/*alloue la mémoire pour les lignes*/
	if (tab == NULL)
		return (NULL);

	for (i = 0; i < height; i++) /*la vloucle va permettre d'allouer la mémoire
	pour chaque colonnes de chaque ligne*/
	{
		tab[i] = (int *)malloc(sizeof(int) * width);
		/*alloue la mémoire pour les colonnes*/
		if (tab[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(tab[j]);
			free(tab);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			tab[i][j] = 0;
		}
	}

	return (tab);
}
