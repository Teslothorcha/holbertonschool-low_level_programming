#include "lists.h"

/**
 * insert_dnodeint_at_index - Function that adds a node at a given position
 * @h: Head of the linked list
 * @idx: Index of the list where the new node should be added
 * @n: Number of the variable of the linked list
 * Return: The address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *aux;
	unsigned int count;

	if (h == NULL)
		return (NULL);
	if (*h == NULL)
		return (add_dnodeint(h, n));
	aux = *h;
	for (count = 0; aux->next; count++)
		aux = aux->next;
	if (idx == 0)
		return (add_dnodeint(h, n));
	else if (idx == count + 1)
		return (add_dnodeint_end(h, n));
	else if (idx > count)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	while (count != idx - 1)
	{
		aux = aux->prev;
		count--;
	}
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	new->next = aux->next;
	aux->next->prev = new;
	aux->next = new;
	new->prev = aux;

	return (new);
}
