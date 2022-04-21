#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the begining
 * @head: the head of the linked list
 * @str: string to be added
 * Return: the address of the new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	for (; str && str[i]; i++)
		;
	new_node->str = (str) ? strdup(str) : NULL;
	new_node->len = i;
	new_node->next = (*head) ? *head : NULL;
	*head = new_node;
	return (new_node);
}
