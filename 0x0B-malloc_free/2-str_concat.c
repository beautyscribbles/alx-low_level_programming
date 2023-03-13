#include "main.h"
#include <stdlib.h>

/**
 *  * str_concat - Concatenates two strings.
 *   * @s1: The first string to be concatenated.
 *    * @s2: The second string to be concatenated.
 *     *
 *      * Return: If concatenation fails - NULL.
 *       *         Otherwise - a pointer to the newly-allocated space in memory
 *        *                     containing the concatenated strings.
*/
char *str_concat(char *s1, char *s2)
{
char *concat_str;
int i, j, len1 = 0, len2 = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;
concat_str = malloc(sizeof(char) * (len1 + len2 + 1));
if (concat_str == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
concat_str[i] = s1[i];
for (j = 0; s2[j] != '\0'; j++)
concat_str[i + j] = s2[j];
concat_str[i + j] = '\0';
return (concat_str);
}
