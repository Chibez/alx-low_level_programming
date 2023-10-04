#include <stdlib.h>

/**
 * free_grid - Allocates a 2D array of integers.
 * @grid: The grid of the 2D array.
 * @height: The height of the 2D array.
 *
 * Return: A pointer to the allocated 2D array, or NULL on failure.
 */

void free_grid(int **grid, int height)
{
	int mak;

	for (mak = 0; mak < height; mak++)
	{
		free(grid[mak]);
	}

	free(grid);
}
