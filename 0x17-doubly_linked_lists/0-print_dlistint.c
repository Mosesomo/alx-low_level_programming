#include "lists.h"

/**
 *print_dlistint - prints the doubly linked list
 *@h: head of the list
 *Return: number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count += 1;
	}
	return (count);
}
