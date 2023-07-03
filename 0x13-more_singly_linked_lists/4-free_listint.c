#include "lists.h"

/**
 *free_listint - frees a linkrd list
 *
 *@head: pointer to the list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
