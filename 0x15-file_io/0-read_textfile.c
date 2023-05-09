#include "main.h"
/**
 * read_textfile - text file to be read
 * @filename: the file name
 * @letters: number of letters that would be printed
 * Return: return 0 when filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fildes;
	ssize_t fn_read, fn_write;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	fildes = open(filename, O_RDONLY);

	if (fildes == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	fn_read = read(fildes, buffer, letters);
	fn_write = write(STDOUT_FILENO, buffer, fn_read);
	close(fildes);
	free(buffer);
	return (fn_write);
}
