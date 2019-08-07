#include "lists.h"
/**
 *reverse_listint - reverse the list order
 *@head: - pointer to the head of the list
*Return: pointer to the new head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *fwd = NULL, *bwd = NULL;

	if (head == NULL)
		return (NULL);
	while (*head)
	{
		fwd = (*head)->next;
		(*head)->next = bwd;
		bwd = *head;
		*head = fwd;
	}
	*head = bwd;
	return (*head);
}
