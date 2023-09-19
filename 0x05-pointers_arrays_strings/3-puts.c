#include "main.h"
/**
 * _puts - Prints a string followed by a newline character.
 *
 * @str: A pointer to the string to be printed.
 */

void _puts(char *str)
{
	while (*str)

		_putchar(*str++);

	_putchar('\n');
}
