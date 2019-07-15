#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - add
 *@argc: number of arguments
 *@argv: string with arguments
 * Return: 0 1
 */
int main(int argc, char *argv[])
{
	int su, s, d;

	su = 0;
	if (argc > 1)
	{
		for (s = 1; s < argc; s++)
		{
			for (d = 0; argv[s][d] != '\0'; d++)
			{
				if (!(isdigit(argv[s][d])))
				{
					printf("Error\n");
					return (1);
				}
			}
			su += atoi(argv[s]);
		}
	}
	printf("%d\n", su);
	return (0);
}
