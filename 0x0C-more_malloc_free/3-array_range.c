#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *_array_range - Creates an array and initializes it with a range on integers
 * @min: begining of the range
 * @max: Limit of the range
 * Return: Array of integers.
 */
int *array_range(int min, int max)
{
	int *range;
	int count;

	if (min > max)
	{
		return (NULL);
	}
	range = malloc(sizeof(int) * (max - min + 1));
	if (!range)
	{
		return (NULL);
	}
	for (count = 0; count < (max - min); count++)
	{
		range[count] =  min + count;
	}
	return (range);
}
