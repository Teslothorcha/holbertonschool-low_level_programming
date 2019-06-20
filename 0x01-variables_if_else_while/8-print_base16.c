#include <stdlib.h>
#include <stdio.h>
/**
 *main - prints Alphabet in lower case
 *
 *Return: (0)
 */
int main(void)
{
int x = 48;
while (x <= 57)
{
putchar(x);
x++;
}
for (x = 97; x <= 102; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
