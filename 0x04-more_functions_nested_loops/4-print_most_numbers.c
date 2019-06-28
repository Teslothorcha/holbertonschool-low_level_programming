#include "holberton.h"
/**
 * print_most_numbers - Prints number from 0 to nine except 2 & 4
 *
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		if (a != 50 && a != 52)
		{
		_putchar(a);
		}
	}
	_putchar('\n');
}
