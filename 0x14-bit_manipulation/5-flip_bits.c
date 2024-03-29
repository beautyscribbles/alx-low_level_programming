#include "main.h"

/**
 *  * flip_bits - a function that returns the number of bits to be flipped
 *    * @n: first number to be counted.
 *     * @m: second number to be counted.
 *      * Return: 0 or 1
**/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, flips = 0;
unsigned long int current;
unsigned long int ano_num = n ^ m;

for (i = 63; i >= 0; i--)
{
current = ano_num >> i;
if (current & 1)
flips++;
}
return (flips);
}
