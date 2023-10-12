#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - Print numbers followed by a new line.
 * @separator: The string to be printed between numbers (or NULL).
 * @n: The number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int mak;

	va_start(args, n);

	for (mak = 0; mak < n; mak++)
	{
		printf("%d", va_arg(args, int));

		if (mak < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}

