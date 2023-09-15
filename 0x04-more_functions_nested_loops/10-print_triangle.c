#include "main.h"
/**
 * print_triangle - Prints a right-angled triangle
 * pattern of '#' characters.
 * @size: The size of the triangle (number of rows).
 *
 * Description:
 * This function prints a right-angled
 * triangle pattern of '#' characters on the
 * terminal. The size of the triangle
 * is determined by the 'size' parameter.
 */
void print_triangle(int size)
{
	int mime;
	int indo;

	if (size > 0)
	{
		for (mime = 1; mime <= size; mime++)
		{
			for (indo = size - mime; indo > 0; indo--)
				_putchar(' ');

			for (indo = 0; indo < mime; indo++)
				_putchar('#');

			if (mime == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
