#include "holberton.h"


/**
 *read_textfile - function that reads a text file and prints it to the
 *POSIX standard output.
 *@filename: Pointer to the file to read
 *@letters: the number of letter of the file
 *Return: the number of characters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, numchar;
	char *buff;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}

	numchar = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, numchar);

	close(fd);
	free(buff);

	return (numchar);
}
