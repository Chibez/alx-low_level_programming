#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to allocate.
 *
 * This function allocates memory of size 'b' using malloc. If malloc fails to
 * allocate memory, it exits the program with a status value of 98.
 *
 * Return: A pointer to the allocated memory if successful; otherwise, it exits
 * with status 98.
 */
void *malloc_checked(unsigned int b)
{
	void *cal = malloc(b);

	if (cal == NULL)
	{
		exit(98);
	}
	return (cal);
}
