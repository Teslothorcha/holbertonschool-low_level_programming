#include "holberton.h"
/**
 * _memcpy - fills memory with a constant byte.
 *
 * @dest: string
 * @src: constant to be put in string
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
	return (dest);
}
