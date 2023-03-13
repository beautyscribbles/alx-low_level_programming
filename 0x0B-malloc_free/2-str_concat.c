#include "main.h"
#include <stdlib.h>

/**
 *  * str_concat - concatenates two strings
 *   * @s1: the first string to concatenate
 *    * @s2: the second string to concatenate
 *     *Return: points to the new string, or NULL if allocation fails
*/
char *str_concat(char *s1, char *s2)
{
char *concat;
int len 1 = 0, len2 = 0, i, j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1])
len1++;
while (s2[len2])
len2++;
concat = malloc((len1 + len2 + 1) * sizeof(char));
if (concat == NULL)
return (NULL);
for (i = 0; s1[i]; i++)
concat[i] = s1[i];
for (j = 0; s2[j]; j++)
concat[i + j] = s2[j];
concat[i + j] = '\0';
return (concat);
}

