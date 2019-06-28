#include "holberton.h"
/**
 * print_triangle - Prints # specific number of times to form a triangle
 * @size: the number of times '#' is printed
 *
 */
void print_triangle(int size)
{
	int i;
	int x;
	int y;

	for (i = 0; i < size; i++)
	{
		for (x = size; x > i + 1; x--)
		{
			_putchar(' ');
		}
		for (y = 0; y <= i; y++)
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
