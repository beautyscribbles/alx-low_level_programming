#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to be flipped
 * @n: The first number to compare
 * @m: The second number to compare
 * Return: The number of bits needed to flip
 * Description: Takes two unsigned long int and flips them
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result;
unsigned int count = 0;

xor_result = n ^ m; /* XOR operation between n and m */
while (xor_result != 0)
{
if (xor_result & 1) /* If the rightmost bit is 1 */
count++;
xor_result = xor_result >> 1; /* Shift the result to the right by one */
}

return (count);
