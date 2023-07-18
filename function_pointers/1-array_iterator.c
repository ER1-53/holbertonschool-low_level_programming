#include "main.h"
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>


/**
 *array_iterator - return
 *@array: information of the array
 *@size: size of the array
 *@action: pointer to the function action
 *
 *
 *Description: it want eat me
 *
 *Return: Success
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);

}
