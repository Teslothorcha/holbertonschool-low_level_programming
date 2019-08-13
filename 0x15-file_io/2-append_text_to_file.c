#include "holberton.h"
/**
 *append_text_to_file - append text to file
 *@filename: file to be used
 *@text_content: text to append
 *Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
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
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	write(fd, text_content, count);

	close(fd);

	return (1);
}
