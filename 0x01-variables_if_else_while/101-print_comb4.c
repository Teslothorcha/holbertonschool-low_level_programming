#include <stdio.h>

/**
 * main - 101
 *
 * Return: 0
 */

int main(void)
{
int x, y, z;

y = 48;
x = 48;
z = 48;

while (x < 58)
{
y = 48;
while (y < 58)
{
z = 48;
while (z < 58)
{
if (x != y && x != z && y != z && x < y && y < z)
{
putchar(x);
putchar(y);
putchar(z);
if (y == 56 && x == 55 && z == 57)
{
break;
}
putchar(',');
putchar(' ');
}
z++;
}
y++;
}
x++;
}
putchar('\n');
return (0);
}
