#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

size_t looped_listint_len2(const listint_t *head);
size_t  free_listint_safe(listint_t **h);

/**
 *looped_listint_len2 - counts the number of uniique nodes
 *@head: pointer to the first node
 *Return: if the list is not looped return 0
 *otherwise return number of nodes
 */

size_t looped_listint_len2(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}
			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
			}
			return (nodes);
		}
		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}
	return (0);
}


/**
 *free_listint_safe - frees list
 *@h: pointer to the first node
 *
 *Return: number of elements in the list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t nodes, idx;
	listint_t *temp;

	nodes = looped_listint_len2(*h);
	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL ; nodes++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}

	}
	else
	{
		for (idx = 0 ; idx < nodes ; idx++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
		*h = NULL;
	}
	h = NULL;
	return (nodes);
}

