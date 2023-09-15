#include "main.h"
/**
 * print_diagonal - Draws a diagonal line of '\'
 * characters in the terminal.
 * @n: The number of '\' characters in the diagonal line.
 * Description: This function prints a diagonal
 * line consisting of '\' characters.
 * The length of the line is determined by the value of 'n'.
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
