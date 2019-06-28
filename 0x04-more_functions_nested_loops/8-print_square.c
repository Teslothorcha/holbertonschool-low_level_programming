#include "holberton.h"
/**
 * print_square - Prints # specific number of times toforma square
 * @n: the number of times '#' is printed
 *
 */
void print_square(int size)
{
	int i;
	int x;

	for (i = 0; i < size; i++)
	{
		for (x = 0; x < size; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size < 1)
	{
		_putchar('\n');
	}
}
