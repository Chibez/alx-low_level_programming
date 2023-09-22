#include "main.h"

/**
 * cap_string - Capitalizes all words in a string.
 *
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	int capital = 1;
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (capital || i == 0)
			{
				str[i] = str[i] & ~32;
			}
			capital = 0;
		}
		else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i]
== ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?'
|| str[i] == '\"' || str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
		{
			capital = 1;
		}
		else
		{
			capital = 0;
		}
		i++;
	}

	return (str);
}
