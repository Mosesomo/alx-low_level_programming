#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *add_node_end - adds a new node at the end
 *@head: pointer to the list
 *@str: string to in the new node
 *Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *end = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (end->next)
		end = end->next;
	end->next = new;
	return (new);
}
