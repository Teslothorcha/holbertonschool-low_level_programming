#include "holberton.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @p:  receibes an integer number to check it
 *
 * Return: 0 on success
 */
int print_last_digit(int p)
{
int o;
if (p < 0)
{
o = (p % 10) * -1;
_putchar(o + '0');
return (o);
}
else
{
o = p % 10;
_putchar(o + '0');
return (o);
}
}
