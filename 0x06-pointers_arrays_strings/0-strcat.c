/**
 * _strcat - Joins two strings.
 * @dest: Points to the destination string.
 * @src: Points to the source string.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
int dest_len = 0, i;

/* Collect the length of @dest */
while (dest[dest_len] != '\0')
dest_len++;

/* Then attach @src to @dest */
for (i = 0; src[i] != '\0'; i++)
dest[dest_len + i] = src[i];

/* Finally, include the terminating null byte */
dest[dest_len + i] = '\0';

return (dest);
}
