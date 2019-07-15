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
	int su, st, di;

	su = 0;
	if (argc > 1)
	{
		for (st = 1; st < argc; st++)
		{
			for (di = 0; argv[st][di] != '\0'; di++)
			{
				if (!(isdigit(argv[st][di])))
				{
					printf("Error\n");
					return (1);
				}
			}
			su += atoi(argv[st]);
		}
	}
	printf("%d\n", su);
	return (0);
}
