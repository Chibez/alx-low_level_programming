#include "main.h"
#include <stdio.h>
/**
 * _strchr - Locates the first occurrence of a character in a string.
 * @s: A pointer to the string to be searched.
 * @c: The character to search for.
 *
 * Return: A pointer to the first occurrence of the character 'c' in 's',
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int index = 0;

	while (s[index] != '\0')
	{
		if (s[index] == c)
			return (s + index);
		index++;
	}
	return (NULL);
}
