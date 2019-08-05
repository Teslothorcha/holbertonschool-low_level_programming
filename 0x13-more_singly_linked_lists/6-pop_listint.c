#include "lists.h"
/**
 *pop_listint - remove first node of list
 *@head: - pointer to the head of the list
 *Return: (n) data of deleted node.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (!*head)
		return (0);

	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);
	return (n);
}
