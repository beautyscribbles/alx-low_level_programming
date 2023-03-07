#include "main.h"
/*
 * _puts_recursion - prints a string, followed by a new line
 * @s: pointer to the string to be printed
 *  *
 *   * Return: void
*/
void _puts_recursion(char *s)
{
if (*s == '\0') /* base case: end of string */
{
putchar('\n');
return;
}
putchar(*s); /* print the current character */
_puts_recursion(s + 1); /* call function recursively with the next character */
}
