#include "main.h"
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>


/**
 *int_index - return
 *@array: information of the array
 *@size: the number of elements in the array
 *@cmp: pointer to the function to be used to compare values
 *
 *
 *Description: it want eat me
 *
 *Return: Success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 0)
		{
			continue;
		}
		else
		{
			return (i);
		}
	}


	return (-1);

}
