#include "lists.h"
#include <stdlib.h>

/**
 *insert_nodeint_at_index - insert data in the list at
 *a given position
 *@head: pointer to the first node
 *@idx: index where the node is to be added
 *@n: data to insert in the list
 *Return: pointer to the new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp = *head;
	unsigned int count;

	if (new == NULL || head == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (count = 0 ; temp && count < idx ; count++)
	{
		if (count == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
