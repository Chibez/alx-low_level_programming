#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *more;
	int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
		len++;
	more = malloc(sizeof(char) * (len + 1));
	if (more == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
		more[i] = str[i];
	more[len] = '\0';
	return (more);
}

