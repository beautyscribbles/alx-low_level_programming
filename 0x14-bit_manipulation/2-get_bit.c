#include "main.h"

/**
 *  * get_bit - gets the bit to be used
 *  * description:  a function that returns bit value at a given index.
  *    * @n: Number to get the bit from
 *     * @index: index number starting from 0 of the bit you want to get
 *     Return: the value of the bit at index index or -1 if an error occured
 *      *
*/

int get_bit(unsigned long int n, unsigned int index)
{
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
