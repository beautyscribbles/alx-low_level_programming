#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string to search
 *  * @accept: the bytes to accept
 *   *
 *    * Return: the number of bytes in the initial segment
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int len = 0;
while (*s && strchr(accept, *s++))
len++;
return (len);
}
