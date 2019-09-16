#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at  n index.
 *@h: head of the double linked list
 *@idx: index of node to be inserted
 *@n: number to insert on new node
 *Return: node adress
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux, *new;
	unsigned int  len = 0;

	if (h == NULL)
		return (NULL);
	if (*h == NULL)
		return (add_dnodeint(h, n));
	aux = *h;
	for (len = 0; aux->next; len++)
		aux = aux->next;
	if (idx == 0)
		return (add_dnodeint(h, n));
	else if (idx == len + 1)
		return (add_dnodeint_end(h, n));
	else if (idx > len)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	while (len != idx - 1)
	{
		aux = aux->prev;
		len--;
	}
	new->n = n;
	new->next = aux->next;
	aux->next->prev = new;
	aux->next = new;
	new->prev = aux;

	return (new);
}
