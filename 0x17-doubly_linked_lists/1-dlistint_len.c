#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t list.
 * @h: pointer to the list.
 * Return: number of nodes.
 **/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current_node = h;
	size_t node_count = 0;

	while (current_node)
	{
		node_count++;
		current_node = current_node->next;
	}

	return (node_count);
}
