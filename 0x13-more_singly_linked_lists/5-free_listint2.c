#include "lists.h"

/**
 *free_listint2 - frees a linked list
 *@head: pointer to the listin_t
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	*head = NULL;
	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}