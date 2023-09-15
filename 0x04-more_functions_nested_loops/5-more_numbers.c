#include "main.h"
/**
 * more_numbers - Prints numbers from 0 to 14, ten times.
 */
void more_numbers(void)
{

	int num;
	int fon;

	for (num = 0; num < 10; num++)
	{
		for (fon = 0; fon <= 14; fon++)
		{
			if (fon > 9)
			{
				_putchar(fon / 10 + '0');
			}
			_putchar(fon % 10 + '0');
		}

		_putchar('\n');
	}
}
