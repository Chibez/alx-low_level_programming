#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * puts2 - Prints every second character of a string followed by a newline.
 *
 * @str: A pointer to the string to be printed.
 */
void puts2(char *str)
{
	int index = 0;
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	for (index = 0; index < length; index += 2)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
