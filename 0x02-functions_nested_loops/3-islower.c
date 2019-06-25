#include "holberton.h"
/**
 * _islower - Verifies if letter are lowercase
 * @c:  receibes a char to check it
 *
 * Return: 1 if lowercase detecde
 * Return: 0 if lowercase is not detected
 */
int _islower(int c)
{
while (c > 96 && c < 123)
{
return (1);
}
return (0);
}
