#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - will pxrint  every argument given separated by a string
 *@n: ammount of possible arguments
 *@separator: separator of arguments printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list_str;
	unsigned int counter;
	char *str;

	va_start(list_str, n);
	for (counter = 0; counter < n; counter++)
	{
		str = va_arg(list_str, char*);
		if (str != NULL)
		{
			if (counter == 0)
				printf("%s", str);
			else if (counter != 0)
			{
				printf("%s", separator);
				printf("%s", str);
			}
		}
		if (str == NULL)
		{
			if (counter != 0)
			{
				printf("%s", separator);
				printf("(nil)");
			}
			else if (counter == 0)
			{
				printf("(nil)");
			}
		}
	va_end(list_str);
	}
	printf("\n");
}
