#include "holberton.h"
/**
 * cap_string - CHanges lowecases to Uppercases on a string.
 *
 * @s: array to convert letters
 * Return: reutrns array with letter changed
 */
char *leet(char *s)
{
	int i = 0, b;
	int s2[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	int s1[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	while (s[i] != '\0')
	{
		while (b < 13)
		{
			if (s[i] == s2[b])
			{
				s[i] = s1[b];
			}
			b++;
		}
		b = 0;
		i++;
	}
	return (s);
}
