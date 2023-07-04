#include "lists.h"

/**
 *delete_nodeint_at_index - deletes a node at a given position
 *@head: pointer to the first node
 *@index: position of the node to delete
 *Return: 1 on success or -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nextnode = NULL, *temp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (i < index - 1)
	{
		if (temp == NULL || (temp->next == NULL))
			return (-1);
		temp = temp->next;
		i++;
	}
	nextnode = temp->next;
	temp->next = nextnode->next;
	free(nextnode);

	return (1);
}

