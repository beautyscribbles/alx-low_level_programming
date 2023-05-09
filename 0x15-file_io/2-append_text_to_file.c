#include "main.h"

/**
 * append_text_to_file - append text to  a file
 * @filename: name of file
 * @text_content: text content to write
 * Return: Return 1 if the file exists and -1 if the file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, write_fn;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
		{
		};
		write_fn = write(fd, text_content, i);
		if (write_fn == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
