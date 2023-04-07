#include "main.h"

/**
 *  * get_bit - Entry point
  *    * @n: Number to get the bit from
 *     * @index: this is the index, starting from 0 of the bit you want to get
 *     Returns: the value of the bit at index index or -1 if an error occured
 *      *
*/

int get_bit(unsigned long int n, unsigned int index)
{
/
if (index >= (sizeof(unsigned long int) * 8))
{
return (-1);
}
>>= index;
if (n & 1)
{
return (1);
}
else
{
return (0);/*return value is 0*/
}
}
