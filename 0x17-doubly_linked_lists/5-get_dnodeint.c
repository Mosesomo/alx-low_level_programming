#include "lists.h"

/**
 *get_dnodeint_at_index - returns a bode at a given position
 *@head: pointer to the first node
 *@index: position
 *Return: the position of the nodoe
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (count == index)
			break;
		head = head->next;
		count++;
	}
	return (head);
}
