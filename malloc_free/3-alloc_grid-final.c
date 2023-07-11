#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - Write a program that multiplies two numbers.
 *
 *@s1: is come back
 *@s2: is come back
 *
 *Description:
 *
 *condition:
 *
 *
 *
 *
 *
 *Return: Success
 */
int** alloc_grid(int width, int height)
{
	int** arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return NULL;

	arr = malloc(sizeof(int*) * height);
	if (arr == NULL)
		return NULL;

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr[j]);
			free(arr);
			return NULL;
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return arr;
}
