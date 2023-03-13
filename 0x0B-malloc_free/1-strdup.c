#include "main.h"
#include <stdlib.h>

/**
 *  * _strdup - returns a pointer to a new string
 *   * string str.
 *    * @str: input string
 *     *
 *      * Return: pointer to duplicated string or NULL
 *       * available or if str is NULL
*/

char *_strdup(char *str)
{
char *dup_str;
int len = 0, i;
if (str == NULL)
return (NULL);
while (str[len])
len++;
dup_str = malloc(sizeof(char) * (len + 1));
if (dup_str == NULL)
return (NULL);
for (i = 0; i <= len; i++)
dup_str[i] = str[i];
return (dup_str);
}

