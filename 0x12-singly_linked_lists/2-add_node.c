#include "lists.h"

/**
 *add_node -adds a new node at the beginning
 *@head: double pointer to the list
 *@str: new string to add in the node
 *Return: addres of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *newnode;

	while (str[len] != '\0')
		len++;
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = (*head);
	(*head) = newnode;

	return (*head);
}
