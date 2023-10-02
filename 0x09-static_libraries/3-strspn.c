#include "main.h"
#include <stdio.h>
/**
 * _strspn - Calculates the length of the initial segment of 's'
 *            that consists of characters found in 'accept'.
 * @s: A pointer to the string to be searched.
 * @accept: A pointer to the string containing the characters to be counted.
 *
 * Return: The number of bytes in 's' consisting of characters from 'accept'.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;

	for (; *s; s++)
	{
		int k;

		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				bytes++;
				break;
			}
			else if (accept[k + 1] == '\0')
				return (bytes);
		}
	}
	return (bytes);
}
