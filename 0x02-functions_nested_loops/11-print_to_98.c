#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints natural numbers from n to 98.
 *
 * @n: The starting number.
 */

void print_to_98(int n)

{
	int m;

	if (n >= 0 && n <= 98)
	{
		for (m = n; m <= 98; m++)
		{
			printf("%d", m);
			if (m != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (m = n; m <= 98; m++)
		{
			printf("%d", m);
			if (m != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (m = n; m >= 98; m--)
		{
			printf("%d", m);
			if (m != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d\n", n);
}
