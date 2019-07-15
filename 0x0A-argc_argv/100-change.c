 #include <stdlib.h>
#include <stdio.h>
/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int coin = 0,  str = 1,  val, i;
	int coinval[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argc == 2)
	{
		val = atoi(argv[str]);
		if (val < 0)
		{
			printf("0\n");
			return (0);
		}
		while (val > 0)
		{
			i = 0;
			for (i = 0; i < 5; i++)
			{
				if (val >= coinval[i])
				{
					val -=  coinval[i];
					coin++;
					break;
				}
			}
		}
		printf("%d\n", coin);
	}
		return (0);
}
