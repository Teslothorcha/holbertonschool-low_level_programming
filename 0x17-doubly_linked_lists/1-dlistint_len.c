#include "lists.h"
/**
 * dlistint_len - count doubly linked list nodes.
 *@h: head of the double linked list
 * Return: Always amount of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
