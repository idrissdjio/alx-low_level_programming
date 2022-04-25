#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees the linked list
 * @head: the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
