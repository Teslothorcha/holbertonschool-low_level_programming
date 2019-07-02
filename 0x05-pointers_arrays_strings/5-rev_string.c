#include "holberton.h"
/**
 * rev_string - print in reverse a string.
 * @s: input string.
 */
void rev_string(char *s)
{
	int le = 0, i;
	char *be, *en, ch;

	while (s[le] != '\0')
	{
		if (s[le] == '\0')
		{
			break;
		}
		le++;
	}
	be = s;
	en = s;
	for (i = 0; i < le - 1; i++)
	{
		en++;
	}
	for (i = 0; i < le / 2; i++)
	{
		ch = *en;
		*en = *be;
		*be = ch;
		be++;
		en--;
	}
}
