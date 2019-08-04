#include "lists.h"
/**
 * add_node_end - add  nodes at the end of the list
 *@head: first structure in the list
 *@str: string to add to new structure
 *Return: new structure with str on it
 */
void free_list(list_t *head)
{
	list_t *through = NULL;

	while (head)
	{
		through = head;
		head = head->next;
		free(through->str);
		free(through);
	}
}
