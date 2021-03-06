#include "holberton.h"
/**
 * *_strncpy - copies certain amount of bytes.
 *
 * @dest: principal string
 * @src: second string added to principal string
 * @n: amount of bytes to concatenate
 * Return: concatenated string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
