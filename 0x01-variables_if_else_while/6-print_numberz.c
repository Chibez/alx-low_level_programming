#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point of the program
*This function serves as the starting point of the program
*Return: 0 on successful execution
*/

int main(void)
{
	int m;

	for (m = 0; m <= 9; m++)
	{
		putchar(m + '0');
	}
	putchar('\n');
	return (0);
}
