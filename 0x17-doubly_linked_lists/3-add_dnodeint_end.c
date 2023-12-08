#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the first element of the list.
 * @n: int to set in the new node.
 * Return: address of the new element, or NULL if it failed
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *present, *current = *head;

	present = malloc(sizeof(dlistint_t));
	if (present == NULL)
		return (NULL);

	present->n = n;
	present->next = NULL;

	if (current)
	{
		while (current->next)
			current = current->next;
		present->prev = current;
		current->next = present;
	}
	else
	{
		*head = present;
		present->prev = NULL;
	}

	return (present);
}
