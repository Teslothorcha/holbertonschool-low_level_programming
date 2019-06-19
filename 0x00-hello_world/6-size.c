#include <stdio.h>
/**
 * main -  Function prints  a string with print f
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of char: %i bytes\n", sizeof(char));
printf("Size of unsigned char: %i bytes\n", sizeof(unsigned char));
printf("Size of short: %i bytes\n", sizeof(short));
printf("Size of unsigned short: %i byte\n", sizeof(unsigned short));
printf("Size of int: %i byte\n", sizeof(int));
printf("Size of unsigned int: %i byte\n", sizeof(unsigned int));
printf("Size of long: %i byte\n", sizeof(long));
printf("Size of unsigned long: %ld byte\n", sizeof(unsigned long));

return (0);
}
