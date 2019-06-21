#include <stdlib.h>
#include <stdio.h>
/**
 *main - prints Alphabet in lower case
 *
 *Return: (0)
 */
int main(void)
{
int x, y;
for (x = 48; x <= 57; x++)
{
for (y = 48; y <= 57; y++)
{
putchar (x);
putchar (y);
if (x != 57 || y != 57)
{
putchar (',');
putchar (' ');
}
}
}
putchar('\n');
return (0);
}
