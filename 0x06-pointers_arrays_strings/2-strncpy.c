#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _strncpy - Copies up to 'n' characters from one string to another.
 *
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string to copy.
 * @n: Maximum number of characters to copy.
 *
 * Return: Pointer to the destination string after copying.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return dest;
}
