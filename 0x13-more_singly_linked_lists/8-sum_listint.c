#include "lists.h"

/**
 *sum_listint - calculates the sum of the data in the list
 *@head: pointer to the first node
 *
 *Return: sum
 */

int sum_listint(listint_t *head)
{
	listint_t *new = head;
	int sum = 0;

	if (new == NULL)
		return (0);
	while (new)
	{
		sum = sum + new->n;
		new = new->next;
	}
	return (sum);
}
