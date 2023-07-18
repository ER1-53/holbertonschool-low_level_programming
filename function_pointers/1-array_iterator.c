#include "main.h"
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>


/**
 *_function - return
 *@name: is come back
 *
 *
 *Description: it want eat me
 *
 *Return: Success
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);

}
