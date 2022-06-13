#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - removes the head of a linked list
 * @head: pointer to the head of a linked list
 * Return: integer of the removed node
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!(*head))
		return (0);
	n = (*head)->n;
	node = *head;
	*head = (*head)->next;
	free(node);
	return (n);
}
