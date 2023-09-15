#include <stdio.h>
/**
 * main - Entry point for the FizzBuzz program.
 *
 * Description:
 * This program prints numbers from 1 to 100,
 * replacing multiples of 3 with "Fizz,"
 * multiples of 5 with "Buzz," and multiples
 * of both 3 and 5 with "FizzBuzz."
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int dg;

	for (dg = 1; dg <= 100; dg++)
	{
		if ((dg % 3) == 0 && (dg % 5) == 0)
			printf("FizzBuzz");

		else if ((dg % 3) == 0)
			printf("Fizz");

		else if ((dg % 5) == 0)
			printf("Buzz");
		else
			printf("%d", dg);

		if (dg == 100)
			continue;
		printf(" ");
	}
	printf("\n");

	return (0);
}
