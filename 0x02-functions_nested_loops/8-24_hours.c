#include "main.h"

/**
 * jack_bauer - Print every minute of the day of Jack Bauer.
 *
 * Description:
 * This function prints every minute of the day
 * It iterates through all hours (00 to 23)
 * and minutes (00 to 59) and uses _putchar
 * to print the time in the specified format.
 *
 * Return: void (no return value)
 */

void jack_bauer(void)
{

	int hour, min;

	for (hour = 0; hour < 24; hour++)
	{

		for (min = 0; min < 60; min++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');

		}
	}
}
