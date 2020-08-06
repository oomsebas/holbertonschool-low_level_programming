#include "holberton.h"

#define BUFFSIZE 1024

/**
 *main - function that copies a source file to a dest file
 *@argc: number of arguments
 *@argv: arguments passed to the function
 *Return: 0 if success, and 1 if fail
 */
int main(int argc, char **argv)
{
	int fd_to, fd_from, wr;
	int rd;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",argv[1]);
		close(fd_from);
		exit(98);
	}
	fd_to = open(argv[2],  O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_to);
		exit(99);
	}

	while(rd)
	{

		rd = read(fd_from, buff, 1024);
		if ( rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",argv[1]);
			close(fd_from);
			exit(98);
		}

		wr = write(fd_to, buff, rd);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_to);
			exit(99);
		}


	}
	if(close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
       		exit(100);

	}
	if (close(fd_from) == -1)
	{
       		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
       		exit(100);

	}
	return (0);
}
