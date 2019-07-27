#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdarg.h>
void print_strings(const char *separator, const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);
void stirn_g(va_list list);
void intege_r(va_list list);
void floa_t(va_list list);
void cha_r(va_list list);
void print_all(const char * const format, ...);
/**
 * op - Operation
 *@form: parameter that indicates format
 * @func: Points to a function that prints
 */
typedef struct op
{
	char form;
	void (*func)(va_list);
} operation;

#endif
