#include "lists.h"

/**
 *listint_len - prints the number of elements in linked
 *@h: pointer of the linked list of type listint_t
 *Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
