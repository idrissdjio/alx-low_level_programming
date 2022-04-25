#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given index
 * @head: head of the linked list
 * @index: index of the prev to be deleted
 * Return: Success(1), Error(-1)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = *head;
	listint_t *delete = NULL;
	unsigned int i;

	if (!(*head))
		return (-1);

	for (i = 1; i < index; i++)
	{
		if (prev->next)
			prev = prev->next;
		else
			return (-1);
	}

	if (index == 0)
	{
		delete = prev;
		*head = (*head)->next;
	}
	else
	{
		delete = prev->next;
		prev->next = delete->next;
	}
	free(delete);
	return (1);
}
