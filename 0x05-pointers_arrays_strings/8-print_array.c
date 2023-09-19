#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints an array of integers,
 * separated by commas and spaces.
 *
 * @a: A pointer to the integer array.
 * @n: The number of elements to print.
 */
void print_array(int *a, int n)
{
	int ind;

	for (ind = 0; ind < n; ind++)
	{
		printf("%d", a[ind]);
		if (ind == n - 1)
			continue;
		printf(", ");
	}
	printf("\n");
}
