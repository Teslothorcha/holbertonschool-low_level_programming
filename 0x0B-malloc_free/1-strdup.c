#include "holberton.h"
#include "stdlib.h"
/**
 * *_strdup - copy an array an saves it on a new array
 * @str: string to be copied
 *
 * Return: copied array.
 */
char *_strdup(char *str)
{
	char *v;
	int len, i;

	for (len = 0; str[len] != '\0'; len++)
	{
		if (str[len] == '\0')
		{
			break;
		}
	}
	v = malloc(sizeof(char) * len);
	if (*str == 0 || v == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		v[i] = str[i];
	}
	return (v);
}
