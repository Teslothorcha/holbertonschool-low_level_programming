#include <stdlib.h>
#include <stdio.h>
/**
 *main - prints Alphabet in lower case
 *
 *Return: (0)
 */
int main(void)
{
int x;
for (x = 48; x <= 57; x++)
{
putchar (x);
if (x <= 56)
{
putchar(',');
putchar(' ');
}
else
{
}
}
putchar('\n');
return (0);
}
