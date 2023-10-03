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
	int cents, coins = 0;
	int deno[] = {25, 10, 5, 2, 1};
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	for (i = 0; i < 5; i++)
	{
		coins += cents / deno[i];
		cents %= deno[i];
	}
	printf("%d\n", coins);
	return (0);
}
