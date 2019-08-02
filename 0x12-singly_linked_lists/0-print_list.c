#include "lists.h"
/**
 * print_list - print the a list strcutre
 *@h: list to print
 *Return: number of elemnts
 */
size_t print_list(const list_t *h)
{
	size_t n;
	char *ni = "(nil)";

	n = 0;
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[%i] %s\n", h->len, ni);
		}
		else
		{
		printf("[%i] %s\n", h->len, h->str);
		}
		h = h->next;
		n++;
	}
	return (n);
}
