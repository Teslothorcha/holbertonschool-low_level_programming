#include "holberton.h"
#include <stdio.h>
#include "stdlib.h"
/**
 * *malloc_checked - creates memory with malloc
 * @b: amount of bytes to create in memory
 *
 * Return: void pointer.
 */
void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (!str)
	{
		exit(98);
	}
	return (str);
}
