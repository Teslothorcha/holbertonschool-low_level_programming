#include <stdlib.h>
#include <stdio.h>
/**
 *main - prints Alphabet in lower and upper case
 *
 *Return: (0)
 */
int main(void)
{
int x;
for (x = 97; x <= 122; x++)
{
putchar(x);
}
if (x > 122)
{
for (x = 65; x <= 90; x++)
{
putchar(x);
}
}
putchar('\n');
return (0);
}

