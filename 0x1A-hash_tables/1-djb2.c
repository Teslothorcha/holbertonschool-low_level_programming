#include "hash_tables.h"
/**
 * hash_djb2 - generate hash code index fos given string
 *
 * @str: key to generate index has code from
 * Return: index code
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
