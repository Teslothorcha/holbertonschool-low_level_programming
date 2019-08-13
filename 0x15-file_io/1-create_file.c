#include "holberton.h"
/**
 *create_file - create a file
 *@filename: file to be used
 *@text_content: text of the new file
 *Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fd, count = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	while (text_content[count])
	{
		count++;
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);
	count = write(fd, text_content, count);

	close(fd);

	return (1);
}
