#include "lists.h"

/**
 * sum_dlistint - calculates the sum of all the values in a dlistint_t list.
 * @head: pointer to the list.
 * Return: sum of all values.
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int tot = 0;

	while (node)
	{
		tot += node->n;
		node = node->next;
	}
	return (tot);
}
