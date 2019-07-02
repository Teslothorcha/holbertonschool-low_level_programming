#include "holberton.h"
/**
 * _strcpy - print copy of a string.
 * @dest: output string.
 * @src: source string.
 *
 * Return: copied string.
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0, i = 0;

	while (src[len] != '\0')
	{
		if (src[len] == '\0')
		{
			break;
		}
		len++;
	}
	for (i = 0; i < len; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';
	return (dest);
}
