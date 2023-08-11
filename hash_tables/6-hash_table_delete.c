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


void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *item;

	 for (i = 0; i < ht->size; i++)
	 {
		item = ht->array[i];

		while (item != NULL)
		{
			hash_node_t *temp = item;
			item = item->next;
			free(temp);
		}
	}

	free(ht->array);
	free(ht);
}
