#include "lists.h"
/**
 * list_len - list the nodes of a list strcutre
 *@h: list to count
 *Return: number of elemnts
 */
size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
