#include "holberton.h"
/**
 * puts_half - print in reverse a string.
 * @str: input string.
 */
void puts_half(char *str)
{
	int le = 0, i;
	char *en;

	while (str[le] != '\0')
	{
		if (str[le] == '\0')
		{
			break;
		}
		le++;
	}
	en = str;
	for (i = le / 2; i < le ; i++)
	{
		_putchar(en[i]);
	}
	_putchar('\n');
}
