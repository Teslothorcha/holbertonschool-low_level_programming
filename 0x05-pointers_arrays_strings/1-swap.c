#include "holberton.h"
/**
 * swap_int - switches variable values.
 *
 * @a: Integer input.
 * @b: Integer input
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
