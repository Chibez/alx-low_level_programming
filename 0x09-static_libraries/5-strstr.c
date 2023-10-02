#include "main.h"
#include <stdio.h>
/**
 * _strstr - Locates the first occurrence of a substring in a string.
 * @haystack: A pointer to the string to be searched.
 * @needle: A pointer to the substring to search for.
 *
 * Return: A pointer to the first occurrence of 'needle' in 'haystack',
 *         or NULL if 'needle' is not found in 'haystack'.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == '\0')
		return (haystack);
	for (; *haystack; haystack++)
	{
		i = 0;
		if (haystack[i] == needle[i])

		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
	}
	return (NULL);
}
