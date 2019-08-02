#include "lists.h"
/**
 * add_node - list the nodes of a list strcutre
 *@head: first structure in the list
 *@str: string to add to new structure
 *Return: new structure with str on it
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t n;
	list_t *add;

	n = 0;
	add = malloc(sizeof(list_t));
	if (!add)
		return (NULL);
	add->str = strdup(str);
	while (str[n] != '\0')
	{
		n++;
	}
	add->len = n;
	add->next = *head;
	*head = add;
	return (*head);
}
