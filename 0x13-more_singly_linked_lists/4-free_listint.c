#include "lists.h"
#include <stdlib.h>

/**
 *free_listint - frees a linked list
 *@head: listint_t to freed
 */

void free_listint(listint_t *head)
{
	listint_t *end;

	while (head)
	{
		end = head->next;
		free(head);
		head = end;
	}
}
