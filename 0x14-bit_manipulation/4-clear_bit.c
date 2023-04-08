#include "main.h"

/**
 * clear_bit - A function that sets the value of a bit to 0 at a given index
 * @n: A pointer to the number to modify
 * @index: The index of the bit to set, starting from 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);
*n &= ~(1UL << index);
return (1);
}
