#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The integer to be stored in the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current_node, *current;

	current_node = malloc(sizeof(listint_t));

	if (current_node == NULL)
		return (NULL);

	current_node->n = n;
	current_node->next = NULL;

	if (*head == NULL)
	{
		*head = current_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = current_node;
	}
	return (current_node);
}
