#include "lists.h"

/**
 *add_nodeint - adds node at the begining of list
 *@head: pointer to the listint
 *@n: node to add
 *Return: new node added
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = (*head);
	(*head) = newnode;

	return (newnode);
}
