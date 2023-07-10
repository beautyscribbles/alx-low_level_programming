/* Auth: Florence L. Hanson */

#include "main.h"

/**
 * read_textfile - reads a text file and prints
 *  it to the POSIX standard output.
 * @filename: pointer to file containing chars.
 * @letters: letters to be read and printed.
 *
 * Return: number of letters it could read & print
 *         otherwise 0.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
        ssize_t  op, r, wr;
        char *storage;

        if (filename == NULL)
                return (0);

        storage = malloc(sizeof(char) * letters);
        /* allocating memory */

        if (storage == NULL)
                return (0);
        /* checking if malloc was succesful */

        op = open(filename, O_RDONLY); /* opens file in read only mode*/
        r = read(op, storage, letters);
        wr = write(STDOUT_FILENO, storage, r);

        if (op == -1 || r == -1 || wr == -1 || wr != r)
        {
                free(storage);
                return (0);
        }

        free(storage);
        close(op);

        return (wr);
        /* returning bytes stored in wr.*/
}
