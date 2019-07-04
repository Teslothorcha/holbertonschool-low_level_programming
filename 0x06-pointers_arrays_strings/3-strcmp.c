#include "holberton.h"
/**
 * *_strcmp - compares two strings.
 *
 * @s1: principal string
 * @s2: secondary string
 * Return: '-' if s1 less than s2, '+' if greater and if equal.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
	}
	return (s1[i] - s2[i]);
}
