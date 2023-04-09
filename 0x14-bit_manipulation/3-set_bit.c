#include "main.h"

/**
 *  * set_bit - a function that sets the value of a bit to 1 at a given index.
 *   * @n: input
 *    * @index: input
 *     *
 *      * Return: 1 if success, or -1 if unsuccessful
*/

int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = ((1UL << index) | *n);
return (1);
}
