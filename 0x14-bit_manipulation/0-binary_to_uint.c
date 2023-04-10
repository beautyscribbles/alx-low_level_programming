#include "main.h"

/**
 *  * binary_to_uint - converts a binary number to an unsigned int
 *   * @b: pointer to a string of 0 and 1 chars
 *    *
 *     * Return: 0 or 1 if b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
if (b == NULL)
return (0);
while (*b)
{
if (*b != '0' && *b != '1')
return (0);
result <<= 1;
result += (*b - '0');
b++;
}
return (result);
}
