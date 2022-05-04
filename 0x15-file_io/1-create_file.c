#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 *
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t wbytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = 0;
		while (*(text_content + len) != '\0')
			len++;
		wbytes = write(fd, text_content,len);
		if (wbytes == -1)
		{
			write(1, "fails", 6);
			return (-1);
		}
	}
	close(fd);
	return(1);
}
