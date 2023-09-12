#include "main.h"
/**
 *print_alphabet - Call the updated function declared
 *Return: On success
 */
void print_alphabet(void)
{
	char fun = 'a';

	while (fun <= 'z')
	{
		_putchar(fun);
		fun++;
	}
	_putchar ('\n');
}
