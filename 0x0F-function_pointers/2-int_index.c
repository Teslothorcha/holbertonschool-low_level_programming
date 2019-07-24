#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - callback a function on each element of an array.
 *@array: Array to be handled
 *@size: Size of the array
 *@cmp: function that will be called upon the array to compare.
 *Return: Index in wich cmp function succeded.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (count = 0; count < size; count++)
		{
			cmp(array[count]);
			if (cmp(array[count]) == 1)
			{
				return (count);
			}
		}
	}
	return (-1);
}
