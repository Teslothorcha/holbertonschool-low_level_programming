#include "lists.h"
/**
 *insert_nodeint_at_index - add node at n given position
 *@head: - pointer to the head of the list
 *@idx: index position of new pointer
 *@n: data to be insert on nwe node
 *Return: pointer to the new  node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	if (head == NULL && idx == 0)
	{
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next && counter < idx - 1)
		{
			temp = temp->next;
			counter++;
		}
		new_node->n = n;
		if (temp->next == NULL)
		{
			temp->next = new_node;
		}
		new_node->next = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
