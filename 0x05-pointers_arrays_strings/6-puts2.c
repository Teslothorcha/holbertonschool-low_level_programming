#include "holberton.h"
/**
 * puts2 - print 1 char out of 2 of a string.
 * @str: input string.
 */
void puts2(char *str)
{
	int le = 0, i;

	while (str[le] != '\0')
	{
		if (str[le] == '\0')
		{
			break;
		}
		le++;
	}
	for  (i = 0; i < le - 1; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
