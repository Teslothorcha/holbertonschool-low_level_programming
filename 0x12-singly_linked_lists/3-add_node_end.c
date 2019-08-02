#include "lists.h"
/**
 * add_node_end - add  nodes at the end of the list
 *@head: first structure in the list
 *@str: string to add to new structure
 *Return: new structure with str on it
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t n;
	list_t *ad_end, *tmp;

	n = 0;
	ad_end = malloc(sizeof(list_t));
	if (!ad_end)
		return (NULL);
	if (*head == NULL)
		*head = ad_end;
	else
	{
		tmp = *head;
			for (; tmp->next; )
			{
				tmp = tmp->next;
			}
			tmp->next = ad_end;
	}
	ad_end->str = strdup(str);
	while (str[n] != '\0')
		n++;
	ad_end->next = NULL;
	ad_end->len = n;
	return (*head);
}
