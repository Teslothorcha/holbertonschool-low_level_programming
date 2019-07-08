#include "holberton.h"
/**
 * _strpsn - gets length of prefix substring
 *
 * @s: string to search prefix in
 * @accept:  string to be searched for in string prefix
 * Return:  pointer to string.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, a = 0, count = 0;

	while (*(s + i) != 32)
	{
		if (count != i)
		{
			break;
		}
		a = 0;
		while (*(accept + a) != '\0')
		{
			if (*(s + i) == *(accept + a))
			{
				count++;
			}
				a++;
		}
		i++;
	}
	return (count);
}
