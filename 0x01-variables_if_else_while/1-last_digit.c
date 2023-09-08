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
	int lastDigit;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	lastDigit  = n % 10;
		if (lastDigit > 5)
		{
			printf("last digit of %d is %d and is greater than 5", n, lastDigit);
		}
		else if (lastDigit == 5)
		{
			printf("last digit of %d is %d and is  0", n, lastDigit);
		}
		else
		{
		printf("last digit of %d is %d and is less than 6 and not 0", n, lastDigit);
		}
	return (0);
}
