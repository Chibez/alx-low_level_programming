#include "main.h"
/**
 * _puts_recursion - Prints a string recursively
 * @s: The string to be printed
 *
 * Description: This function prints each character in the input string
 * 's' followed by a newline character until it reaches the end of the
 * string ('\0').
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
