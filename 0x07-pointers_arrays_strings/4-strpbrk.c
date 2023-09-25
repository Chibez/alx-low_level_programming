#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: A pointer to the string to be searched.
 * @accept: A pointer to the string containing the characters to search for.
 *
 * Return: A pointer to the first occurrence of any character from 'accept'
 *         in 's', or NULL if no such character is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int inj;

	for (; *s; s++)
	{
		for (inj = 0; accept[inj]; inj++)
		{
			if (*s == accept[inj])
				return (s);
		}
	}
	return (NULL);
}
