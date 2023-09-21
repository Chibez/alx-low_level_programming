#include "main.h"
#include <stdio.h>
#include <unistd.h>

char *_strcat(char *dest, char *src)
{

	int ind = 0;
	int dest_length = 0;

	while (dest[ind++])
		dest_length++;

	for (ind = 0; src[ind]; ind++)
		dest[dest_length++] = src[ind];

	return (dest);

}
