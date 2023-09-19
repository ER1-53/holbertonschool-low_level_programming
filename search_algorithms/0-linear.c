#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - Recherche linéaire d'une valeur dans un tableau.
 * @array: Le tableau d'entiers.
 * @size: La taille du tableau.
 * @value: La valeur à rechercher.
 *
 * Return: L'index de la première occurrence de la valeur, ou -1
 * si non trouvée.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}

