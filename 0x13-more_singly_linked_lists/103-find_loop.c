#include "lists.h"
#include <stddef.h>

/**
 *find_listint_loop - finds the loop in a linked list
 *@head: linked list to search for
 *
 *Return: addres of the node where the loops starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *loop1 = head;
	listint_t *loop2 = head;

	if (head == NULL)
		return (NULL);
	while (loop1 && loop2 && loop2->next)
	{
		loop2 = loop2->next->next;
		loop1 = loop1->next;
		if (loop2 == loop1)
		{
			loop1 = head;
			while (loop1 != loop2)
			{
				loop1 = loop1->next;
				loop2 = loop2->next;
			}
			return (loop2);
		}
	}
	return (NULL);
}
