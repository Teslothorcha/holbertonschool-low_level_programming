#include "holberton.h"
/**
 * cap_string - CHanges lowecases to Uppercases on a string.
 *
 * @s: array to convert letters
 * Return: reutrns array with letter changed
 */
char *cap_string(char *s)
{
	int i = 0, b;
	char se[13] = {9, 32, 59, 44, 10, 46, 63, 33, 34, 40, 41, 123, 125};

	while (s[i] != '\0')
	{
		while (b < 13)
		{
			if ((se[b] == s[i]) && s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - 32;
			}
			if (s[0] > 96 && s[0] < 123)
			{
				s[0] = s[0] - 32;
			}
			b++;
		}
		b = 0;
		i++;
	}
	return (s);
}
