#include "holberton.h"
/**
 * _isalpha - Verifies if character is alphabetic
 * @c:  receibes a char to check it
 *
 * Return: 1 if alphabetic character detected
 * Return: 0 if alphabetic character not detected
 */
int _isalpha(int c)
{
while ((c > 96 && c < 123) || (c > 64 && c < 91))
{
return (1);
}
return (0);
}
