#include "main.h"

/**
 * set_bit - Entry point
 * Description: Sets the value of a bit to 1
 * @n: Changes number
 * @index: the number to be set
 * Return: 1 if successful or -1 if unsuccessful
*/
int set_bit(unsigned long int *n, unsigned int index)
/* The index is within the range of -8 */
if (index >= (sizeof(unsigned long int) * 8))
{
return (-1);
}
/*  The bit is set to 1 */
*n |= (1 << index);
return (1);
}
