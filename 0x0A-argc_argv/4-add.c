#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int suma, i, j;

	suma = 0;
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		suma += atoi(argv[i]);
	}
	printf("%d\n", suma);
	return (0);
}
