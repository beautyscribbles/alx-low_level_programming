/**
 * leet - Encodes a string into 1337
 * @str: String to be encoded
 *
 * Return: Encoded string
 */
char *leet(char *str)
{
int i, j;
char leet_chars[5] = {'A', 'E', 'O', 'T', 'L'};
char leet_nums[5] = {'4', '3', '0', '7', '1'};
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 5; j++)
{
if (str[i] == leet_chars[j] || str[i] == leet_chars[j] + 32)
{
str[i] = leet_nums[j];
break;
}
}
}
return (str);
}
