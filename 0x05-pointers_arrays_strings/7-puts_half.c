#include <unistd.h>
#include "main.h"

/**
 * puts_half - Prints the second half of a string followed by a newline.
 *
 * @str: A pointer to the string to be printed.
 */
void puts_half(char *str)
{
	int index = 0;
	int length = 0;
	int start;

	while (str[length] != '\0')
	{
		length++;
	}
	start = (length + 1) / 2;
	for (index = start; index < length; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
