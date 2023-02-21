#include <unistd.h>

/**
 *  _putchar -writes the charatcer c in stdout
 *  @c: char is printed
 *
 *  Return: On success 1.
 *  On error, -1 is returned, and erro is set appropraitely.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
