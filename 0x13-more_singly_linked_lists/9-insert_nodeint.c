#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - insert a node at a given index into a linked list
 * @head: pointer to the head of the linked list
 * @idx: index to insert the node
 * @n: value the inserted node should contain
 * Return: pointer to inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *node = *head;

	if (!head)
		return (NULL);

	for (i = 0; i < idx - 1 && node; i++)
		node = node->next;
	if (i != idx - 1 && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else if (node)
	{
		new->next = node->next;
		node->next = new;
	}

	return (new);
}
