#include "main.h"
#include <stdio.h>
/**
 * leet - Encodes a string into 1337 (leet) language.
 *
 * @str: The string to encode.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	int in1 = 0;
	int el;

	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[in1])
	{
		for (el = 0; el <= 7; el++)
		{
			if (str[in1] == leet[el] ||
			    str[in1] - 32 == leet[el])
				str[in1] = el + '0';
		}

		in1++;
	}

	return (str);
}
