#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - check the code for
 *
 * @ht: taille du
 *
 *
 * Return: Always EXIT_SUCCESS.
 */


void hash_table_delete(hash_table_t *ht)
{
	unsigned int index;
	hash_node_t *node, *temp;

	if (ht == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			temp = node;
			node = node->next;

			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	free(ht->array);

	/* Free the hash table struct */
	free(ht);
}

