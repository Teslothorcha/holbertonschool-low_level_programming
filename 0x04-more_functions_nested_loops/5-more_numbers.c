#include "holberton.h"
/**
 * more_numbers - Prints ten times numbers from  0 & 4
 *
 */
void more_numbers(void)
{
	int i;
	int n;

	for (n = 0; n < 11 ; n++)
	{
		for (i = 0; i < 15 ; i++)
		{
			if (i > 9)
		{
			_putchar((i / 10) + '0');
		}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
