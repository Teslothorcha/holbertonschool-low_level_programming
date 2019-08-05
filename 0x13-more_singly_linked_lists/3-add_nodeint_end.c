#include "lists.h"
/**
 *add_nodeint_end - add node at the end of list
 *@head: - pointer to the head of the list
 *@n: component of node
 *Return: pointer to the new  node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end, *temp;

	new_end = malloc(sizeof(listint_t));
	if (!new_end)
		return (NULL);
	if (*head == NULL)
		*head = new_end;
	else
	{
		temp = *head;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new_end;
	}
	new_end->n = n;
	new_end->next = NULL;
	return (*head);
}
