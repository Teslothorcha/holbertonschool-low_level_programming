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

	if (!array || size == 0)
		return (-1);
	for (; c <= size - 1; c++)
	{
		printf("Value checked array[%d] = [%i]\n", (int) c, array[c]);
		if (array[c] == value)
		{
			return (c);
		}
	}
	return (-1);
}
