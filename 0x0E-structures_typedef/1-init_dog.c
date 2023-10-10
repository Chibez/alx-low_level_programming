#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Initializes a dog structure.
 * @d: A pointer to the dog structure to initialize.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: This function initializes
 * the members of a dog structure
 * with the provided values for name, age, and owner.
 * If the pointer to the
 * dog structure is NULL, no initialization is performed.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
