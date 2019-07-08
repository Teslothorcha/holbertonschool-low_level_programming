#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - print the aditin of matrix diagonals
 *
 * @a: array pointer input
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int i, sum = 0, sumi = 0;

	for (i = 0; i < (size * size) - size;)
	{
		i = i + size - 1;
		sumi = sumi + a[i];
	}
	for (i = 0; i < (size * size);)
	{
		sum = sum + a[i];
		i = i + size + 1;
	}
	printf("%d, %d\n", sum, sumi);
}
