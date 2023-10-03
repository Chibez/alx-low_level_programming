#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number
 * of coins required to make change.
 * @argc: The number of arguments
 * passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int myCents, myCoins = 0;
	int denominations[] = {25, 10, 5, 2, 1};
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	myCents = atoi(argv[1]);
	for (i = 0; i < 5; i++)
	{
		myCoins += myCents / denominations[i];
		myCents %= denominations[i];
	}
	printf("%d\n", myCoins);
	return (0);
}
