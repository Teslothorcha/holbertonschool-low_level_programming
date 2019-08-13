#include "holberton.h"
/**
 *read_textfile - read a file and print it's content
 *@filename: file to be used
 *@letters: amount of characters on it
 *Return: amount of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (!buf)
		return (0);

	r = read(fd, buf, letters);

	close(fd);

	write(STDOUT_FILENO, buf, r);

	return (r);
}
