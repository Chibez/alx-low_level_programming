#include <stdlib.h>
#include <string.h>

char *_strdup(char *str)
{
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	dup = (char *)malloc(strlen(str) + 1);
	if (dup == NULL)
	{
		return (NULL);
	}
	strcpy(dup, str);

    return (dup);
}
