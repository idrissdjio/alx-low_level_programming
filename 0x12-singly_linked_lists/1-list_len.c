#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements
 * @h: the head of the linked list
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h)
	{
		h = h->next;
		length++;
	}
	return (length);
}
