#include <stdio.h>
/**
 * before_main - Function to execute before main.
 *
 * Description: This function is executed
 * before the main function
 * and prints a message to the standard output.
 */
void before_main(void) __attribute__((constructor));

/**
 * before_main - Function to execute before main.
 */
void before_main(void)
{
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
