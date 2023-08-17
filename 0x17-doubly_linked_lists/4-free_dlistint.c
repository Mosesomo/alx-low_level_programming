#include "lists.h"

/**
 *free_dlistint_t - free the list
 *@head: pointer to the first node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (head)
	{
		head = head->next;
		free(temp);
	}
}
