#include "holberton.h"
/**
 * _sqrt_recursion - Calculate the square root
 * @n: number to be square rooted
 * Return: On success 1.
 */
int _sqrt_recursion(int n)
{
	return (root(0, n));

}
/**
 * root - Calculate the square root
 * @chek: Possible square root
 * @match: Number to be square rooted
 * Return:  result or -1
 */
int root(int chek, int match)
{
	if (chek * chek == match)
		return (chek);
	if (chek * chek > match)
		return (-1);
	return (root(chek + 1, match));
}
