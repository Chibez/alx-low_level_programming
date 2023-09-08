#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Descreption Geting the last digit of the number stored in the variable
 *Return: Always zero (0)
*/

int main(void)
{
	int n;
	int lastD;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	lastD  = n % 10;
		if (lastD >= 6)
		{
			printf("LastD of %d is %d and is greater than 5\n", n, lastD);
		}
		else if (lastD < 0)
		{
			printf("LastD of %d is %d and is less than 6 and not 0\n", n, lastD);
		}
		else if (lastD > 0 && lastD <= 5)
		{
			printf("LastD of %d is %d and less than 6 and not 0\n", n, lastD);
		}
		else
			printf("LastD of %d is %d and is 0\n", n, lastD);
	return (0);
}
