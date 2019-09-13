#include "lists.h"
/**
 * get_dnodeint_at_index - get n node.
 *@head: head of the double linked list
 *@index: index of node to be extracted
 *Return: node adress
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux;
	unsigned int count = 0;

	while (head && count < index)
	{
		head = head->next;
		count++;
	}
	aux = head;
	return (aux);
}
