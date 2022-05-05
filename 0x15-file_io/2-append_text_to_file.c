#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - append text
 * @filename: file to append to
 * @text_content: text to append
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t wbytes;
	int fd, len;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);

		len = 0;
		while (*(text_content + len) != '\0')
			len++;

		wbytes = write(fd, text_content, len);
		if (wbytes == -1)
		{
			close(fd);
			write(STDOUT_FILENO, "fail", 4);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
