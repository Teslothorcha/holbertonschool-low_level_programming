#include "holberton.h"
/**
 *get_endianness - check endianess
 *Return: 0 big indian 1 little indian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	else
		return (0);
}
