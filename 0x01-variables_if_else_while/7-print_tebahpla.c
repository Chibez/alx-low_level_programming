#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * This function serves as the starting point of the program.
 *
 * Return: Always returns 0 on successful execution.
 */
int main(void)
{
	int lowerAlpha = 'z';

	while (lowerAlpha >= 'a')
	{
		putchar(lowerAlpha);
		lowerAlpha--;
	}
	putchar('\n');

	return (0);
}
