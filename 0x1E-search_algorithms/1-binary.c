#include "search_algos.h"


/**
 * binary_search - searchs an array linearly
 *
 * @value : value to search for
 * @size : zise of the array
 * @array : begining of the array to be searched
 * Return: index of number if found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = 0, i;
	int m = 0;

	l = 0;
	r = size - 1;

	if (!array)
		return (-1);
	while (l <= r)
	{
		m = l + (r - l) / 2;
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i < r)
				printf("%i, ", array[i]);
			else
				printf("%i\n", array[i]);
		}
		if (array[m] > value)
			r = m - 1;
		else if (array[m] < value)
			l = m + 1;
		else
			return (m);
	}
	return (-1);
}
