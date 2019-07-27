#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - will add every possible argument given
 *@n: ammount of possible arguments
 *Return: result of addition as integer
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list_num;
	unsigned int result = 0, counter;

	if (n == 0)
		return (0);
	va_start(list_num, n);
	for (counter = 0; counter < n; counter++)
	{
		result += va_arg(list_num, int);
	}
	va_end(list_num);
	return (result);
}
