#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

int _lenght(char *str);

/**
 * *_lenght - calculates string length
 * @str: Pointer to string
 * Return: Lenght of string.
 */
int _lenght(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	return (i);
}

/**
 * *string_nconcat - concatenates n bytes of second string to first string
 * @*lenght - - calculates string length
 * @s1: string copied to new space
 * @s2: String which n bytes are concatenated to first string
 * @n: bytes to be copied from s2.
 * Return: concatenated array.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *finalstr;
	unsigned int lens1, lens2, final, final2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	lens1 = _lenght(s1);
	lens2 = _lenght(s2);
	if (n >= lens2)
	{
		n = lens2;
	}
	finalstr = malloc(sizeof(char) * (lens1 + n + 1));
	if (finalstr == NULL)
	{
		return (NULL);
	}
	for (final = 0; final < lens1; final++)
	{
		finalstr[final] = s1[final];
	}
	for (final2 = 0; final2 <= n; final2++, final++)
	{
		finalstr[final] = s2[final2];
		if (final2 == n)
		{
			finalstr[final] = '\0';
		}
	}
	return (finalstr);
}
