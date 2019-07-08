#include "holberton.h"
/**
 * _memset - fills memory with a constant byte.
 *
 * @s: string
 * @b: constant to be put in string
 * @n: amount of times string will be printed
 * Return:  string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return(dest);
}
