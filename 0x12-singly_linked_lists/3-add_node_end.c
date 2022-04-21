#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add a node at the end of the list
 * @head: the head of the list
 * @str: the string in the new node
 * Return: a pointer to the new node or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *end;
	unsigned int i = 0;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	for (; str && str[i]; i++)
		;
	if (*head)
	{
		end = *head;
		while (end->next)
			end = end->next;
		end->next = new_node;
	}
	else
		*head = new_node;
	new_node->str = (str) ? strdup(str) : NULL;
	new_node->len = i;
	new_node->next = NULL;
	return (new_node);
}
