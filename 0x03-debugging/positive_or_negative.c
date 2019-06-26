#include <stdlib.h>
#include "holberton.h"
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative -  Function prints  if random number is +,- or 0
 *@n: enter input
 * Return: Always 0 (Success)
 */
int  positive_or_negative(int n)
{
if (n == 0)
printf("%d is zero\n", n);
else
if (n > 0)
printf("%d is positive\n", n);
else
printf("%d is negative\n", n);
return (0);
}
