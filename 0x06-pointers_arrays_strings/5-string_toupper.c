#include "main.h"
/**
 * string_toupper - Converts all lowercase
 * letters in a string to uppercase.
 *
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *string_toupper(char *str)
{
	int m = 0;

	while (str[m])
	{
		if (str[m] >= 'a' && str[m] <= 'z')
			str[m] -= 32;
		m++;
	}
	return (str);
}
