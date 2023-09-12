#include "main.h"
#include <stdio.h>
/**
 * _abs - Calculate the absolute value of an integer.
 *
 * @a: The integer for which the absolute value is calculated.
 *
 * Return: The absolute value of the integer 'a'.
 */

int _abs(int a)
{

	if (a < 0)
	{
		return (-a);
	}
	else
	{
		return (a);
	}
}
