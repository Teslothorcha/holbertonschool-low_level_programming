#include "lists.h"
/**
 * free_dlistint - free a  doubly linked list.
 *@head: head of the double linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
