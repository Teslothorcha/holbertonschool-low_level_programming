#include "lists.h"
/**
 *free_listint - free list
 *@head: - pointer to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp = NULL;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
