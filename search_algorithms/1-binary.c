#include <stdio.h>

/**
 * binary_search - Recherche binaire d'une valeur dans un tableau trié.
 * @array: Le tableau trié d'entiers.
 * @size: Le nombre d'éléments dans le tableau.
 * @value: La valeur à rechercher.
 *
 * Return: L'index où la valeur est située, ou -1 si non trouvée.
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, mid, i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
			else
				printf("\n");
		}

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
