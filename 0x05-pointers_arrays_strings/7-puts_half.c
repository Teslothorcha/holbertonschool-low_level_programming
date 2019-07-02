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
	while(le % 2 == 0)
	{
		for (i = le / 2; i < le ; i++)
		{
			_putchar(en[i]);
		}
		if (en[i] == '\0')
		{
			break;
		}
	}
	if (le % 2 != 0)
	{
		for (i = le - ((le -1) / 2); i < le ; i++)
		{
			_putchar(en[i]);
		}
	}
	_putchar('\n');
}
