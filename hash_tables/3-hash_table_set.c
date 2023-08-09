#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - check the code for
 *
 * @ht: taille du
 * @key: taille du
 * @value: taille du
 *
 * Return: Always EXIT_SUCCESS.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int hash_key;
	hash_node_t *new_node;

	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (1);

	hash_key = key_index((unsigned char *)key, ht->size);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[hash_key];

	ht->array[hash_key] = new_node;

	return (1);
}
