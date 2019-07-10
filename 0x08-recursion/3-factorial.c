#include "holberton.h"
/**
 * factorial - Factorizes a number recursively.
 *
 * @n: Number to be factorized
 * Return: lenght in bytes
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
		return (-1);
}
