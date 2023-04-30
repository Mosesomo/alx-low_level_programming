#include "lists.h"

/**
 *get_nodeint_at_index - returns the node at a certain index
 *@head: pointer to the first node
 *@index: index of the node to return
 *Return: pointer to the node being looked for
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr = head;
	unsigned int count;

	count = 0;
	while (curr && count < index)
	{
		curr = curr->next;
		count++;
	}
	if (curr == NULL)
		return (NULL);
	return (curr);
}

