#include "main.h"
/**
 *  *binary_to_uint - converts a binary number to an unsigned int
 *   *@b: Input
 *    *Return: 1 when succesful
*/
unsigned int binary_to_uint(const char *b)
{
int i = 0;
unsigned int output = 0;
if (b == NULL)
{
return (0);
}
while (b[i])
{
if (b[i] == '0')
{
output =  ((2 * output)+(b[i] - '0'));
}
else if (b[i] == '1')
{
output =  ((2 * output)+(b[i] - '0'));
}
else
{
return (0);
}
i++;
}
return (output);
}
