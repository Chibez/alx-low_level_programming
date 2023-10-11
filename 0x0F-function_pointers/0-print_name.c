#include <stdio.h>
/**
 * print_name - Calls the provided function to print a name.
 * @name: The name to be printed.
 * @f: A pointer to a function that takes a char* and returns void.
 *
 * This function checks if @name and @f are not NULL, and if they are valid,
 * it calls the function @f with the provided @name to print it.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
