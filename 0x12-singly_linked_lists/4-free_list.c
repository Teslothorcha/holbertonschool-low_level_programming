#include "lists.h"
/**
 * free_list - free space allocated for list in memory
 *@head: Head of the lis to be freed
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
