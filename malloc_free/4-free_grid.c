#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid - Write a function that frees a 2 dimensional grid previously
 *created by your alloc_grid function.
 *
 *@grid: is come back
 *@height: is come back
 *
 *Description: creer une boucle qui libère la mémoire du tableau 2D  'grid'
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
