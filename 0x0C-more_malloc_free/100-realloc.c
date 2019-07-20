#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *_realloc - Creates a new amount of memory of a given pinter
 * @ptr: pointer to a memory previos allocated
 * @old_size: size allocared for ptr
 * @new_size: size to be allcated
 * Return: Pointer to new space of memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str, *tmp;
	unsigned int count;


	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	str = malloc(new_size);
	if (!str)
	{
		return (NULL);
	}
	tmp = ptr;
	if (ptr != 0)
	{
		for (count = 0; count < old_size; count++)
		{
			str[count] = tmp[count];
		}
	}
	free(ptr);
	return (ptr);
}
