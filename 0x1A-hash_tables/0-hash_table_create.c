#include "hash_table.h"
/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 * Return: a pointer to the created hashtable
*/

hash_table_t *hash_table_create(unsigned long int size)
	hash_table_t* hashtable = (hash_table_t*) malloc(sizeof(hash_table_t));
	
	if (hashtable == NULL){
		return NULL
	}

	hashtable->size = size;
	hashtable->array = (hash_node_t**) malloc(sizeof(hash_node_t* * size));
	
	if (hashtable->array == NULL){
		free(hashtable);
		return NULL;
	}
	
	memset(hashtable, 0, sizeof(hash_node_t* ) * size);

	return hashtable;

