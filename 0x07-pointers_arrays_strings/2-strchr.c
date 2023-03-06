#include "main.h"
#define NULL 0
/**
 * _strchr - Locates a character in a string
 * @s: The string to search
 *  * @c: The character to locate
 *   *
 *    * Return: NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (*s == c)
return (s);
return (NULL);
}

