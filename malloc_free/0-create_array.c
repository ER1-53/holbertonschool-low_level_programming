#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - return
 *@size: is come back
 *@c: the other
 *
 *Description: it want eat me
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
	free(arr);
	return (arr);
}


