#include "holberton.h"
/**
 * _strchr - locate character on a string.
 *
 * @s: string to search in
 * @c: character to be searched for in string
 * Return:  pointer to string.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0, a = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
