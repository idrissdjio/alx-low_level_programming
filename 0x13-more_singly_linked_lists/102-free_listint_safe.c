#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint_safe - frees a listint list, even if it has a loop
 * @head: the head of the list
 * Return: the number of nodes free
 */
size_t free_listint_safe(listint_t **h)
{
	size_t c = 0;
	listint_t *head, *temp;
	long diff;

	if (!h)
		return (0);
	head = *h;
	*h = NULL;
	while (head)
	{
		c++;
		diff = head->next - head;
		temp = head;
		free(temp);
		if (diff >= 0)
			break;
		head = head->next;
	}
	return (c);
}
