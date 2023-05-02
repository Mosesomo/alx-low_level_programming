#include <stdio.h>
#include "lists.h"
#include <stddef.h>

size_t looped_len(const listint_t *head);
size_t  print_listint_safe(const listint_t *head);

/**
 *looped_len - counts the number of uniique nodes
 *@head: pointer to the first node
 *Return: if the list is not looped return 0
 *otherwise return number of nodes
 */

size_t looped_len(const listint_t *head)
{
	const listint_t *tort, *any;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	tort = head->next;
	any = (head->next)->next;

	while (any)
	{
		if (tort == any)
		{
			tort = head;
			while (tort != any)
			{
				nodes++;
				tort = tort->next;
			}
			return (nodes);
		}
		tort = tort->next;
		any = (any->next)->next;
	}
	return (0);
}

/**
 *print_listint_safe - prints the list safely
 *@head: pointer to the head of the list
 *Return: number of nodes
 */

size_t  print_listint_safe(const listint_t *head)
{
	size_t nodes, idx = 0;

	nodes = looped_len(head);
	if (nodes == 0)
	{
		for (; head != NULL ; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (idx = 0 ; idx < nodes ; idx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("->[%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
