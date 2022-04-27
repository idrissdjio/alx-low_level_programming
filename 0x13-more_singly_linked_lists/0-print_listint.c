#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of the list
 * @h: the heade of the linked list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	for (count = 0; h; h = h->next, count++)
		printf("%d\n", h->n);
	return (count);
}
