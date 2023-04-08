#include <unistd.h>

/**
 * _putchar - writes out the character to be printed
 * @c: The character to print
 *
 * Return: 1 when successful
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
