#include "lists.h"

/**
 *sum_listint - sum all the data in the list
 *@head: pointer to the first node
 *
 *Return: sum of the data
 */

int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}

