#include "main.h"

/**
 * read_textfile - reads a text file and prints it ro POSIX standard output
 * @filename: name of file to read
 * @letters: number of letters it could read and print
 *
 * Return: number of letters, or 0 if file is null
 *or can't be opened/read or write fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(fd, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(fd);
	return (bytes);
}
