#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int product = num1 * num2;

	if (argc != 3)
	{
		printf("Error: Please provide exactly two integer arguments.\n");
		return (1);
	}
	printf("Product: %d\n", product);
	return (0);
}
