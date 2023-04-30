#include "lists.h"
#include <stdlib.h>

/**
 *pop_listint - deletes the head node of the list
 *@head: pointer to the first element in the list
 *
 *Return: data inside the element that was deleted
 */

int pop_listint(listint_t **head)
{
	listint_t *del;
	int data;

	if (head == NULL || *head == NULL)
		return (0);
	data = (*head)->n;
	del = (*head)->next;
	free(*head);
	*head = del;
	return (data);
}
