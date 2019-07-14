#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int str, digit, suma = 0;

	for (str = 1; str < argc; str++)
	{
		for (digit = 0; argv[str][digit] != '\0'; digit++)
		{
			if (!isdigit(argv[str][digit]))
			{
				printf("Error\n");
				return (1);
			}
		}
		suma += atoi(argv[str]);
	}
	printf("%d\n", suma);
	return (0);
}
