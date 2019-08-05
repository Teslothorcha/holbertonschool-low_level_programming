#include "lists.h"
/**
 *get_nodeint_at_index - searches for n node of a list
 *@head: - pointer to the head of the list
 *@index: node to be search for
 *Return: pointer to n node in index list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n_nth = 0;
	listint_t *temp;

	if (!head)
		return (NULL);
	temp = head;
	while (temp->next && n_nth < index)
	{
		temp = temp->next;
		n_nth++;
	}
	return (temp);
}
