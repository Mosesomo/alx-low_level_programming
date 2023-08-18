#include "lists.h"

/**
 *delete_dnodeint_at_index - deletes the node at a gioven position
 *@head: pointer to the first node
 *@index: position to delete
 *Return: 1 on success, -1 upon failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *temp2;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	temp2 = *head;
	while (temp2 != NULL)
	{
		if (count == index)
		{
			if (temp2->next != NULL)
				temp2->next->prev = temp2->prev;
			if (temp2->prev != NULL)
				temp2->prev->next = temp2->next;
			free(temp2);
			return (1);
		}
		temp2 = temp2->next;
		count++;
	}
	return (-1);
}
