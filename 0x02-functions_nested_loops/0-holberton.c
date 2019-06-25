#include "holberton.h"
/**
 * main - pritns alpahbet.
 *
 * Return: Always 0.
 */
int main(void)
{
char h[] = "Holberton";
int i = 0;
while (i < 9)
{
_putchar(h[i]);
i++;
}
_putchar('\n');
return (0);
}
