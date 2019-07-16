#include "holberton.h"
#include "stdlib.h"
/**
 * *create_array - crates array an it dynamic memory initialized
 * @c: character to popupalte the array with
 * @size: the size of the array to populate
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *v;
	unsigned int pos;

	if (size == 0)
	{
		return (NULL);
	}
	v = malloc(sizeof(char) * size);
	if (v == NULL)
	{
		return (NULL);
	}
	for (pos = 0; pos < size; ++pos)
	{
		v[pos] = c;
	}
	return (v);
}
