#include "main.h"
/**
 *  * _strpbrk - searches a string for any of a set of bytes
 *   *
 *    * @s: the string to search
 *     * @accept: the set of bytes to search for
 *      *
 *       * Return: NULL
*/
char *_strpbrk(char *s, char *accept)
{
char *p;
while (s != '\0')
{
for (p = accept; *p != '\0'; ++p)
{
if (s == *p)
{
return (s);
}
}
++s;
}
return (NULL);
}
