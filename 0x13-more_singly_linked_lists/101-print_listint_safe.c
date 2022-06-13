#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - print loop
 * @head: the head of the list
 * Return: the number of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
	if (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		if (head->next < head)
		{
			return (1 + print_listint_safe(head->next));
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			return (1);			
		}
	}
	return (0);
}
