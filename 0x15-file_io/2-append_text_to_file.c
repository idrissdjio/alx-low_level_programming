#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: string name of file to append text to
 * @text_content: string to append
 * Return: Success(1), Error(-1)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, written = 0;
	size_t len;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
		written = write(fd, text_content, len);
	}
	close(fd);
	if (written == -1)
		return (-1);
	return (1);
}
