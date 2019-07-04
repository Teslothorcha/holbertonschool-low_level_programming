#include "holberton.h"
/**
 * string_toupper - CHanges lowecases to Uppercases on a string.
 *
 * @s: array to convert letters
 * Return: reutrns array with letter changed
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			*(s + i) = *(s + i) - 32;
		}
		i++;
	}
	return (s);
}
