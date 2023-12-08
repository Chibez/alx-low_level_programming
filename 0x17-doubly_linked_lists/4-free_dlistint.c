#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the list.
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *n, *next_node;

	if (head)
	{
		n = head;
		next_node = head->next;

		while (next_node)
		{
			free(current);
			n = next_node;
			next_node = next_node->next;
		}
		free(current);
	}
}
