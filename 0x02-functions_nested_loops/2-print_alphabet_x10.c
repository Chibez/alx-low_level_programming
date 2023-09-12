#include "main.h"
/**
 *print_alphabet_x10 - Prints the lowercase alphabet 10 times with new lines
 *Description:This function prints the lowercase alphabet
 *from 'a' to 'z' ten times
 *Return: This function does not return a value (void).
 */

void print_alphabet_x10(void)
{
	int num;
	char fun;

	for (num = 0; num <= 9; num++)
	{
		for (fun = 'a'; fun <= 'z'; fun++)
		{
			_putchar(fun);
		}
		_putchar('\n');
	}
}
