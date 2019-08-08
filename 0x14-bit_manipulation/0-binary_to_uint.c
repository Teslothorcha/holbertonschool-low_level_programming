#include "holberton.h"
/**
 *
 *
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int  lenght = 0, power = 1, count = 0;

	if (b == NULL)
		return(0);
	while ( b[lenght] != '\0')
	{
		lenght++;
	}
	for (count = lenght - 1; count >= 0; count--, power *=2)
	{
		if (b[count] & 1)
		{
			num +=  power;
		}
		if (b[count] != '0' && b[count] != '1' )
			return(0);
	}
	return (num);
}
