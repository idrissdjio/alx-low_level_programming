#include <stddef.h>
#include "lists.h"

/**
 * get_nodeint_at_index - retrieves the node at a given index
 * @head: head of the linked list
 * @index: index of node to retrieve
 * Return: pointer to retrieved node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);
	for (; index > 0 && head->next; head = head->next, index--)
		;
	if (index == 0)
		return (head);
	return (NULL);
}
