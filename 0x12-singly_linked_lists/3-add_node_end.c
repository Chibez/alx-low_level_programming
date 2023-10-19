#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @str: The string to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *best_node;
	list_t *current;

	if (str == NULL)
		return (NULL);

	best_node = malloc(sizeof(list_t));
	if (best_node == NULL)
		return (NULL);

	best_node->str = strdup(str);
	if (best_node->str == NULL)
	{
		free(best_node);
		return (NULL);
	}
	best_node->len = 0;
	while (str[best_node->len] != '\0')
		best_node->len++;
	best_node->next = NULL;

	if (*head == NULL)
		*head = best_node;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = best_node;
	}
	return (best_node);
}
