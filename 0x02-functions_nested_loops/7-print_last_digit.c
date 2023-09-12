#include "main.h"
/**
 * print_last_digit - Print the last digit of an integer.
 *
 * @n: The integer for which the last digit is printed.
 *
 * Return: The last digit of the integer 'n'.
 */
int print_last_digit(int n)
{

	int lastD;

	lastD = n % 10;

	if (lastD < 0)
	{
		lastD = -lastD;
	}
	_putchar(lastD + '0');

	return (lastD);
}
