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
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		new_node->n = n;
		return (new_node);
	}
	temp = *head;
	while (temp && counter < idx - 1)
	{
		temp = temp->next;
		counter++;
		if (!temp)
			return(NULL);
	}
	new_node->n = n;
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
