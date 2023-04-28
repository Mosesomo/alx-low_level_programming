#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *add_node - adds a new node at the begining of the list
 *@head: double pointer to the list
 *@str: new string to add in the node
 *Return: the address of the new string
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new  = malloc(sizeof(list_t));
	unsigned int len = 0;

	while (str[len])
		len++;
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;
	return (*head);
}

