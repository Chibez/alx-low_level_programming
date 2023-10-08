#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenate two strings up to 'n' characters.
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate (up to 'n' characters).
 * @n: The maximum number of characters from s2 to concatenate.
 *
 * This function concatenates 's1' and the first 'n' characters of 's2' into
 * a newly allocated string. If either 's1' or 's2' is NULL, they are treated
 * as empty strings. The memory for the concatenated string is allocated using
 * malloc, and the caller is responsible for freeing it when no longer needed.
 *
 * Return: A pointer to the newly allocated concatenated string, or NULL if
 * memory allocation fails or 'n' is zero.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int mkn = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		mkn++;
	concat = malloc(sizeof(char) * (mkn + 1));
	if (concat == NULL)
		return (NULL);
	mkn = 0;
	for (i = 0; s1[i]; i++)
		concat[mkn++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		concat[mkn++] = s2[i];
	concat[mkn] = '\0';
	return (concat);
}
