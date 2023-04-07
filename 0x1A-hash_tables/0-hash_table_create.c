#include "hash_tables.h"

/**
 * hash_table_create - this function creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable;
	unsigned long int i;

	hashTable = malloc(sizeof(hash_table_t));
	if (hashTable == NULL)
		return (NULL);
	hashTable->size = size;
	hashTable->array = malloc(size * sizeof(hash_node_t *));
	if (hashTable->array == NULL)
	{
		free(hashTable);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		hashTable->array[i] = NULL;
	return (hashTable);
}
