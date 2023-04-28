#include <stdlib.h>
#include "lists.h"

/**
 *free_list - frees a linked list
 *@head: list_t to be freed
 */

void free_list(list_t *head)
{
	list_t *end;

	while (head)
	{
		end = head->next;
		free(head->str);
		free(head);
		head = end;
	}
}
