#include "holberton.h"
/**
 * _isupper - Verifies if letter are lowercase
 * @c:  receibes a char to check it
 *
 * Return: 1 if uppercase detected
 */
int _isupper(int c)
{
	while (c > 64 && c < 91)
	{
		return (1);
	}
	return (0);
}
