#include "lists.h"
/**
 *listint_len - list nodes of a list
 *@h: - pointer to the head of the list
 *Return: the number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int  counter;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		while (h)
		{
			h = h->next;
			counter++;
		}
	}
	return (counter);
}
