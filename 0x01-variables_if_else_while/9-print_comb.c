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
if (x <= 56)
{
putchar(x);
putchar(',');
putchar(' ');
}
else
{
putchar (x);
}
}
putchar('\n');
return (0);
}
