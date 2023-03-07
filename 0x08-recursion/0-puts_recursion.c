/* _puts_recursion.c */

#include "main.h"

/**
 *  * _puts_recursion - prints a string followed by a new line
 *   * @s: pointer to the string to be printed
 *    *
 *     * Return: void
*/

void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
return;
}
putchar(*s);
puts_recursion(s + 1);
}
