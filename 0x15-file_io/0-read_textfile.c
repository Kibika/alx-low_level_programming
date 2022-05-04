#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - read text to stdout
 * @filename: file to read
 * @letters: number of bytes expected
 * Return: number of bytes read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int rbytes, wbytes;
	int fd;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	rbytes = read(fd, buf, letters);
	if (rbytes == -1)
	{
		free(buf);
		return (0);
	}

	wbytes = write(STDOUT_FILENO, buf, rbytes);
	if (wbytes == -1 || rbytes != wbytes)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);

	return (rbytes);
}
