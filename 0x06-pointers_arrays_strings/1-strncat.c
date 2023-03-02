/**
 * _strncat - joins the two strings
 * @dest: it is the pointer to the destination string
 * @src: it is the pointer to the source string
 * @n: maximum number of bytes to be used from src
 * by flh6
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0, i;

/*To search for the length of dest */
while (dest[dest_len] != '\0')
dest_len++;
/* Concatenates the @src to @dest */
for (i = 0; i < n && src[i] != '\0'; i++)
dest[dest_len + i] = src[i];
dest[dest_len + i] = '\0';

return (dest);
}
