#include <stdio.h>

/**
 * main - entry point of a program
 *
 * Return: 0 on successful execution
 */

int main(void)
{
	int  lowerAlpha = 'a';
	int  upperAlpha = 'A';

	while (lowerAlpha <= 'z')
	{
		putchar(lowerAlpha);
		lowerAlpha++;
	}

	while (upperAlpha <= 'Z')
	{
		putchar(upperAlpha);
		upperAlpha++;
	}

	putchar('\n');
	return (0);
}
