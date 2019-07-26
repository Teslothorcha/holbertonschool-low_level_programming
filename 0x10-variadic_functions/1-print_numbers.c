#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - will print  every argument given separated by a string
 *@n: ammount of possible arguments
 *@separator: separator of arguments printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list_num;
	unsigned int counter;

	va_start(list_num, n);
	for (counter = 0; counter < n; counter++)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(list_num, int));
		}
		if (counter == 0)
		{
			printf("%d", va_arg(list_num, int));
		}
		else if (counter == n - 1)
		{
			printf("%s %d\n", separator, va_arg(list_num, int));
		}
		else if (counter < n - 1)
		{
			printf("%s %d", separator, va_arg(list_num, int));
		}
	}
	va_end(list_num);
}
