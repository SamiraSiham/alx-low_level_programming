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
	int open_file, write_file, len = 0;

	if (!filename || !text_content)
		return (-1);
	for (len = 0; text_content[len];)
		len++;
	open_file = open(filename, O_WRONLY | O_APPEND);
	write_file = write(open_file, text_content, len);

	if (open_file == -1 || write_file == -1)
		return (-1);
	close(open_file);
	return (1);
}
