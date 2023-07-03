#include "lists.h"

/**
 *add_nodeint_end - adds the node at the end of the list
 *@head: pointer to the listint_t
 *@n: int to add to the node
 *Return: the new address of the node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;

	return (new);
}
