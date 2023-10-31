#include "main.h"

/**
 * append_text_to_file - append text to end of file.
 *@filename: file to append text to
 *@text_content: content to append
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0;
	int len = 0;

	if (!filename)
		return (-1);
	for (len = 0; text_content[len];)
		len++;
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (len)
		bytes = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}
