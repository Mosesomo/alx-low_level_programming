#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *free_listint_safe - frees list
 *@h: pointer to the first node
 *
 *Return: number of elements in the list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	int n;
	listint_t *temp;

	if (h == NULL || *h == NULL)
		return (0);
	while (*h)
	{
		n = *h - (*h)->next;
		if (n > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			size++;
			break;
		}
	}
	*h = NULL;
	return (size);
}
