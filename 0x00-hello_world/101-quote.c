#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: program is used to terminate the execution
 */
int main(void)
{
	const char message[] =
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, message, sizeof(message) - 1);
	return (1);
}
