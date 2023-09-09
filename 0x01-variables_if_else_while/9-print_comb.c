#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Return: Always returns 0 on successful execution.
 */
int main(void)
{
	int moro = 0;

	while (moro < 10)
	{
		putchar(48 + moro);
		if (moro != 9)
		{
			putchar(',');
			putchar(' ');
		}
		moro++;
	}
	putchar('\n');

	return (0);

}
