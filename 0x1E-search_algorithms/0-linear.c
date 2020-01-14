#include "search_algos.h"


/**
 * linear_search - searchs an array linearly
 *
 * @value : value to search for
 * @size : zise of the array
 * @array : begining of the array to be searched
 * Return: index of number if found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t c = 0;

	if (!array)
		return (-1);
	for (; c <= size; c++)
	{
		printf("Value checked array[%zd] = [%i]\n", c, array[c]);
		if (array[c] == value)
		{
			return (c);
		}
	}
	return (-1);
}
