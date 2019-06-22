#include <stdio.h>

/**
 * main - 103.
 *
 * Return: 0
 */
int main(void)
{
int w, z, y, x, op1, op2;
w = z = y = x = 48;
while (x < 58)
{
y = 48;
while (y < 58)
{
z = 48;
while (z < 58)
{
w = 48;
while (w < 58)
{
op1 = (x * 10) + y;
 op2 = (z * 10) + w;
if (op1 < op2)
{
putchar(x);
putchar(y);
putchar(' ');
putchar(z);
putchar(w);

if (x == 57 && y == 56 && z == 57 && w == 57)
break;
putchar(',');
putchar(' ');
}
w++;
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
