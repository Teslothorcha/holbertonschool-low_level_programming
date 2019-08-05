#include "lists.h"
/**
 *add_nodeint_end - add node at the end of list
 *@head: - pointer to the head of the list
 *@n: component of node
 *Return: pointer to the new  node
 */
int sum_listint(listint_t *head)
{
	int sum;


	if (head == NULL)
		return(0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
