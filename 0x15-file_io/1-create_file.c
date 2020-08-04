#include "holberton.h"

/**
 *create_file - function that creates a file.
 *@filename: the name of the file to create.
 *@text_content: is a NULL terminated string to write to the file
 *Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0, len = 0, wr = 0;
	char *buff;

	if (filename == NULL)
		return (-1);

	while (text_content[i])
	{
		len++;
		i++;
	}

	fd = open(filename, O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	buff = malloc(sizeof(char) * (len + 1));
	if (buff == NULL)
	{
		return (-1);
	}
	wr = write(fd, buff, len);
	if (wr == 0)
	{
		free(buff);
		return (-1);
	}
	return (1);

}
