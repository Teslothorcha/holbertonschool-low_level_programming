#include "lists.h"
/**
 *sum_listint - add node at the end of list
 *@head: - pointer to the head of the list
 *Return: pointer to the new  node
 */
int sum_listint(listint_t *head)
{
	int sum;

	while (head)
	{
		if (head == NULL)
			return (0);
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
