#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *str_concat - concatenates two string in a new openly memory space
 * @s1: string copies to new space
 * @s2: String concatenated to first string
 * Return: concatenated array.
 */
char *str_concat(char *s1, char *s2)
{
	char *v;
	int len, teja, s, dos;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (len = 0; s1[len] != '\0'; len++)
	{
		if (s1[len] == '\0')
		{
			break;
		}
	}
	for (teja = 0; s2[teja] != '\0'; teja++)
	{
		if (s2[teja] == '\0')
		{
			break;
		}
	}
	v = malloc(sizeof(char) * (len + teja + 1));
	if (v == NULL)
	{
		return (NULL);
	}
	for (s = 0; s < len; s++)
	{
		v[s] = s1[s];
	}
	for (dos = 0; dos <= teja; dos++)
	{
		v[s] = s2[dos];
		s++;
	}
	return (v);
}
