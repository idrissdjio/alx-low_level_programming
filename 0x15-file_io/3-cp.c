#include <stdio.h>
#include "main.h"

/**
 * _strlen - compute string length
 * @s: string to compute length from
 * Return: length of the string
 */
size_t _strlen(char *s)
{
	size_t len;

	for (len = 0; s[len]; len++)
		;
	return (len);
}

/**
 * _close - closes a file
 * @fd: file to close
 */
void _close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_file - copies a file
 * @src_fd: source file
 * @target_fd: target file
 * @target: string of target file name
 */
void copy_file(ssize_t src_fd, ssize_t target_fd, char *target)
{
	ssize_t count;
	char *buffer[1024];

	count = read(src_fd, buffer, 1024);
	while (count != 0)
	{
		if (count == -1)
		{
			_close(src_fd);
			_close(target_fd);
			exit(98);
		}
		count = write(target_fd, buffer, count);
		if (count == -1)
		{
			_close(src_fd);
			_close(target_fd);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", target);
			exit(99);
		}
		count = read(src_fd, buffer, 1024);
	}
}

/**
 * main - copies a file to another file
 * @argc: number of arguments (should be 3)
 * @argv: strings containing source and target filenames
 * Return: Success(0), incorrect args(97), source err(98)
 * target err(99), close err(100)
 */
int main(int argc, char *argv[])
{
	ssize_t src_fd, target_fd;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	src_fd = open(argv[1], O_RDONLY);
	if (src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	target_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (target_fd == -1)
	{
		_close(src_fd);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		return (99);
	}
	copy_file(src_fd, target_fd, argv[2]);
	_close(src_fd);
	_close(target_fd);
	return (0);
}
