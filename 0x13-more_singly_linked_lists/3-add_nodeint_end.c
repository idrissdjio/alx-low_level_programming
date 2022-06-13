#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - appends a node to a linked list
 * @head: pointer to the head of a linked list
 * @n: integer that the new node should hold
 * Return: pointer to new node or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *end;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	if (*head)
	{
		end = *head;
		while (end->next)
			end = end->next;
		end->next = new;
	}
	else
		*head = new;
	new->n = n;
	new->next = NULL;
	return (new);
}
