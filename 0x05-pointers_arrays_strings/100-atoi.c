#include "holberton.h"
/**
 * _atoi - Finds number on string
 * @s: String input to find number
 * Return: number from input
 */
int _atoi(char *s)
{
	int n = 0, i = 0, sign = -1;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
		n = (n * 10) - (s[i++] - '0');

	return (n * sign);
}
