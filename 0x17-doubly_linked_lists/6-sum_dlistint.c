#include "lists.h"
/**
 * sum_dlistint - add integers from each list node.
 *@head: head of the double linked list
 *Return: node adress
 */
int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	if (head == NULL)
		return (add);
	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
