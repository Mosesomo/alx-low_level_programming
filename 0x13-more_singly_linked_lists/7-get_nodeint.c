#include "lists.h"

/**
 *get_nodeint_at_index - returns the node at a certain index
 *@head: pointer to the first node
 *@index: index of the node to return
 *Return: pointer to the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (temp != NULL && count < index)
	{
		temp = temp->next;
		count++;
	}
	if (temp)
		return (temp);
	return (NULL);
}
