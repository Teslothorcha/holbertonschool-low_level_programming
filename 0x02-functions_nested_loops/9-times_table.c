#include "holberton.h"
/**
 * times_table - Prints 9 times table
 *
 * Return: 0 on success
 */
void times_table(void)
{
 int a, b, m;
 
 for(a = 0; a < 10; a++)
 {
 for(b = 0; b < 10; b++)
 {
 m = a * b;
 if(m >= 10)
   { 
 _putchar(',');
 _putchar(' ');
 _putchar( (m / 10) + '0');
 _putchar( (m % 10) + '0');
 }
 else 
   {
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(m + '0');
   }
   }
 
_putchar('\n');
}
}
