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
	int addPoNum, dig, sum = 0;

	for (addPoNum = 1; addPoNum < argc; addPoNum++)
	{
		for (dig = 0; argv[addPoNum][dig]; dig++)
		{
			if (argv[addPoNum][dig] < '0' || argv[addPoNum][dig] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[addPoNum]);
	}
	printf("%d\n", sum);
	return (0);
}
