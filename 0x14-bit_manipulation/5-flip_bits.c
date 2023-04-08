#include "main.h"

/**
 * flip_bits - Entry point
 * Description: Returns the number of bits that will be flipped
 * @n: Input digit
 * @m: Input digit
 *
 * Return: No of bits that will be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_op = n ^ m;
unsigned int counter = 0;
/*Starts counting*/
while (xor_op)
counter += (xor_op & 1);
xor_op >>= 1;/*Increase the bit by 1*/
}
return (counter);
}
