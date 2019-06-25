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
char a;
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}
