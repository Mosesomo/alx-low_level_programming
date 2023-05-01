#include "lists.h"
#include <stddef.h>

/**
 *reverse_listint - reverses the list
 *@head: pointer to the first node
 *Return: pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *curr = *head, *temp;

	while (curr != NULL)
	{
		temp = curr->next;
		curr->next = prev;
		prev = curr;
		curr = temp;
	}
	*head = prev;
	return (*head);
}
