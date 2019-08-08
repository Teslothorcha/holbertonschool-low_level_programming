#include "holberton.h"
/**
 *print_binary - convert decimal to binary
 *@n: number to convert
 */
void print_binary(unsigned long int n)
{
	unsigned long int bi[sizeof(unsigned long int) * 8];
	unsigned long int count = 0, index, size, stop = 0;

	if (n == 0)
		_putchar(48);
	size = sizeof(unsigned long int) * 8;
	index = (size) - 1;
	while (index)
	{
		bi[index] = n & 1;
		index--;
		n = n >> 1;
	}
	while (bi[stop] != 1)
	{
		stop++;
	}
	for (count = stop; count < size; count++)
	{
		_putchar(bi[count] + '0');
	}
}
