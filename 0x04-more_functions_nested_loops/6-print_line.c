#include "main.h"
/**
 * print_line - Prints a line of underscores followed by a newline.
 * @n: The number of underscores to print
 */
void print_line(int n)
{
	int lo;

	if (n > 0)
	{
		for (lo = 0; lo < n; lo++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
