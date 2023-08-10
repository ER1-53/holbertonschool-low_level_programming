#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - check the code for
 *
 * @ht: taille du
 *
 *
 * Return: Always EXIT_SUCCESS.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int virgule = 0;
	hash_node_t *element;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{

		element = ht->array[i];

		while (element != NULL)
		{
			if (virgule != 0)
				printf(", ");
			virgule = 1;
			printf("'%s': '%s'", element->key, element->value);
			element = element->next;
		}
	}
	printf("}\n");
}


