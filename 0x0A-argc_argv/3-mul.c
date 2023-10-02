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
	int number1;
	int number2;
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	number1 = atoi(argv[1]);
	number2 = atoi(argv[2]);
	product = number1 * number2;

	printf("%d\n", product);

	return (0);
}
