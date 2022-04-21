#include <stdio.h>
#include "lists.h"

/**
 * print_list - function to print all elements in the list
 * @h: the head of the linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t length = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		length++;
		h = h->next;
	}
	return (length);
}
