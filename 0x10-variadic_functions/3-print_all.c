#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - Print anything based on a format string.
 * @format: The format string containing type codes.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int mak = 0;
	char *separator = "";
	char *str;

	va_start(args, format);

	while (format && format[mak])
	{
		switch (format[mak])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, (float)va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				mak++;
				continue;
		}
		separator = ", ";
		mak++;
	}
	printf("\n");
	va_end(args);
}
