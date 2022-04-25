#include "lists.h"

/**
 * sum_listint - sum of all integers in a linked list
 * @head: the head of the list
 * Return: returns sum or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
