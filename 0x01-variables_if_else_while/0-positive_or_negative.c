#include <stdlib.h>
#include <time.h>

/**
 * main -  Function prints  if random number is +,- or 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

if (n == 0)
printf("is zero\n");
else
if (n > 0)
printf("is positive\n)";
else
printf("is negative\n");
return (0);
}
