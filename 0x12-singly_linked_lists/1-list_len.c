#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *list_len - returns the number of elements
 *@h: pointer to list_t
 *Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		j++;
		h = h->next;
	}
	return (j);
}
