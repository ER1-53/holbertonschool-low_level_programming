#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - check the code for
 *
 * @key: taille du
 * @size: taille du
 *
 * Return: Always EXIT_SUCCESS.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_key;
	unsigned long int index_hash;

	hash_key = hash_djb2(key);
	index_hash = hash_key % size;

	return (index_hash);
}
