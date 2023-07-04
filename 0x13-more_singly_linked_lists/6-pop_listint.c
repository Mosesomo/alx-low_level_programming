#include "lists.h"

/**
 *pop_listint - deletes a node
 *@head: pointer to the node
 *Return: deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	temp = *head;
	if (head == NULL || *head == NULL)
		return (0);
	num = temp->n;
	*head = (*head)->next;
	free(temp);

	return (num);
}
