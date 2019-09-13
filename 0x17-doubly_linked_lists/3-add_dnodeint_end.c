#include "lists.h"
/**
 * add_dnodeint_end - add node to the end of a  doubly linked list.
 *@head: head of the double linked list
 *@n: number to be add on the new node
 * Return: Always amount of nodes.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *aux;

	aux = *head;
	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = *head;
		*head = new;
	}
	else
	{
		while (aux->next)
			aux = aux->next;
		new->n = n;
		new->next = NULL;
		new->prev = aux;
		aux->next = new;
	}
	return (*head);
}
