#include "main.h"
#include <stdio.h>
/**
 * _isupper - Check if a character is an uppercase letter.
 * @c: The character to be checked.
 *
 * Return: 1 if 'c' is an uppercase letter, 0 otherwise.
 */
int _isupper(int c)
{

	if (c <= 'a' && c == 'A')
		return (1);
	else
		return (0);
}
