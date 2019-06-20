#include<stdio.h>

/**
 * main - Putting character with an char array
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
char str1ng[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, str1ng, 59);
return (1);
}
