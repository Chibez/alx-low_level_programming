#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point of the program
 *serves as the starting point of the program
 *Return: 0 on successful execution
*/
int main(void)
{
	int lowerAlpha = 'a';

	while (lowerAlpha <= 'z')
	{
		putchar(lowerAlpha);
		lowerAlpha++;
	}
	putchar('\n');
	return (0);
}
