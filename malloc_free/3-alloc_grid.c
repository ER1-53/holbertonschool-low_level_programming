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
int **alloc_grid(int width, int height)
{
	char *arr;
	int i, y;

	if (width <= 0 ||height <= 0)
	return (0);

	arr = malloc(sizeof(int) * width);
	if (arr == NULL)
		return (NULL);
		for (i = 0; i < height; i++)
		{
			arr[i] = malloc(sizeof(int) * width);

			if(arr[i] == NULL)
			{
				for (;i >= 0; i++)
					free(arr[i]);

				free(arr);
				retunr (NULL);
			}
		}
		for (i = 0; i < height; i++)
		{
			for(y = 0; y< width; y++)
			{
				arr[i][y] = 0;

			}
		}
		return (arr);
}
