#include "holberton.h"
/**
 * _isdigit - Checks for digit
 * @c:  input to chechk for digit
 *
 * Return: 1 if digit detected
 */
int _isdigit(int c)
{
	while (c > 47 && c < 58)
	{
		return (1);
	}
	return (0);
}
