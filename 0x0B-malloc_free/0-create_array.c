#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - Creates an array of
 * chars and initializes it with a specific char.
 * @size: The size of the array to be initialized.
 * @c: The specific char to initialize the array with.
 *
 * Return: If size == 0 or memory allocation fails, returns NULL.
 *         Otherwise, returns a pointer to the initialized array.
 */
char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int index;

	if (size != 0)
	{
		array = (char *)malloc(size * sizeof(char));
		if (array != NULL)
		{
			for (index = 0; index < size; index++)
			{
				array[index] = c;
			}
		}
	}
	return (array);
}
