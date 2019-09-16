#include "lists.h"

/**
 * insert_dnodeint_at_index - Function that adds a node at a given position
 * @h: Head of the linked list
 * @idx: Index of new node
 * @n: Number to be added on linked list node
 * Return: The address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *aux = NULL;
	unsigned int len;

	aux = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));
	for (len = 0; len < idx - 1; len++)
	{
		aux = aux->next;
		if (aux == NULL)
			return (NULL);
	}
	if (aux->next == NULL)
		return (add_dnodeint_end(h, n));
	if (idx >= len + 2)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	new->next = aux->next;
	aux->next->prev = new;
	aux->next = new;
	new->prev = aux;

	return (new);
}
