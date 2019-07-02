#include "holberton.h"
/**
 * print_rev - print in reverse a string.
 * @s: input string.
 */
void print_rev(char *s)
{
	int le = 0;

	while (s[le] != '\0')
	{
		if (s[le] == '\0')
		{
			break;
		}
		le++;
	}
	for (le--; le >= 0; le--)
	{
		_putchar(s[le]);
	}
	_putchar('\n');
}
