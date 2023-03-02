/**
 * _strcmp - Compare two strings
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 *
 * Return: Integer indicating equal strings (0), and greater num. (>0 or <0)
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] == s2[i] && s1[i] != '\0')
i++;

return (s1[i] - s2[i]);
}
