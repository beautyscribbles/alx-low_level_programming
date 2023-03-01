#include "holberton.h"
#include "main.h"

 *           *_strcat - concatenates @src to @dest
 *            * @dest: pointer to destnation input
 *             * @src: pointer to source input
 *              * written by flh6
 *               * Return: pointer to resulting string @dest
 *
 */
char *_strcat(char *dest, char *src)
{
int index = 0;
int dest_len = 0;
while (dest[index++])
dest_len++;
for (index = 0; src[index]; index++)
dest[dest_len++] = src[index];
return (dest);
}

return (dest);
}
