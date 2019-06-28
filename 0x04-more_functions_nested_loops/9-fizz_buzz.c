#include <stdio.h>

/**
 * main - buzz test
 *
 * Return: Always 0.
 */
int main(void)
{

	int i;

	for (i = 1; i < 101 ; i++)
	{
		if(i < 100)
		{
			if (i % 3 == 0 && i % 5 != 0)
			{
				printf("Fizz");
			}
			else if (i % 5 == 0 && i % 3 != 0)
			{
				printf("Buzz");
			}
			if (i % 3 == 0 && i % 5 == 0)
			{
				printf("FizzBuzz");
			}
			else if ((i % 5 != 0) && (i % 3 != 0))
			{
				printf("%d", i);
			}
			printf(" ");
		}
		else
		{
			printf("Buzz");
		}
	}
	printf("\n");
	return (0);
}
