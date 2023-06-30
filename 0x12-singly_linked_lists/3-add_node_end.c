#include "lists.h"

/**
 *add_node_end - adds a node at the end of the list
 *@head: double pointer to the list
 *@str: sring to add at the end
 *
 *Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *newnode, *temp = *head;

	while (str[len] != '\0')
		len++;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	return (newnode);
}
