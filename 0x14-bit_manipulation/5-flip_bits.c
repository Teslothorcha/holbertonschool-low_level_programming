#include "holberton.h"
/**
 *flip_bits - find amount of different bits
 *@n: first number to check
 *@m: second number to check
 *Return: amount of different bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bit = 0;

	while (xor > 0)
	{
		if (xor & 1)
			bit++;
		xor >>= 1;
	}

	return (bit);
}
