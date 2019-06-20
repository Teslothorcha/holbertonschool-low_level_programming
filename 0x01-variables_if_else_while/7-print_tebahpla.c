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
for (x = 122; x >= 97; x--)
{
putchar(x);
}
putchar('\n');
return (0);
}
