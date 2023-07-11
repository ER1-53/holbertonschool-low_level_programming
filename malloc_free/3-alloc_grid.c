#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - Write a function that concatenates two strings.
 *
 *@width: is come back
 *@height: is come back
 *
 *Description: alloue de la mémoire pour pouvoir concatener deux string
 *
 *Return: Success
 */

int **alloc_grid(int width, int height)
{
	int **tab;

if (width <= 0 || height <= 0)
	return 0;

tab = malloc(width * sizeof( int *));
tab = malloc(height * sizeof( int *));

for (y = 0 ; y < height; y++)
{
	for (x = 0; x < width; x++)
}


}
