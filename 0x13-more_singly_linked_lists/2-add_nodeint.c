#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add a node at the begining of the lists
 * @head: the head o the list
 * @n: the data in the new node
 * Return: a pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
