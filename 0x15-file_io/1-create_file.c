#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * my_function - This is a brief description of what my_function does.
 *
 * @param1: Description of the first parameter
 * @param2: Description of the second parameter
 *
 * A more detailed description of the function goes here,
 * explaining its purpose
 * and behavior. You can also mention any relevant
 * details about the parameters,
 * return value, or any special considerations.
 *
 * Return: Description of the return value (if applicable).
 */
int create_file(const char *filename, char *text_content)
{
	int fd, res, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[len] != '\0')
		len++;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	res = write(fd, text_content, len);
	if (res == -1 || res != len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
