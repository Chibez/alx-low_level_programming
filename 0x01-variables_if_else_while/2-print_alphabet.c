#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry Point
 *Return: always zero (0)
*/

int main(void)
{
	int lowerAlpha = 'a';

	while (lowerAlpha <= 'a')
	{
		putchar(lowerAlpha);
		putchar('\n');
		lowerAlpha++;
	}
	return (0);
}
