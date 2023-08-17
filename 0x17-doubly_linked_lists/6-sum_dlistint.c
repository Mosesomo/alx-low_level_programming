#include "lists.h"

/**
 *sum_dlistint - sums all the element in the list
 *@head: pointer to the first node
 *Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
