#include "holberton.h"
/**
 * print_line - Prints _ specific number of timer
 * @n: the number of times '_' is printed
 *
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n ; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
