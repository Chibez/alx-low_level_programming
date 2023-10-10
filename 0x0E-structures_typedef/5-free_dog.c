#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <stddef.h>

/**
 * free_dog - Frees the memory allocated for a dog structure.
 * @d: A pointer to the dog structure to be freed.
 *
 * Description: This function takes a pointer to a dog structure and
 * deallocates the memory associated with it, including the memory
 * for the name and owner strings. If the pointer is NULL, it does nothing.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
