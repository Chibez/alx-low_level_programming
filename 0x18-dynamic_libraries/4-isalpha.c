#include "main.h"

/**
 * _isalpha - Check if a character is an alphabetic character
 * (uppercase or lowercase).
 *
 * @c: The character to be checked.
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
 */
int _isalpha(int c)
{

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
