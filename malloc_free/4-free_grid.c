#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - Write a function that concatenates two strings.
 *
 *@s1: is come back
 *@s2: is come back
 *
 *Description: alloue de la mémoire pour pouvoir concatener deux string
 *
 *Return: Success
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
