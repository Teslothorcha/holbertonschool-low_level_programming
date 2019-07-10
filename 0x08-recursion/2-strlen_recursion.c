#include "holberton.h"
/**
 * _strlen_recursion - prints recursevely a string backwardsx.
 *
 * @s: string
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
