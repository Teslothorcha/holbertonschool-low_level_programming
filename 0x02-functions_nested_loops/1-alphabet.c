#include "holberton.h"
/**
 * print_alphabet - prints alphabet, in lower case, followed by a new line
 * 
 *
 * Return: Nothing.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
char a[] = "abcdefghijklmnopqrstuvwxyz";
int i ;    
for(i = 0; i < 27; i++)
{
_putchar(a[i]);
}
_putchar('\n');
}
