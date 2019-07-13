#include "holberton.h"
/**
 * _strncat - concatenatenates certain amount of bytes.
 *
 * @dest: principal string
 * @src: second string added to principal string
 * @n: amount of bytes to concatenate
 * Return: concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, b = 0, c = 0;

	while (dest[i] != '\0')
	{
		if (dest[i] == '\0')
		{
			i++;
			break;
		}
		i++;
	}
		while (src[c] != '\0')
	{
		if (src[c] == '\0')
		{
			c++;
			break;
		}
		c++;
	}
	while (b < n)
	{
		if (b > c)
		{
			break;
		}
		*(dest + i) = *(src + b);
		i++;
		b++;
	}
	return (dest);
}
