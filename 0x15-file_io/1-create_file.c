#include "main.h"
/**
 * create_file - function create a file
 * @filename: file name to add
 * @text_content: text content to add
 * Return: 1 when successful, -1 when successful
 */
int create_file(const char *filename, char *text_content)
{
	int iterator = 0, write_fn;

	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	while (text_content[iterator] != '\0')
	{
		iterator++;
	}

	write_fn = write(fd, text_content, iterator);

	if (write_fn == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
