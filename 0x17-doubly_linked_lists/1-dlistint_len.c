#include "lists.h"

/**
 *dlistint_len - printd the length of a list
 *@h: head of the list
 *
 *Return: the length
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
