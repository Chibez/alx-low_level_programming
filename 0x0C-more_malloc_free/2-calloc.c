#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - Allocate memory for an array and initialize to zero.
 * @nmemb: Number of elements in the array.
 * @size: Size in bytes of each element.
 *
 * This function allocates memory for an
 * array of @nmemb elements, each of @size
 * bytes. It initializes the allocated memory
 * to zero and returns a pointer to
 * the allocated memory. If @nmemb or @size is zero,
 * or if memory allocation
 * fails, the function returns NULL.
 *
 * Return: A pointer to the allocated and
 * initialized memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, nmemb * size);
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
