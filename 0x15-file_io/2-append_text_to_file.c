#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * append_text_to_file - Appends text content to the end of a file.
 *
 * @filename: The name of the file to which text_content should be appended.
 * @text_content: The NULL-terminated string to add to the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, res, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[len] != '\0')
		len++;

	fd = open(filename, O_WRONLY | O_APPEND);
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
