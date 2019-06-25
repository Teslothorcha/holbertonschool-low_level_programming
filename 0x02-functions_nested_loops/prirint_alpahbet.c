#include <unistd.h>
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
  char a[26] ;
  int i ;
    
  for(i = 97; i < 123; i++)
    {
    _putchar(a[i]);
}
  return(0);
}
