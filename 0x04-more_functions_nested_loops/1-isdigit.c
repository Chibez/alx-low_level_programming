#include "main.h"
#include <stdio.h>
/**
 * _isdigit - Checks if a character is a digit (0 through 9).
 *
 * @c: The character to be checked.
 *
 * Return: 1 if @c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	char i;
	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
