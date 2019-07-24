#include "function_pointers.h"
/**
 * print_name - will callback a fuction through a pointer
 *@name: String to be printed
 *@f: Pointer to a function that will be call
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
