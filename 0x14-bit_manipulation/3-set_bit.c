#include "holberton.h"
/**
 *set_bit - searches specific bit on number
 *@n: number to insert bit in
 *@index: position for bit to be added
 *Return: 1 if succeded
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
		return (-1);
	mask = 1 << index;
	*n |= mask;

	return (1);
}
