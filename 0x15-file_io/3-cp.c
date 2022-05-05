#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * copy to file - copy from file to file
 * @filenamefrom: original file
 * @filenameto: copy to
 * Return: nothing
 */
void copy_to_file(const char *filenamefrom, const char *filenameto)
{
	ssize_t rbytes, wbytes;
	int fdr, fdw;
	char *text_content[1024];

	fdr = open(filenamefrom, O_RDONLY);
	if (fdr < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filenamefrom);
		exit(98);
	}

	fdw = open(filenameto, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdw < 0)
	{
		close(fdr);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filenameto);
		exit(99);
	}
	do {
		/* READ */
		rbytes = read(fdr, text_content, 1024);
		if (rbytes < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filenamefrom);
			exit(98);
		}
		/* WRITE */
		wbytes = write(fdw, text_content, rbytes);
		if (wbytes < rbytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filenameto);
			exit(99);
		}
	}	while (wbytes == 1024);
	if (close(fdr) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdr);
		close(fdw);
		exit(100);
	}
	if (close(fdw) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdw);
		exit(100);
	}

}


/**
 * main - check the code
 * @ac: argument count
 * @av: argument values
 * Return: 0 or -1.
 */
int main(int ac, char *av[])
{
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_to_file(av[1], av[2]);
	return (0);
}
