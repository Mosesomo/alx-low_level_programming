#include "lists.h"
#include <stdlib.h>

/**
 *delete_nodeint_at_index - deletes a node at a given
 *position
 *@head: pointer to the first node
 *@index: index of the node to delete
 *Return: 1 upon success or -1 on fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *curr = NULL;
	unsigned int n = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (n < index - 1)
	{
		if (temp == NULL || temp->next == NULL)
			return (-1);
		temp = temp->next;
		n++;
	}
	curr = temp->next;
	temp->next = curr->next;
	free(curr);
	return (n);
}
