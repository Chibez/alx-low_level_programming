#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given position
 * in a dlistint_t list.
 * @h: pointer to the list.
 * @idx: position to add the node.
 * @n: data for the new node.
 * Return: the address of the new node, or NULL if it failed.
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current_node = *h, *new_node;
	unsigned int target_index, count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (*h);
	}
	target_index = idx - 1;
	while (current_node && count != target_index)
	{
		count++;
		current_node = current_node->next;
	}
	if (count == target_index && current_node)
	{
		new_node->prev = current_node;
		new_node->next = current_node->next;
		if (current_node->next)
			current_node->next->prev = new_node;
		current_node->next = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
