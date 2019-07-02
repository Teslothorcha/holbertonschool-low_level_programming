#include "holberton.h"
#include <stdio.h>
/**
 * puts_half - print in reverse a string.
 * @str: input string.
 */
void print_array(int *a, int n)
{
	int le = 0, i;

	while (a[le] != '\0')
	{
		if (a[le] == '\0')
		{
			break;
		}
		le++;
	}
	for (i = 0; i < le - ( le - n); i++)
	{
		if(i ==  (le - ( le - n)) - 1)
		{
			printf("%d",*a);
		}
		else
		{
			printf("%d",*a);
			printf(",");
			printf(" ");
		}
		a++;
	}
	printf("\n");
}
