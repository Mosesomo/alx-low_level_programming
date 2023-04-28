#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 *print_list - prints all the element in linked list
 *@h: pointer to th list_t
 *
 *Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
