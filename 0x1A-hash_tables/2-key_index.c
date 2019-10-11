#include "hash_tables.h"
/**
 *key_index - generate hash code for key to be indexed
 *@size: size of the hash table
 *@key: the key to be stored on the hash table
 *Return: index for the key to be added
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int  hash_code;

	hash_code = hash_djb2(key);

	return ((hash_code) % size);
}
