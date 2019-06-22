
#include <stdio.h>

/**
 * main - 100 advanced
 *
 * Return: 0
 */
int main(void)
{
int y, x;
y = 48;
x = 48;
while (x < 58)
{
y = 48;
while (y < 58)
{
if (x != y && x < y)
{
putchar(x);
putchar(y);
if (y == 57 && x == 56)
{
break;
}
putchar(',');
putchar(' ');
}
y++;
}
x++;
}
putchar('\n');
return (0);
}
