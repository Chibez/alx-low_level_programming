#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * reverse_array - Reverses
 * the elements of an integer array.
 *
 * @a: Pointer to the integer array.
 * @n: Number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int m;

	for (m = n - 1; m >= n / 2; m--)
	{
		tmp = a[n - 1 - m];
		a[n - 1 - m] = a[m];
		a[m] = tmp;
	}
}

