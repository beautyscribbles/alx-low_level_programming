#include <main.h>

/**
 * cap_string - Capitalize all words in a string.
 * @s: The string to be capitalized.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (i == 0 || isspace(s[i - 1]) ||
s[i - 1] == ',' || s[i - 1] == ';' ||
s[i - 1] == '.' || s[i - 1] == '!' ||
s[i - 1] == '?' || s[i - 1] == '"' ||
s[i - 1] == '(' || s[i - 1] == ')' ||
s[i - 1] == '{' || s[i - 1] == '}')
{
s[i] = toupper(s[i]);
}
}
return (s);
}
