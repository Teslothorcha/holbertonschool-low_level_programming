#include "hash_tables.h"
/**
 *hash_table_print - adds an ellement to a hash table
 *
 *@ht: hash table to be updated
 *Return: value associated with key
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned int count, f = 0;

	if (ht == NULL)
		exit(0);

	printf("{");
	for (count = 0; count < ht->size; count++)
	{
		tmp = ht->array[count];
		while (tmp)
		{
			if (f == 0)
				printf("'%s': '%s'", tmp->key, tmp->value);
			else if (f == 1)
				printf(", '%s': '%s'", tmp->key, tmp->value);
			f = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
