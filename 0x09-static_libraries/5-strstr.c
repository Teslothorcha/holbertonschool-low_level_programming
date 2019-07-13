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
	char *p1;
	char *p2;

	while (*haystack)
	{
		p1 = haystack;
		p2 = needle;

		while (*haystack == *p2)
		{
			haystack++;
			p2++;
		}
		if (*p2 == '\0')
		{
			return (p1);
		}
		haystack++;
	}
	return (0);
}
