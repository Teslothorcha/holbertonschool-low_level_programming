#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * strin_g - will print  string format
 *@list: argument to print
 */
void strin_g(va_list list)
{
	char *o;

	o = va_arg(list, char*);
	if (o == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", o);
}
/**
 * intege_r - will print  integer format
 *@list: argument to print
 */
void intege_r(va_list list)
{
	printf("%d",  va_arg(list, int));
}
/**
 * floa_t - will print float format
 *@list: argument to print
 */
void floa_t(va_list list)
{
	printf("%f",  va_arg(list, double));
}
/**
 * cha_r - will print  string format
 *@list: argument to print
 */
void cha_r(va_list list)
{
	printf("%c",  va_arg(list, int));
}
/**
 * print_all - print every possible format
 *@format: format given to print
 */
void print_all(const char * const format, ...)
{

	va_list list;
	char *se = "";
	int counter = 0, counter1;
	operation arr[] = {
		{'s', strin_g},
		{'c', cha_r},
		{'i', intege_r},
		{'f', floa_t},
		{'\0', NULL}
	};

	va_start(list, format);
	while (format != NULL && format[counter] != '\0')
	{
		counter1 = 0;
		while (arr[counter1].form != '\0')
		{
			if (arr[counter1].form == format[counter])
			{
				printf("%s", se);
				arr[counter1].func(list);
				se = ", ";
			}
			counter1++;
		}
		counter++;
	}
	va_end(list);
	printf("\n");
}
