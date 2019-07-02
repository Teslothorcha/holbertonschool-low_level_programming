#include "holberton.h"
/**
 * _strlen - switches variable values.
 *
 * @s: char input
 */
int _strlen(char *s)
{
	int le = 0;

	while (s[le] != '\0')
	{
		le++;
	}
	return (le);
}
