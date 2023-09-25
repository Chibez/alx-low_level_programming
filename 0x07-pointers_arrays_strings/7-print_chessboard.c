#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_chessboard - Prints an 8x8 chessboard.
 * @a: A 2D array representing the chessboard.
 *
 * Return: No return value (void).
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; a[i][7]; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);

		_putchar('\n');
	}
}
