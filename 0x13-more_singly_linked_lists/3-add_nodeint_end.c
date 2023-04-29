#include "lists.h"
#include <stdlib.h>

/**
 *add_nodeint_end - adds node at the end of the list
 *@head: pointer to the first node
 *@n: data to insert
 *Return: pointer to the first node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *end = *head;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (end->next)
		end = end->next;
	end->next = new;
	return (new);
}
