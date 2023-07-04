#include "lists.h"

/**
 *insert_nodeint_at_index - insert a node at a given position
 *@head: pointer to the first node
 *@idx: position
 *@n: node to be added
 *Return: address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp = *head;
	unsigned int i = 0;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL || *head == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	while (temp && i < idx)
	{
		if (i == idx - 1)
		{
			newnode->next = temp->next;
			temp->next = newnode;
			return (newnode);
		}
		else
			temp = temp->next;
		i++;
	}
	return (NULL);
}
