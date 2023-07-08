#include "main.h"

/**
 *  * binary_to_uint - converts a binary number to an unsigned int.
 *   * @b: a pointer a string of 0 and 1 chars.
 *   * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *    *         Otherwise - the converted number.
*/

unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int brny = 0;
if (!b)
return (0);
for (i = 0; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
brny = 2 * brny + (b[i] - '0');
}
return (brny);
}
