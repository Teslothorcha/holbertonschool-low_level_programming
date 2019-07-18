#include "holberton.h"
#include "stdlib.h"
/**
 * *create_array - crates array an it dynamic memory initialized
 * @c: character to popupalte the array with
 * @size: the size of the array to populate
 *
 * Return: Nothing.
 */
void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (!str)
	{
		exit(98);
	}
	return(str);
}
