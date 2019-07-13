#include "holberton.h"
/**
 * _abs - Prints the absolute value of a number to stdout
 * @a:  receibes an integer number to check it
 *
 * Return: 0 on success
 */
int _abs(int a)
{
while (a < 0)
{
a = a * -1;
return (a);
}
return (a);
}
