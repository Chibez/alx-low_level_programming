#include "main.h"
/**
 * _pow_recursion - Calculates the power of an integer.
 * @x: The base integer.
 * @y: The exponent (non-negative integer).
 *
 * Return: The result of x raised to the power of y.
 *         If y is negative, return -1.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
