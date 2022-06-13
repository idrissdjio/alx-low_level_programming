#include "main.h"

/**
 * create_file - create a file
 * @filename: name of the file to create
 * @text_content: string in the file
 * Return: 1 or -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t written = 0, fd;
	size_t len;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
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
