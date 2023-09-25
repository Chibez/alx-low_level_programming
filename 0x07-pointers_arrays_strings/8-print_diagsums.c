#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sums of the two diagonals of a square matrix.
 * @a: A pointer to the square matrix (1D array).
 * @size: The size of the square matrix.
 *
 * Return: No return value (void).
 */
void print_diagsums(int *a, int size)
{
	int index = 0, main_diag_sum = 0, anti_diag_sum = 0;
	int *main_diag_ptr = a, *anti_diag_ptr = a + size - 1;

	while (index < size)
	{
		main_diag_sum += *main_diag_ptr;
		anti_diag_sum += *anti_diag_ptr;
		main_diag_ptr += size + 1;
		anti_diag_ptr += size - 1;
		index++;
	}
	printf("%d, %d\n", main_diag_sum, anti_diag_sum);
}
