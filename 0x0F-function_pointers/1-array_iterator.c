#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - callback a function on each element of an array.
 *@array: Array to be handled
 *@size: Size of the array
 *@action: function that will be called upon the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count;

	if (array != NULL && action != NULL)
	{
		for (count = 0; count < size; count++)
		{
			action(array[count]);
		}
	}
}
