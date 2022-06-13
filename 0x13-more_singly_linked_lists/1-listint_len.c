#include <stddef.h>
#include "lists.h"

/**
 * listint_len - compute the length of the list
 * @h: the head of the list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t len;

	for (len = 0; h; h = h->next, len++)
		;
	return (len);
}
