#ifndef MY_MAIN_H
#define MY_MAIN_H

#include <stdlib.h>

/**Protype for the Bit manipulation C files
*/

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif /* MY_MAIN_H */
