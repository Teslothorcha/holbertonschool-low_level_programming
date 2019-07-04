#include "holberton.h"
/**
 * _strcat - check the code for Holberton School students.
 *
 * @dest: principal string
 * @src: second string added to principal string
 * Return: concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, b = 0;

	while (dest[i] != '\0')
	{
		if (dest[i] == '\0')
		{
			i++;
			break;
		}
		i++;
	}
	while (src[b] != '\0')
	{
		if (src[b] == '\0')
		{
			*(src + b) = '0';
			*(dest + i) = *(src + b);
			break;
		}
		else
		{
			*(dest + i) = *(src + b);
		}
		i++;
		b++;
	}
	return (dest);
}
