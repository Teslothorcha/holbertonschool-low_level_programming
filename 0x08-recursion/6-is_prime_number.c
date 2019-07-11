#include "holberton.h"
/**
 * is_prime_number - verify if number is prime
 * @n: number to verify
 * Return: On success 1.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n <= 1)
		return (0);
	return (prime(n, 2));

}
/**
 * prime - verifies module of number predecesors recursively
 * @chek: Verifies if it's dividibe by itself
 * @match: Number to be verified
 * Return:  1 if succeded
 */
int prime(unsigned int match, unsigned int chek)
{
	if (match == chek)
		return (1);
	if (match % chek == 0)
		return (0);
	return (prime(match, chek + 1));
}
