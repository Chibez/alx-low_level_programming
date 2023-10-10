#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - Creates a new dog and returns a pointer to it.
 * @name: The name of the new dog.
 * @age: The age of the new dog.
 * @owner: The owner of the new dog.
 *
 * Return: A pointer to the newly created dog structure,
 * or NULL on failure.
 *
 * Description: This function allocates memory for a new dog structure,
 * copies the provided name and owner strings
 * into the allocated memory,
 * sets the age, and returns a pointer to the new dog. If any memory
 * allocation fails, it returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *myDog = malloc(sizeof(dog_t));

	if (myDog == NULL)
	{
		return (NULL);
	}

	myDog->name = strdup(name);
	if (myDog->name == NULL)
	{
		free(myDog);
		return (NULL);
	}
	myDog->owner = strdup(owner)
			if (myDog->owner == NULL)
			{
				free(myDog->name);
				free(myDog);
				return (NULL);
			}
	myDog->age = age;
	return (myDog);
}
