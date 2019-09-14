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
	dlistint_t *aux, *new, *node;
	unsigned int count = 0, len;

	if (h == NULL)
		return (NULL);
	if (*h == NULL)
	{
		node = add_dnodeint(&*h, n);
		return (node);
	}
	if (idx == 0)
	{
		node = add_dnodeint(&*h, n);
		return (node);
	}
	aux = *h;
	for (len = 0; aux->next; len++)
		aux = aux->next;
	if (idx > len)
		return (NULL);
	else if (idx == len + 1)
	{
		node = add_dnodeint_end(&*h, n);
		return (node);
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	aux = *h;
	while (*h && count < idx - 1)
	{
		aux = aux->next;
		count++;
	}
	new->n = n;
	aux->next->prev = new;
	new->next = aux->next;
	aux->next = new;
	new->prev = aux;
	return (new);
}
