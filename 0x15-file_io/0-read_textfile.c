#include "main.h"

/**
 * read_textfile - reads a file and writes it to stdout
 * @filename: name of the file to read
 * @letters: number of characters to read/write
 * Return: number of characters read/written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_count, write_count, fd;
	char *buffer;

	if (!filename || letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	read_count = read(fd, buffer, letters);
	close(fd);
	if (read_count <= 0)
	{
		free(buffer);
		return (0);
	}
	write_count = write(STDOUT_FILENO, buffer, read_count);
	free(buffer);
	if (write_count < 0)
		return (0);
	return (write_count);
}
