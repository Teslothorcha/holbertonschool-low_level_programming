#include "hash_tables.h"
/**
 *hash_table_delete - adds an ellement to a hash table
 *
 *@ht: hash table to be updated
 *Return: value associated with key
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *tmp1;
	unsigned int count;

	if (ht == NULL)
		exit(0);

	for (count = 0; count < ht->size; count++)
	{
		tmp = ht->array[count];
		tmp1 = ht->array[count];
		while (tmp)
		{
			tmp1 = tmp1->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = tmp1;
		}
	}
	free(ht->array);
	free(ht);
}
