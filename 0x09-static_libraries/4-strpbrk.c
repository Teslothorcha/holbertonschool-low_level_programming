#include "holberton.h"
/**
 * _strpbrk - will searches a string for any of a set of bytes
 *
 * @s: string to search match
 * @accept:  string of the match input
 * Return:  pointer to string begining on  match.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, a = 0;

	while (*(s + i) != '\0')
	{
		a = 0;
		while (*(accept + a) != '\0')
		{
			if (*(s + i) == *(accept + a))
			{
				return (s + i);
			}
			a++;
		}
		i++;
	}
	return (0);
}
