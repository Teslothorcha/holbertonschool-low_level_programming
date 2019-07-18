#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *_calloc - crates space in heap memory and initializes it with 0.
 * @size: size of tipe data to enter
 * @nmemb: Amount of type data to create
 * Return: concatenated array.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ceros;
	int count;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ceros = malloc(nmemb * size);
	if (!ceros)
	{
		return (NULL);
	}
	for (count = 0; ceros[count] < (nmemb * size); count++)
	{
		ceros[count] = 0;
	}
	return (ceros);
}
