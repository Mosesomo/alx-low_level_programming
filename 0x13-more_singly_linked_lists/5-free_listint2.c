#include "lists.h"
#include <stdlib.h>

/**
 *free_listint2 -  frees a list
 *@head: pointer to the list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *end;

	if (head == NULL)
		return;
	while (*head)
	{
		end = (*head)->next;
		free(*head);
		*head = end;
	}
	*head = NULL;
}
