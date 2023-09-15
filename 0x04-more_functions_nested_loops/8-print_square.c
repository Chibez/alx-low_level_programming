#include "main.h"
/**
 * print_square - Prints a square pattern of '#' characters.
 * @size: The size of the square (number of rows and columns).
 *
 * Description:
 * This function prints a square pattern of '#' characters on the terminal.
 * The size of the square is determined by the 'size' parameter.
 */
void print_square(int size)
{
	int max, widx;

	if (size > 0)
	{
		for (max = 0; max < size; max++)
		{
			for (widx = 0; widx < size; widx++)
				_putchar('#');

			if (max == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
