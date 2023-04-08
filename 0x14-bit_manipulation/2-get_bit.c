i#include "main.h"

/**
 * get_bit - Entry point
 * Description: Returns the value of a bit at a given index
 * @n: Number to get the bit from
 * @index: The index to be used
 *
 * Return: -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/* index is within range of - 8 */
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	/*Checks if the position of the bit is shifted*/
	n >>= index;
	if (n & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
