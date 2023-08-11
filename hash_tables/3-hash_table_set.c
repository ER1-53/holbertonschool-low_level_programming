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
	hash_node_t *temp;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);


	hash_key = key_index((unsigned char *)key, ht->size);
	temp = ht->array[hash_key];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);


	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[hash_key];

	ht->array[hash_key] = new_node;

	return (1);
}
