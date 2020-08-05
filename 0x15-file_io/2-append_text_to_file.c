#include "holberton.h"

/**
 *append_text_to_file - function that appends text to a file.
 *@filename: the name of the file to create.
 *@text_content: is a NULL terminated string to write to the file
 *Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, wr = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL && fd != -1)
		return (1);

	while (text_content[len])
	{
		len++;
	}

	wr = write(fd, text_content, len);
	if (wr == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);

}
