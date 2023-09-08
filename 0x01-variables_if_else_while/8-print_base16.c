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
	char max;

	for (max = '0'; max <= '9'; max++)
	{
		putchar(max);
	}
	for (max = 'a'; max <= 'f'; max++)
	{
		putchar(max);
	}
	putchar('\n');
	return (0);
}
