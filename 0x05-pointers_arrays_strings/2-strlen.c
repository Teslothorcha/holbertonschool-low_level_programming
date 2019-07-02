#include "holberton.h"
/**
 * _strlen - gives string lenght.
 *
 * @s: char input
 * Return: lenght of input
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
