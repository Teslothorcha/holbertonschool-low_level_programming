#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints arguments received
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i, mult = 1;

	if (argc > 2 && argc < 4)
	{
		for (i = 1; i < argc; i++)
		{
			mult *= atoi(argv[i]);
		}

		printf("%d\n", mult);
		return (0);
	}
	else if (!(argc > 2 && argc < 4))
	{
		printf("Error\n");
	}
	return (1);
}
