#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - check the code for
 *
 * @ht: taille du
 * @key: taille du
 *
 *
 * Return: Always EXIT_SUCCESS.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash_key;
	hash_node_t *search;

	if (ht == NULL || key == NULL)
		return (NULL);

	hash_key = key_index((const unsigned char *)key, ht->size);
	search = ht->array[hash_key];

	while (search != NULL)
	{
		if (strcmp(search->key, key) == 0)
		{
			return (search->value);
		}
		search = search->next;
	}

	return (NULL);
}

