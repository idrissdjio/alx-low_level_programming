#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - print loop even 
 * with a loop
 * @head: the head of the list
 * Return: the number of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	int loop;
	listint_t *loopnode;

	loopnode = find_listint_loop_pl((listint_t *) head);

	for (len = 0, loop = 1; (head != loopnode || loop) && head != NULL; len++)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		if (head == loopnode)
			loop = 0;
		head = head->next;
	}

	if (loopnode != NULL)
		printf("-> [%p] %d\n", (void *) head, head->n);
	return (len);
}
