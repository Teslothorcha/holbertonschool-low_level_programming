#include <stdio.h>
#include <stdlib.h>

/**
 *main - adds positive numbers
 *@argc: counter
 *@argv: arguments given
 *Return: 0 if no argument given, 1 if argument different than digits
 */
int main(int argc, char **argv)
{

	int suma = 0, str, digit;
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (str = 1; str < argc; str++)
		{
			for (digit = 0; argv[str][digit] != '\0'; digit++)
			{
				if (argv[str][digit] < '0' || argv[str][digit] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			suma += atoi(argv[str]);
		}
	}
	printf("%i\n", suma);
	return (0);
}
