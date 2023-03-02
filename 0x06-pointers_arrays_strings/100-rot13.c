/**
 * rot13 - Encodes a string using rot13
 * @str: The string to encode
 *
 * Return: A pointer to the encoded string
 */
char *rot13(char *str)
{
int i, j;
char *result = str;
for (i = 0; str[i] != '\0'; i++)
{
if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
{
result[i] = str[i] + 13;
}
else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
{
result[i] = str[i] - 13;
}
}
return (result);
}
