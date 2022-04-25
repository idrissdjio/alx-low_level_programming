#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	while (head && *head)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
	}
}
