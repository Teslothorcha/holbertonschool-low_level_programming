#include "hash_tables.h"
/**
 * hash_table_create - creates a hash tabel with given amount of index
 * @size: The size of the hash table
 *
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;
	unsigned int i = 0;

	new_hash =  malloc(sizeof(hash_table_t));
	if (!new_hash)
		return (NULL);
	new_hash->size = size;
	new_hash->array =  malloc(sizeof(hash_node_t *) * (size));
	if (!new_hash->array)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		new_hash->array[i] = NULL;
	}
	return (new_hash);
}
