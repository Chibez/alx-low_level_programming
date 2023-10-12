#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - Print strings followed by a new line.
 * @separator: The string to be printed between strings (or NULL).
 * @n: The number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int mak;
	char *str;

	va_start(args, n);

	for (mak = 0; mak < n; mak++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
		{
			printf("(nil)");
		} else
		{
			printf("%s", str);
		}
		if (mak < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
