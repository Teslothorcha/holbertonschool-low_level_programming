#include "holberton.h"
/**
 *clear_bit - turn of bit on defined position
 *@n: number of bit to be turned off
 *@index: position for bit to be erased
 *Return: 1 if succeded
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
		return (-1);
	mask = ~(1 << index);
	*n &= mask;

	return (1);
}
