#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add
 *@argc: number of arguments
 *@argv: string with arguments
 * Return: 0 1
 */
int main(int argc, char *argv[])
{
	int suma, str, digit;

	suma = 0;
	if (argc > 1)
	{
		for (str = 1; str < argc; str++)
		{
			for (digit = 0; argv[str][digit] != '\0'; digit++)
			{
				if (!(isdigit(argv[str][digit])))
				{
					printf("Error\n");
					return (1);
				}
			}
			suma += atoi(argv[str]);
		}
	}
	printf("%d\n", suma);
	return (0);
}
