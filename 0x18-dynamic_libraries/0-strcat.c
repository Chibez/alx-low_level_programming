#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _strcat - Concatenates two strings.
 *
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string to append.
 *
 * Return: Pointer to the destination string after concatenation.
 */
char *_strcat(char *dest, char *src)
{

	int ind = 0;
	int dest_length = 0;

	while (dest[ind++])
		dest_length++;

	for (ind = 0; src[ind]; ind++)
		dest[dest_length++] = src[ind];

	return (dest);

}
