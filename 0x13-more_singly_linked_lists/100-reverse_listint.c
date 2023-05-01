#include "lists.h"
#include <stddef.h>

/**
 *reverse_listint - reverses the list
 *@head: pointer to the first node
 *Return: pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *curr = NULL;

	while (*head)
	{
		curr = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = curr;
	}
	*head = prev;
	return (*head);
}
