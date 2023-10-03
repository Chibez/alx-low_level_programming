#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins required to make change.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, 1 on error.
 */

int main(int argc, char *argv[])
{
	int myCents, myCoins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	myCents = atoi(argv[1]);

	while (myCents > 0)
	{
		myCoins++;
		if ((myCents - 25) >= 0)
		{
			myCents -= 25;
			continue;
		}
		if ((myCents - 10) >= 0)
		{
			myCents -= 10;
			continue;
		}
		if ((myCents - 5) >= 0)
		{
			myCents -= 5;
			continue;
		}
		if ((myCents - 2) >= 0)
		{
			myCents -= 2;
			continue;
		}
		myCents--;
	}

	printf("%d\n", myCoins);

	return (0);
}
