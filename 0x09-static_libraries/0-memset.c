#include "main.h"
#include <stdio.h>
/**
 * _memset - Fills memory with a constant byte.
 * @s: A pointer to the memory area to be filled.
 * @b: The value (byte) to fill the memory with.
 * @n: The number of bytes to fill.
 *
 * Return: A pointer to the memory area 's'.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int mem = 0;

	for (mem = 0; n > 0; mem++)
	{
		s[mem] = b;
		n--;
	}
	return (s);
}
