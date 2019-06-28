#include "holberton.h"
/**
 * print_diagonal - Prints \ specific number of timer
 * @n: the number of times '\' is printed
 *
 */
void print_diagonal(int n)
{
	int i;
	int x;

	for (i = 0; i < n; i++)
	{
		for (x = 0; x < i; x++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	if (n < 1)
	{
		_putchar('\n');
	}
}
