#include "holberton.h"
/**
 * print_chessboard - will search for char on string
 *
 * @a: Pointer of 2D array that will be printed
 */
void print_chessboard(char (*a)[8])
{
	int f, c;

	for (f = 0; f < 8; f++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[f][c]);
		}
		_putchar('\n');
	}
}
