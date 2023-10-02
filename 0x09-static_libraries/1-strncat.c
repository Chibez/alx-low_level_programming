#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _strncat - Concatenates up to 'n' characters from one string to another.
 *
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string to append.
 * @n: Maximum number of characters to append.
 *
 * Return: Pointer to the destination string after concatenation.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	int dest_length = 0;

	while (dest[i++])
	{
		dest_length++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[dest_length++] = src[i];
	}
	return (dest);
}
