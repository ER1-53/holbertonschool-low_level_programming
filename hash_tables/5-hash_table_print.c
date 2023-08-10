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
			printf("'%s': '%s'", element->key, element->value);
			if (element->next != NULL)
			{
				printf(", ");
			}
			element = element->next;
		}
	}
	printf("}\n");
}


