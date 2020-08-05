#include "holberton.h"

#define BUFFSIZE 1024

/**
 *
 *
 *
 *
 *
 */
int main(int argc, char **argv)
{
	int fd_to, fd_from, wr;
	size_t rd;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		return (-1);
	}
	fd_to = open(argv[2], O_RDWR | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (fd_to == -1)
	{
		return (-1);
	}

	while(rd)
	{

		rd = read(fd_from, buff, 1024);
		if ( rd == -1)
		{
			dprintf(STDERR_FILENO, "Can't read from file %s\n",argv[1]);
			close(fd_from);
			exit(98);
		}

		wr = write(fd_to, buff, rd);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Can't create file %s\n", argv[2]);
			close(fd_to);
			exit(99);
		}


	}
	close(fd_to);
	close(fd_from);
	return (rd);
}
