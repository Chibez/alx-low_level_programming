#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: The first string to be concatenated.
 * @s2: The second string to be concatenated.
 *
 * Return: A pointer to a newly allocated memory space
 *         containing the concatenated strings
 *         (including the null terminator).
 *         If allocation fails or s1/s2 is NULL, returns NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i;
	int j = 0;
	int len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		len++;
	concat_str = malloc(sizeof(char) * (len + 1));
	if (concat_str == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		concat_str[j++] = s1[i];
	for (i = 0; s2[i]; i++)
		concat_str[j++] = s2[i];
	concat_str[j] = '\0';
	return (concat_str);
}
