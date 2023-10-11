#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - Prints the opcodes of a given memory region.
 * @main_ptr: Pointer to the memory region to print opcodes from.
 * @num_bytes: Number of bytes to print.
 */
void print_opcodes(unsigned char *main_ptr, int num_bytes)
{
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", main_ptr[i]);
		if (i < num_bytes - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}
/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 * Return: 0 on success, 1 for incorrect argument count,
 * 2 for invalid byte count.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int num_bytes = atoi(argv[1]);

	if (num_bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}
	unsigned char *main_ptr = (unsigned char *)main;

	print_opcodes(main_ptr, num_bytes);

	return (0);
}
