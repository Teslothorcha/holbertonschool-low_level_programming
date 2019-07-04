#include "holberton.h"
/**
 * reverse_array - reverses an array.
 *
 * @a: array to reverse
 * @n: array size
 */
void reverse_array(int *a, int n)
{
	int temp, *in, *fi;

	in = a;
	fi = a + n - 1;

	while (in < fi)
	{
		temp = *in;
		*in = *fi;
		*fi = temp;
		in++;
		fi--;
	}
}
