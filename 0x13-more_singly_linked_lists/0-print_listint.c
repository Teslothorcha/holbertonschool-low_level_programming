#include "lists.h"
/**
 *print_listint - Print all the contents of list
 *@h: - pointer to the head of the list
 *Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
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
			printf("%i\n", h->n);
			h = h->next;
			counter++;
		}
	}
	return (counter);
}
