#include "holberton.h"
/**
 * _strlen - count arrays positions.
 *
 * @str: Char array input.
 */
void _puts(char *str)
{

	int le = 0;

	while (str[le] != '\0')
	{
		_putchar(str[le]);
		le++;
	}
		_putchar('\n');
}
