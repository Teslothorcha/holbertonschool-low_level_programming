#include "lists.h"
/**
 * print_dlistint - print doubly linked list.
 *@h: head of the double linked list
 * Return: Always amount of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (NULL);
	while (h)
	{
		printf("%u\n", (unsigned int) h->n);
		h = h->next;
		count++;
	}
	return (count);
}
