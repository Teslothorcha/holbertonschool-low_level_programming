#include "lists.h"
/**
 *delete_nodeint_at_index - deletes node at n given position
 *@head: - pointer to the head of the list
 *@index: index position of new pointer
*Return: pointer to the new  node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *erase;
	unsigned int counter = 0;

	if (head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		if (!temp)
			return (-1);
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (temp && counter < index - 1)
	{
		temp = temp->next;
		counter++;
		if (!temp)
			return (-1);
	}
	erase = temp->next;
	temp->next = erase->next;
	free(erase);
	return (1);
}
