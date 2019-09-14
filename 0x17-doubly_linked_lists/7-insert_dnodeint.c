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
	unsigned int count = 0, len;

	len =  dlistint_len(*h);
	if (idx > len + 1)
		return (NULL);
	if (idx == len)
		add_dnodeint_end(&*h, n);
	if (idx == 0)
		add_dnodeint(&*h, n);
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
