#include "lists.h"
/**
 * add_dnodeint - add node to  doubly linked list.
 *@head: head of the double linked list
 *@n: number to be add on the new node
 * Return: Always amount of nodes.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		new->n = n;
		new->next = *head;
		new->prev = NULL;
		*head = new;
	}
	else
	{
		new->n = n;
		new->next = *head;
		new->prev = NULL;
		(*head)->prev = new;
		*head = new;
	}
	return (*head);
}
