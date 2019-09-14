#include "lists.h"
/**
 * sum_dlistint - insert node at  n index.
 *@n: number to insert on new node
 */
void print_list_backwards(dlistint_t *h)
{
	while(h->next)
	{
		printf("%d\n",h->n);
		h = h->next;
	}
	printf("------------------\n");
	while (h)
	{
		printf("%d\n",h->n);
		h = h->prev;
	}
}
