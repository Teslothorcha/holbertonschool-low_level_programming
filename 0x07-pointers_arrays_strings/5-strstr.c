#include "holberton.h"
/**
 * _strstr - will search for char on string
 *
 * @haystack: string in which match will be searched
 * @needle:  string that will be prionted with the match
 * Return:  pointer to string begining on  match.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, a = 0;

	while (*(needle + i) != '\0')
	{
		a = 0;
		while (*(haystack + a) != '\0')
		{
			if (*(needle + i) == *(haystack + a))
			{
				return (needle + i);
			}
			a++;
		}
		i++;
	}
	return (0);
}
