#include "hash_tables.h"
/**
 *hash_table_get - adds an ellement to a hash table
 *
 *@ht: hash table to be updated
 *@key: the key to be hashed
 *Return: value associated with key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	int ind = 0;

	if  (ht == NULL || key == NULL)
		return (NULL);
	ind = key_index((const unsigned char *)key, ht->size);
	if (ht->array[ind] == NULL)
		return (NULL);
	if (ht->array[ind])
	{
		tmp = ht->array[ind];
		while (tmp)
		{
			if (strcmp(key, tmp->key) == 0)
				return (tmp->value);
			tmp = tmp->next;
		}
	}
	return (NULL);
}
