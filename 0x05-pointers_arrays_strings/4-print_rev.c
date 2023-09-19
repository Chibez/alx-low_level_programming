#include "main.h"
#include <unistd.h>

/**
 * print_rev - Prints a string in reverse followed by a newline.
 *
 * @s: A pointer to the string to be printed in reverse.
 */

void print_rev(char *s)
{
	int i;
	int monk = 0;

	for (i = 0; s[i] != '\0'; i++)
		monk++;
	for (i = monk - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
