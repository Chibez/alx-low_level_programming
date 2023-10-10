#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Prints the contents of a struct dog.
 * @d: A pointer to the dog structure to print.
 *
 * Description: This function prints the information about a dog
 * including its name, age, and owner.
 * If any element of the dog structure
 * is NULL (name or owner), it prints "(nil)" for that element.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		if (d->name != NULL)
		{
			printf("%s\n", d->name);
		} else
		{
			printf("(nil)\n");
		}
		printf("Age: %.6f\n", d->age);
		printf("Owner: ");
		if (d->owner != NULL)
		{
			printf("%s\n", d->owner);
		}
		else
		{
			printf("(nil)\n");
		}
	}
}
