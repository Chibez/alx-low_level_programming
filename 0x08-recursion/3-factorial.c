#include "main.h"
/**
 * factorial - Calculate the factorial of
 * a non-negative integer.
 * @n: The integer for which to calculate the factorial.
 *
 * Return: The factorial of n. If n is negative, return -1.
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
